/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@interface scoredRule : NSObject {

	float _ruleScore;
	long long _ruleLabel;

}

@property (assign,nonatomic) long long ruleLabel;              //@synthesize ruleLabel=_ruleLabel - In the implementation block
@property (assign,nonatomic) float ruleScore;                  //@synthesize ruleScore=_ruleScore - In the implementation block
-(void)setRuleLabel:(long long)arg1 ;
-(void)setRuleScore:(float)arg1 ;
-(id)initWithLabel:(long long)arg1 score:(float)arg2 ;
-(long long)ruleLabel;
-(float)ruleScore;
@end

