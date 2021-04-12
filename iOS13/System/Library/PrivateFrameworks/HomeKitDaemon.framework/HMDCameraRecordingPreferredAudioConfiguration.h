/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSNumber;

@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject {

	NSNumber* _bitRate;
	long long _sampleRate;

}

@property (readonly) NSNumber * bitRate;                //@synthesize bitRate=_bitRate - In the implementation block
@property (readonly) long long sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
-(id)description;
-(long long)sampleRate;
-(NSNumber *)bitRate;
-(id)initWithSampleRate:(long long)arg1 bitRate:(id)arg2 ;
@end

