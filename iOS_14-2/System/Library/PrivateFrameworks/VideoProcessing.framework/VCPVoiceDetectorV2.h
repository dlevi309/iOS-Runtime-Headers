/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVoiceDetector.h>

@interface VCPVoiceDetectorV2 : VCPVoiceDetector {

	BOOL _voiceActivityNew;
	OpaqueAudioComponentInstanceRef _audioUnit;

}
-(id)results;
-(id)init;
-(int)loadModel;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(int)setupWithAudioStream:(const AudioStreamBasicDescription*)arg1 ;
-(void)dealloc;
@end

