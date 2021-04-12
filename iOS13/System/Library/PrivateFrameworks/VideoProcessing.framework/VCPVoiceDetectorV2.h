/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVoiceDetector.h>

@interface VCPVoiceDetectorV2 : VCPVoiceDetector {

	BOOL _voiceActivityNew;
	OpaqueAudioComponentInstanceRef _audioUnit;

}
-(id)init;
-(void)dealloc;
-(id)results;
-(int)loadModel;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(int)setupWithAudioStream:(const AudioStreamBasicDescription*)arg1 ;
@end

