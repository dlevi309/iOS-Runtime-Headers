/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIScrollEventRespondable.h>
#import <UIKitCore/_UIHoverEventRespondable.h>

@class UIHoverEvent, NSString;

@interface _UIInterruptScrollDecelerationGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable, _UIHoverEventRespondable> {

	UIHoverEvent* _currentHoverEvent;
	long long _previousTrackpadFingerDownCount;
	long long _trackpadFingerDownCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(void)reset;
-(void)_scrollingChangedWithEvent:(id)arg1 ;
@end

