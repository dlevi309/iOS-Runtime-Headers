/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/_SBIconProgressTransition.h>

@interface _SBIconProgressFractionTransition : _SBIconProgressTransition {

	double _targetFraction;

}
+(id)newTransitionToFraction:(double)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateToFraction:(double)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(void)_updateView:(id)arg1 forDisplayedFraction:(double)arg2 ;
@end

