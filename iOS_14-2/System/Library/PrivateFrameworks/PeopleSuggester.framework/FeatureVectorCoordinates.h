/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@interface FeatureVectorCoordinates : NSObject {

	unsigned long long _shareEventIndex;
	unsigned long long _ruleIndex;

}

@property (assign,nonatomic) unsigned long long shareEventIndex;              //@synthesize shareEventIndex=_shareEventIndex - In the implementation block
@property (assign,nonatomic) unsigned long long ruleIndex;                    //@synthesize ruleIndex=_ruleIndex - In the implementation block
-(void)setRuleIndex:(unsigned long long)arg1 ;
-(unsigned long long)shareEventIndex;
-(void)setShareEventIndex:(unsigned long long)arg1 ;
-(unsigned long long)ruleIndex;
-(id)initWithShareEventIndex:(unsigned long long)arg1 ruleIndex:(unsigned long long)arg2 ;
@end

