/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol _UIMultiSelectOneFingerPanGestureDelegate;
@class UITouch, UIEvent;

@interface _UIMultiSelectOneFingerPanGesture : UIPanGestureRecognizer {

	UITouch* _activeTouch;
	UIEvent* _activeEvent;
	id<_UIMultiSelectOneFingerPanGestureDelegate> _oneFingerPanDelegate;

}

@property (nonatomic,readonly) UITouch * activeTouch;                                                                //@synthesize activeTouch=_activeTouch - In the implementation block
@property (nonatomic,readonly) UIEvent * activeEvent;                                                                //@synthesize activeEvent=_activeEvent - In the implementation block
@property (assign,nonatomic,__weak) id<_UIMultiSelectOneFingerPanGestureDelegate> oneFingerPanDelegate;              //@synthesize oneFingerPanDelegate=_oneFingerPanDelegate - In the implementation block
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_preventsDragInteractionGestures;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(UITouch *)activeTouch;
-(UIEvent *)activeEvent;
-(id<_UIMultiSelectOneFingerPanGestureDelegate>)oneFingerPanDelegate;
-(void)setOneFingerPanDelegate:(id<_UIMultiSelectOneFingerPanGestureDelegate>)arg1 ;
@end

