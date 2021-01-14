/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithAsset:(id)arg1 firstPassSource:(unsigned long long)arg2 ;
-(id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)arg1 ;
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

