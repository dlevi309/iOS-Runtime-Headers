/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString;

@interface CSAudioZeroCounter : NSObject {

	NSString* _methodToken;
	unsigned _continuousZeroCounter;
	unsigned _zeroCounterWinSz;
	unsigned _numChannels;
	unsigned _analyzeStep;
	float _sampleRate;
	BOOL _shouldDeinterleaveAudio;

}
-(id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned)arg3 ;
-(void)resetWithSampleRate:(float)arg1 ;
-(void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned)arg2 ;
-(void)stopReportZeroStatistics;
@end

