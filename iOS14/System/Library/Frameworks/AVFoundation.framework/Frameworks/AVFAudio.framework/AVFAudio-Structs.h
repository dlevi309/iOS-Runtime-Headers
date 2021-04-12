/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct OpaqueAudioComponent* OpaqueAudioComponentRef;

typedef struct _NSZone* NSZoneRef;

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

typedef const struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct OpaqueMusicTrack* OpaqueMusicTrackRef;

typedef struct SMPTETime {
	short mSubframes;
	short mSubframeDivisor;
	unsigned mCounter;
	unsigned mType;
	unsigned mFlags;
	short mHours;
	short mMinutes;
	short mSeconds;
	short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
	double mSampleTime;
	unsigned long long mHostTime;
	double mRateScalar;
	unsigned long long mWordClockTime;
	SMPTETime mSMPTETime;
	unsigned mFlags;
	unsigned mReserved;
} AudioTimeStamp;

typedef struct OpaqueMusicSequence* OpaqueMusicSequenceRef;

