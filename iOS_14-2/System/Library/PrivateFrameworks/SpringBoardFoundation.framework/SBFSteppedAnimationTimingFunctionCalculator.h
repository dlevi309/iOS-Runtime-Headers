/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {

	NSMutableDictionary* _functionsByName;
	double _percentComplete;

}

@property (assign,nonatomic) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
-(id)init;
-(void)setPercentComplete:(double)arg1 ;
-(double)percentComplete;
-(void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2 ;
-(double)valueForFunctionWithName:(id)arg1 ;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4 ;
-(id)timingFunctionNames;
-(void)addTimingFunction:(id)arg1 withName:(id)arg2 ;
@end

