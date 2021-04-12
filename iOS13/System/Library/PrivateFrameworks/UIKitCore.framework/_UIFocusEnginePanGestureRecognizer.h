/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIFocusEnginePanGestureTouchObserver;
@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer {

	id<_UIFocusEnginePanGestureTouchObserver> _touchObserver;

}

@property (assign,nonatomic,__weak) id<_UIFocusEnginePanGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<_UIFocusEnginePanGestureTouchObserver> touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<_UIFocusEnginePanGestureTouchObserver>)touchObserver;
-(void)setTouchObserver:(id<_UIFocusEnginePanGestureTouchObserver>)arg1 ;
@end

