/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class BMRule, NSMutableDictionary;

@interface _PSFeaturizedBehaviorRule : NSObject {

	BMRule* _rule;
	NSMutableDictionary* _features;
	double _score;

}

@property (nonatomic,retain) BMRule * rule;                               //@synthesize rule=_rule - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * features;              //@synthesize features=_features - In the implementation block
@property (assign,nonatomic) double score;                                //@synthesize score=_score - In the implementation block
-(NSMutableDictionary *)features;
-(double)score;
-(id)initWithRule:(id)arg1 score:(double)arg2 features:(id)arg3 ;
-(void)setScore:(double)arg1 ;
-(void)setFeatures:(NSMutableDictionary *)arg1 ;
-(BMRule *)rule;
-(void)setRule:(BMRule *)arg1 ;
@end

