/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSDictionary, CSVTSecondPassPhraseScore;

@interface CSVTSecondPassScorer : NSObject {

	NSDictionary* _phraseMap;
	CSVTSecondPassPhraseScore* _triggeredPhrase;

}

@property (nonatomic,retain) CSVTSecondPassPhraseScore * triggeredPhrase;              //@synthesize triggeredPhrase=_triggeredPhrase - In the implementation block
@property (nonatomic,retain) NSDictionary * phraseMap;                                 //@synthesize phraseMap=_phraseMap - In the implementation block
-(id)description;
-(id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)arg1 ;
-(id)initWithAsset:(id)arg1 firstPassSource:(unsigned long long)arg2 ;
-(void)updateWithNdapiResults:(id)arg1 ;
-(void)updateWithCtcCheckerResults:(id)arg1 ;
-(id)getTriggeredPhraseWithSecondChanceEnabled:(BOOL)arg1 ;
-(id)getNearMissPhraseWithSecondChanceEnabled:(BOOL)arg1 ;
-(id)bestScoringPhrase;
-(NSDictionary *)phraseMap;
-(void)setPhraseMap:(NSDictionary *)arg1 ;
-(CSVTSecondPassPhraseScore *)triggeredPhrase;
-(void)setTriggeredPhrase:(CSVTSecondPassPhraseScore *)arg1 ;
@end

