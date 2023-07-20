#ifndef FB_MELODIES_READER_H
#define FB_MELODIES_READER_H

/* Generated by flatcc 0.6.1 FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension "bin"
#endif


typedef const struct melodies_Tone_table *melodies_Tone_table_t;
typedef struct melodies_Tone_table *melodies_Tone_mutable_table_t;
typedef const flatbuffers_uoffset_t *melodies_Tone_vec_t;
typedef flatbuffers_uoffset_t *melodies_Tone_mutable_vec_t;
typedef const struct melodies_Melody_table *melodies_Melody_table_t;
typedef struct melodies_Melody_table *melodies_Melody_mutable_table_t;
typedef const flatbuffers_uoffset_t *melodies_Melody_vec_t;
typedef flatbuffers_uoffset_t *melodies_Melody_mutable_vec_t;
#ifndef melodies_Tone_file_identifier
#define melodies_Tone_file_identifier 0
#endif
/* deprecated, use melodies_Tone_file_identifier */
#ifndef melodies_Tone_identifier
#define melodies_Tone_identifier 0
#endif
#define melodies_Tone_type_hash ((flatbuffers_thash_t)0xe880389d)
#define melodies_Tone_type_identifier "\x9d\x38\x80\xe8"
#ifndef melodies_Tone_file_extension
#define melodies_Tone_file_extension "bin"
#endif
#ifndef melodies_Melody_file_identifier
#define melodies_Melody_file_identifier 0
#endif
/* deprecated, use melodies_Melody_file_identifier */
#ifndef melodies_Melody_identifier
#define melodies_Melody_identifier 0
#endif
#define melodies_Melody_type_hash ((flatbuffers_thash_t)0x1b69b1ed)
#define melodies_Melody_type_identifier "\xed\xb1\x69\x1b"
#ifndef melodies_Melody_file_extension
#define melodies_Melody_file_extension "bin"
#endif



struct melodies_Tone_table { uint8_t unused__; };

static inline size_t melodies_Tone_vec_len(melodies_Tone_vec_t vec)
__flatbuffers_vec_len(vec)
static inline melodies_Tone_table_t melodies_Tone_vec_at(melodies_Tone_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(melodies_Tone_table_t, vec, i, 0)
__flatbuffers_table_as_root(melodies_Tone)

__flatbuffers_define_scalar_field(0, melodies_Tone, frequency, flatbuffers_float, float, 0.00000000f)
__flatbuffers_define_scalar_field(1, melodies_Tone, duration, flatbuffers_int32, int32_t, INT32_C(0))

struct melodies_Melody_table { uint8_t unused__; };

static inline size_t melodies_Melody_vec_len(melodies_Melody_vec_t vec)
__flatbuffers_vec_len(vec)
static inline melodies_Melody_table_t melodies_Melody_vec_at(melodies_Melody_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(melodies_Melody_table_t, vec, i, 0)
__flatbuffers_table_as_root(melodies_Melody)

__flatbuffers_define_string_field(0, melodies_Melody, label, 0)
__flatbuffers_define_vector_field(1, melodies_Melody, tones, melodies_Tone_vec_t, 0)
__flatbuffers_define_scalar_field(2, melodies_Melody, speed, flatbuffers_float, float, 0.00000000f)


#include "flatcc/flatcc_epilogue.h"
#endif /* FB_MELODIES_READER_H */
