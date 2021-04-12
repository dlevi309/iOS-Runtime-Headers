/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class SNAudioStreamAnalyzer, AVAudioPCMBuffer, NSMutableArray;

@interface VCPAudioClassifier : NSObject {

	unsigned long long _analysisTypes;
	SNAudioStreamAnalyzer* _SNAnalyzer;
	AVAudioPCMBuffer* _pcmBuffer;
	long long _framePosition;
	float _sampleRate;
	NSMutableArray* _detectors;

}
-(id)results;
-(id)initWithTypes:(unsigned long long)arg1 ;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end

