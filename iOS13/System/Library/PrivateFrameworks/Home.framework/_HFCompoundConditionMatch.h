/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFCondition, NSArray;

@interface _HFCompoundConditionMatch : NSObject {

	HFCondition* _matchedCondition;
	NSArray* _matchedPredicates;

}

@property (nonatomic,retain) HFCondition * matchedCondition;              //@synthesize matchedCondition=_matchedCondition - In the implementation block
@property (nonatomic,retain) NSArray * matchedPredicates;                 //@synthesize matchedPredicates=_matchedPredicates - In the implementation block
+(id)matchWithCondition:(id)arg1 matchedPredicates:(id)arg2 ;
-(void)setMatchedCondition:(HFCondition *)arg1 ;
-(void)setMatchedPredicates:(NSArray *)arg1 ;
-(HFCondition *)matchedCondition;
-(NSArray *)matchedPredicates;
@end

