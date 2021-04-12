/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLTransitionDriver.h>

@class UIView;

@interface QLZoomTransitionDriver : QLTransitionDriver {

	UIView* _uncroppedView;

}
+(void)cropView:(id)arg1 toAvoidNavigationOffset:(double)arg2 presenting:(BOOL)arg3 animationDuration:(double)arg4 ;
-(void)tearDown;
-(void)animateTransition;
-(void)animateFinishTransition;
-(void)_performZoomTransition;
@end

