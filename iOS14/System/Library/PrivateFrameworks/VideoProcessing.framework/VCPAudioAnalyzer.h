/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVoiceDetector, VCPAudioClassifier, VCPLoudnessAnalyzer, VCPSongDetector;

@interface VCPAudioAnalyzer : NSObject {

	void* _inputBuffer;
	AudioTimeStamp _audioTimestamp;
	AudioBufferList* _audioBufferList;
	int _sampleBatchSize;
	VCPVoiceDetector* _voiceDetector;
	VCPAudioClassifier* _audioClassifier;
	VCPLoudnessAnalyzer* _loudnessAnalyzer;
	VCPSongDetector* _songDetector;
	int _bufferedSamples;
	BOOL _initialized;

}
-(int)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC5*)arg1 ;
-(id)audioFormatRequirements;
-(id)voiceDetections;
-(id)initWithAnalysisTypes:(unsigned long long)arg1 forStreaming:(BOOL)arg2 ;
-(int)analyzeAsset:(id)arg1 cancel:(/*^block*/id)arg2 results:(id*)arg3 ;
-(int)analyzeSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end

