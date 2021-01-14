/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@class NSArray;

@interface VTKeywordAnalyzerResults : NSObject {

	unsigned long long _detectorType;
	unsigned long long _numPhraseResults;
	NSArray* _phraseScores;

}

@property (assign,nonatomic) unsigned long long detectorType;                  //@synthesize detectorType=_detectorType - In the implementation block
@property (assign,nonatomic) unsigned long long numPhraseResults;              //@synthesize numPhraseResults=_numPhraseResults - In the implementation block
@property (nonatomic,retain) NSArray * phraseScores;                           //@synthesize phraseScores=_phraseScores - In the implementation block
-(id)init;
-(unsigned long long)detectorType;
-(void)setDetectorType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)numPhraseResults;
-(NSArray *)phraseScores;
-(void)setNumPhraseResults:(unsigned long long)arg1 ;
-(void)setPhraseScores:(NSArray *)arg1 ;
@end

