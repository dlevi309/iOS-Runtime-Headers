/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBClickGestureRecognizer.h>

@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer {

	BOOL _firstEventAfterClicksWasReceived;
	double _minimumPressDuration;

}

@property (assign,nonatomic) unsigned long long numberOfClicksRequired; 
@property (assign,nonatomic) double minimumPressDuration;                            //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)reset;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2 ;
@end

