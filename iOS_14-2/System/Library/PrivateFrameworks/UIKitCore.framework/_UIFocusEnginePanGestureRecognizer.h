/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIFocusEnginePanGestureTouchObserver;
@interface _UIFocusEnginePanGestureRecognizer : UIPanGestureRecognizer {

	id<_UIFocusEnginePanGestureTouchObserver> _touchObserver;

}

@property (assign,nonatomic,__weak) id<_UIFocusEnginePanGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<_UIFocusEnginePanGestureTouchObserver> touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)setTouchObserver:(id<_UIFocusEnginePanGestureTouchObserver>)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<_UIFocusEnginePanGestureTouchObserver>)touchObserver;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

