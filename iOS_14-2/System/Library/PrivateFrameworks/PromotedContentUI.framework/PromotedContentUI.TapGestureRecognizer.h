/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@interface PromotedContentUI.TapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	 kMaximumTimeSinceTap;
	 touchDownHandler;
	 touchMovedHandler;
	 touchUpHandler;
	 shouldBlockNavigation;
	 mostRecentTapLocation;
	 lastTrackedTouch;
	 mostRecentTapTimestamp;
	 location;
	 pointIsInsideView;
	 preventedTouches;
	 $__lazy_storage_$_scrollableAncestor;

}
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)init;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

