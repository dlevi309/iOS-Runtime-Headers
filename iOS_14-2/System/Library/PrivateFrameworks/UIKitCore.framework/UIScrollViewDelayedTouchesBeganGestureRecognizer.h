/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;
@class UIDelayedAction, UIView;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _touchDelay;
	CGPoint _startSceneReferenceLocation;
	UIView*<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> _client;

}
+(BOOL)_shouldDefaultToTouches;
-(void)clearTimer;
-(void)_resetGestureRecognizer;
-(id)_clientView;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)sendDelayedTouches;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)sendTouchesShouldBeginForDelayedTouches:(id)arg1 ;
-(void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldMakeTimerForDelayedContentTouches:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
@end

