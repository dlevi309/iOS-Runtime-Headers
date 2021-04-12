/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString, CSAsset, CSKeywordAnalyzerNDAPI, CSAudioCircularBuffer;

@interface CSVTUIKeywordDetector : NSObject {

	NSString* _languageCode;
	CSAsset* _currentAsset;
	CSKeywordAnalyzerNDAPI* _keywordAnalyzer;
	float _lastKeywordScore;
	float _keywordThreshold;
	CSAudioCircularBuffer* _audioBuffer;
	unsigned long long _extraSamplesAtStart;

}
-(void)reset;
-(id)initWithLanguageCode:(id)arg1 ;
-(id)analyze:(id)arg1 ;
-(unsigned long long)_sampleLengthFrom:(unsigned)arg1 To:(unsigned)arg2 ;
-(id)triggeredUtterance:(id)arg1 ;
@end

