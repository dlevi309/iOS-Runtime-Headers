/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBClickGestureRecognizer.h>

@interface SBLongPressGestureRecognizer : SBClickGestureRecognizer {

	BOOL _firstEventAfterClicksWasReceived;
	double _minimumPressDuration;

}

@property (assign,nonatomic) unsigned long long numberOfClicksRequired; 
@property (assign,nonatomic) double minimumPressDuration;                            //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(double)minimumPressDuration;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2 ;
@end

