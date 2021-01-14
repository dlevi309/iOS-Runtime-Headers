/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(const VCRemoteCodecInfo*)remoteCodecInfo;
-(const AudioStreamBasicDescription*)audioFormat;
-(unsigned)samplesPerFrame;
-(id)initWithAudioFormat:(const AudioStreamBasicDescription*)arg1 remoteCodecInfo:(const VCRemoteCodecInfo*)arg2 ;
@end

