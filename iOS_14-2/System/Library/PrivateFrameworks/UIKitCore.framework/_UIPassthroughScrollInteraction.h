/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegateInternal.h>
#import <UIKit/UIInteraction.h>

@protocol _UIPassthroughScrollInteractionDelegate;
@class UIView, _UIPassthroughScrollGestureRecognizer, _UIPassthroughGateGestureRecognizer, NSString;

@interface _UIPassthroughScrollInteraction : NSObject <UIGestureRecognizerDelegateInternal, UIInteraction> {

	BOOL _recognizeOnPrimaryButtonDown;
	BOOL _recognizeOnSecondaryButtonDown;
	BOOL _eatsTouches;
	UIView* _view;
	UIView* _touchFallbackView;
	_UIPassthroughScrollGestureRecognizer* _passthroughScrollGestureRecognizer;
	_UIPassthroughGateGestureRecognizer* _gestureGate;
	id<_UIPassthroughScrollInteractionDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * _touchFallbackView;                                                              //@synthesize touchFallbackView=_touchFallbackView - In the implementation block
@property (nonatomic,readonly) _UIPassthroughScrollGestureRecognizer * _passthroughScrollGestureRecognizer;              //@synthesize passthroughScrollGestureRecognizer=_passthroughScrollGestureRecognizer - In the implementation block
@property (nonatomic,readonly) _UIPassthroughGateGestureRecognizer * _gestureGate;                                       //@synthesize gestureGate=_gestureGate - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPassthroughScrollInteractionDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL recognizeOnPrimaryButtonDown;                                                          //@synthesize recognizeOnPrimaryButtonDown=_recognizeOnPrimaryButtonDown - In the implementation block
@property (assign,nonatomic) BOOL recognizeOnSecondaryButtonDown;                                                        //@synthesize recognizeOnSecondaryButtonDown=_recognizeOnSecondaryButtonDown - In the implementation block
@property (assign,nonatomic) BOOL eatsTouches;                                                                           //@synthesize eatsTouches=_eatsTouches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                                     //@synthesize view=_view - In the implementation block
+(BOOL)_isPassthroughGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<_UIPassthroughScrollInteractionDelegate>)delegate;
-(void)didMoveToView:(id)arg1 ;
-(BOOL)eatsTouches;
-(void)willMoveToView:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setDelegate:(id<_UIPassthroughScrollInteractionDelegate>)arg1 ;
-(NSString *)description;
-(UIView *)view;
-(UIView *)_touchFallbackView;
-(_UIPassthroughGateGestureRecognizer *)_gestureGate;
-(_UIPassthroughScrollGestureRecognizer *)_passthroughScrollGestureRecognizer;
-(void)_updateGesturesEatTouches;
-(void)_handlePassthroughRecognizer:(id)arg1 ;
-(void)_setUpForWindow:(id)arg1 ;
-(void)_handlePassthroughGestureRecognizerEndWithReason:(unsigned long long)arg1 ;
-(BOOL)_delegateShouldInteractAtLocation:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)recognizeOnPrimaryButtonDown;
-(BOOL)recognizeOnSecondaryButtonDown;
-(void)_tearDown;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setRecognizeOnPrimaryButtonDown:(BOOL)arg1 ;
-(void)setRecognizeOnSecondaryButtonDown:(BOOL)arg1 ;
-(BOOL)_shouldEventBePassedThrough:(id)arg1 ;
-(void)__forciblyEndWithReason:(unsigned long long)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)setEatsTouches:(BOOL)arg1 ;
-(void)dealloc;
@end

