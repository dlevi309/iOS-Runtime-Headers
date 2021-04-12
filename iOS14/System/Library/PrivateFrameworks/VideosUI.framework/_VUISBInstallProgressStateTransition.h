/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/_VUISBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _VUISBInstallProgressStateTransition : _VUISBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	long long _fromState;
	long long _toState;
	double _fraction;

}
+(id)newTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
+(Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(id)_initWithFromState:(long long)arg1 toState:(long long)arg2 ;
-(void)_updateView:(id)arg1 ;
-(void)dealloc;
@end

