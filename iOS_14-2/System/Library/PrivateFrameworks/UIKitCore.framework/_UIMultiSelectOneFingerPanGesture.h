/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)_preventsDragInteractionGestures;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(void)setOneFingerPanDelegate:(id<_UIMultiSelectOneFingerPanGestureDelegate>)arg1 ;
-(UITouch *)activeTouch;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id<_UIMultiSelectOneFingerPanGestureDelegate>)oneFingerPanDelegate;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(UIEvent *)activeEvent;
@end

