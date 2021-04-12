/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@class SSRTriggerPhraseDetectorNDAPI, CSAudioCircularBuffer;

@interface CSVTUIKeywordDetector : NSObject {

	SSRTriggerPhraseDetectorNDAPI* _keywordAnalyzer;
	float _lastKeywordScore;
	float _keywordThreshold;
	CSAudioCircularBuffer* _audioBuffer;
	unsigned long long _extraSamplesAtStart;

}
-(id)initWithAsset:(id)arg1 ;
-(id)analyze:(id)arg1 ;
-(void)reset;
-(unsigned long long)_sampleLengthFrom:(unsigned)arg1 To:(unsigned)arg2 ;
-(id)triggeredUtterance:(id)arg1 ;
@end

