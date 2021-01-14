/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLTransitionDriver.h>

@class UIView;

@interface QLZoomTransitionDriver : QLTransitionDriver {

	UIView* _uncroppedView;

}
+(void)cropView:(id)arg1 toAvoidNavigationOffset:(double)arg2 presenting:(BOOL)arg3 animationDuration:(double)arg4 ;
-(void)tearDown;
-(void)_performZoomTransition;
-(void)animateFinishTransition;
-(void)animateTransition;
@end

