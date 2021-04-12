/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {

	NSMutableDictionary* _functionsByName;
	double _percentComplete;

}

@property (assign,nonatomic) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(id)init;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4 ;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 ;
-(void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2 ;
-(id)timingFunctionNames;
-(double)valueForFunctionWithName:(id)arg1 ;
@end

