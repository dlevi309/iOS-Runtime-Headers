/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMotionSupport.h>
#import <UIKit/UIScrollViewIntersectionDelegate.h>

@class UIScrollView, UIInputViewSetNotificationInfo;

@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate> {

	UIScrollView* _scrollViewForTransition;
	BOOL _scrollViewShowsHorizontalScrollIndicator;
	BOOL _scrollViewTransitionFinishing;
	BOOL _disableInterfaceAutorotation;
	CGPoint _scrollViewTransitionPreviousPoint;
	UIInputViewSetNotificationInfo* _scrollViewNotificationInfo;

}
-(void)hideScrollViewHorizontalScrollIndicator:(BOOL)arg1 ;
-(id)cancelNotificationsForMode:(unsigned long long)arg1 ;
-(void)completeKeyboardDismiss:(unsigned long long)arg1 withDuration:(double)arg2 ;
-(void)finishScrollViewTransition;
-(void)updateScrollViewContentInsetBottom:(double)arg1 ;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 forController:(id)arg2 ;
-(void)finishScrollViewTransitionForController:(id)arg1 ;
-(void)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(void)scrollView:(id)arg1 didPanWithGesture:(id)arg2 ;
-(void)dealloc;
-(void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2 ;
@end

