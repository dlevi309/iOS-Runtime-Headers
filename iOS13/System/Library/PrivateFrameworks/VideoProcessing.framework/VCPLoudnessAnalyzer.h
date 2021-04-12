/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAudioPCMBuffer, NSMutableArray;

@interface VCPLoudnessAnalyzer : NSObject {

	AVAudioPCMBuffer* _pcmBuffer;
	long long _framePosition;
	LkFsMeasure* _loudnessAnalyzer;
	CAStreamBasicDescription* _processFormat;
	float _sampleRate;
	vector<double, std::__1::allocator<double> >* _peakValues;
	vector<double, std::__1::allocator<double> >* _momentaryEnergyValues;
	vector<float, std::__1::allocator<float> >* _loudnessSampleBuffer;
	NSMutableArray* _loudnessResults;
	unsigned _samplesFor100ms;
	AUOutputBL* _samplesForProcessingBufferList;

}
-(id)init;
-(void)dealloc;
-(id)results;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end

