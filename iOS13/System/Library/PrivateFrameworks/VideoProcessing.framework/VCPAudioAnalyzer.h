/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVoiceDetector, VCPAudioClassifier, VCPLoudnessAnalyzer;

@interface VCPAudioAnalyzer : NSObject {

	void* _inputBuffer;
	AudioTimeStamp _audioTimestamp;
	AudioBufferList* _audioBufferList;
	int _sampleBatchSize;
	VCPVoiceDetector* _voiceDetector;
	VCPAudioClassifier* _audioClassifier;
	VCPLoudnessAnalyzer* _loudnessAnalyzer;
	int _bufferedSamples;
	BOOL _initialized;

}
-(void)dealloc;
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC5*)arg1 ;
-(id)audioFormatRequirements;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 ;
-(id)voiceDetections;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(BOOL)arg2 ;
-(int)analyzeAsset:(id)arg1 cancel:(/*^block*/id)arg2 results:(id*)arg3 ;
-(int)analyzeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

