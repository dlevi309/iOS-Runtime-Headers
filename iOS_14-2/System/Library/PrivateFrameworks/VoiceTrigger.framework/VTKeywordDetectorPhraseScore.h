/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTKeywordDetectorPhraseScore : NSObject {

	float _score;
	unsigned long long _phraseId;

}

@property (assign,nonatomic) unsigned long long phraseId;              //@synthesize phraseId=_phraseId - In the implementation block
@property (assign,nonatomic) float score;                              //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(unsigned long long)phraseId;
-(void)setPhraseId:(unsigned long long)arg1 ;
-(id)initWithPhraseId:(unsigned long long)arg1 withScore:(float)arg2 ;
@end

