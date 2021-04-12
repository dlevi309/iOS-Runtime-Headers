/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIHoverEvent, UITouch;

@interface UIHoverGestureRecognizer : UIGestureRecognizer {

	UIHoverEvent* _currentHoverEvent;
	UITouch* _currentTouch;
	BOOL _pausesWhilePanning;
	long long _previousTrackpadFingerDownCount;
	long long _trackpadFingerDownCount;

}

@property (assign,setter=_setPausesWhilePanning:,getter=_pausesWhilePanning,nonatomic) BOOL pausesWhilePanning;                //@synthesize pausesWhilePanning=_pausesWhilePanning - In the implementation block
@property (getter=_previousTrackpadFingerDownCount,nonatomic,readonly) long long previousTrackpadFingerDownCount;              //@synthesize previousTrackpadFingerDownCount=_previousTrackpadFingerDownCount - In the implementation block
@property (getter=_trackpadFingerDownCount,nonatomic,readonly) long long trackpadFingerDownCount;                              //@synthesize trackpadFingerDownCount=_trackpadFingerDownCount - In the implementation block
-(void)reset;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(BOOL)_wantsHoverEvents;
-(BOOL)_paused;
-(void)_hoverEntered:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverExited:(id)arg1 withEvent:(id)arg2 ;
-(void)_hoverCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)_trackpadFingerDownCount;
-(void)_setPausesWhilePanning:(BOOL)arg1 ;
-(long long)_previousTrackpadFingerDownCount;
-(BOOL)_pausesWhilePanning;
@end

