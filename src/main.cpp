#include <Arduino.h>
#include <LittleFS.h>
#include <flatcc/flatcc_builder.h>
#include <fb_melodies_builder.h>

void setup() {
  Serial.begin(9600);
  delay(2000);

  // Initialize LittleFS
  if (!LittleFS.begin()) {
    Serial.println("Failed to mount LittleFS");
    while (1) {
      delay(100);
    }
  }

  float frequency1 = random(500, 2000);
  int32_t duration1 = random(100, 1000);
  float frequency2 = random(500, 2000);
  int32_t duration2 = random(100, 1000);

  // Create FlatBuffers builder
  flatcc_builder_t builder;
  flatcc_builder_init(&builder);

  // Create individual tones
  melodies_Tone_ref_t tone1 = melodies_Tone_create(&builder, frequency1, duration1); // Frequency: 440 Hz, Duration: 500 ms
  melodies_Tone_ref_t tone2 = melodies_Tone_create(&builder, frequency2, duration2); // Frequency: 523.25 Hz, Duration: 500 ms
  melodies_Tone_ref_t tones[] = { tone1, tone2 };
  melodies_Tone_vec_ref_t tones_vec = melodies_Tone_vec_create(&builder, tones, sizeof(tones) / sizeof(tones[0]));

  melodies_Melody_start_as_root(&builder);
  melodies_Melody_label_create_str(&builder, "Random Melody");
  melodies_Melody_tones_add(&builder, tones_vec);
  melodies_Melody_speed_add(&builder, 1.0);
  melodies_Melody_end_as_root(&builder);

  size_t size;
  void* buf = flatcc_builder_get_direct_buffer(&builder, &size);

  // Get the serialized buffer
  const void* serialized_buffer = flatcc_builder_get_direct_buffer(&builder, 0);
  size_t buffer_size = flatcc_builder_get_buffer_size(&builder);

  // Use the serialized data as needed, e.g., store it in non-volatile memory or send it over a network.
  File file = LittleFS.open("/data/melody.fb", "w");
  if (!file) {
      Serial.println("Failed to open file for writing!");
      return;
  }

  // Write the buffer to the file
  size_t bytes_written = file.write(reinterpret_cast<const uint8_t*>(serialized_buffer), buffer_size);
  if (bytes_written != buffer_size) {
      Serial.println("Error writing buffer to file!");
  }

  // Close the file
  file.close();

  // Cleanup
  flatcc_builder_clear(&builder);

  Serial.println("Melody saved to melody.fb");
}

void loop() {
  // Your loop code here
}