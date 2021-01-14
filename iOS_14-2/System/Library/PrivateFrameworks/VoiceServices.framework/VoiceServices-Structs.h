/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSString, NSAttributedString;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef union {
	NSString* stringValue;
	NSAttributedString* attributedStringValue;
} SCD_Union_VS3;

typedef struct __VSRecognitionDisambiguationContext* VSRecognitionDisambiguationContextRef;

typedef struct __VSRecognition* VSRecognitionRef;

typedef struct {
	/*function pointer*/void* field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
} SCD_Struct_VS6;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFError* CFErrorRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_VS12;

