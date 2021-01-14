/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAudioPCMBuffer, SHMutableSignature;

@interface VCPSongDetector : NSObject {

	AVAudioPCMBuffer* _pcmBuffer;
	long long _framePosition;
	float _sampleRate;
	SHMutableSignature* _signature;
	SCD_Struct_VC6 _startTime;
	SCD_Struct_VC6 _endTime;

}
-(id)results;
-(id)init;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end

