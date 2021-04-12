/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioRelayIOControllerSettings : NSObject {

	AudioStreamBasicDescription _audioFormat;
	VCRemoteCodecInfo _remoteCodecInfo;

}

@property (nonatomic,readonly) const AudioStreamBasicDescription* audioFormat; 
@property (nonatomic,readonly) const VCRemoteCodecInfo* remoteCodecInfo; 
@property (nonatomic,readonly) unsigned samplesPerFrame; 
-(const AudioStreamBasicDescription*)audioFormat;
-(unsigned)samplesPerFrame;
-(const VCRemoteCodecInfo*)remoteCodecInfo;
-(id)initWithAudioFormat:(const AudioStreamBasicDescription*)arg1 remoteCodecInfo:(const VCRemoteCodecInfo*)arg2 ;
@end

