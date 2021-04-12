/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>
#import <UIKitCore/_UITextLoupeResponderProxyDelegate.h>

@protocol UITextLoupeInteractionBehaviorDelegate;
@class UIDelayedAction, UITextGestureTuning, _UITextLoupeResponderProxy, UIResponder;

@interface UITextLoupeInteraction : UITextInteraction <_UITextLoupeResponderProxyDelegate> {

	UIDelayedAction* _delayedLoupeAction;
	UIDelayedAction* _delayedSelectionAction;
	BOOL _hasPerformedInteraction;
	CGPoint _initialPointFromPreviousInteraction;
	UITextGestureTuning* _gestureTuning;
	id<UITextLoupeInteractionBehaviorDelegate> _behaviorDelegate;
	_UITextLoupeResponderProxy* _responderProxy;

}

@property (nonatomic,retain) _UITextLoupeResponderProxy * responderProxy;                              //@synthesize responderProxy=_responderProxy - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLineThreshold; 
@property (assign,nonatomic) BOOL strongerBiasAgainstUp; 
@property (nonatomic,readonly) UIResponder * responder; 
@property (nonatomic,readonly) UITextGestureTuning * gestureTuning;                                    //@synthesize gestureTuning=_gestureTuning - In the implementation block
@property (nonatomic,retain) id<UITextLoupeInteractionBehaviorDelegate> behaviorDelegate;              //@synthesize behaviorDelegate=_behaviorDelegate - In the implementation block
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(UIResponder *)responder;
-(void)_createGestureTuningIfNecessary;
-(void)setShouldUseLineThreshold:(BOOL)arg1 ;
-(void)setStrongerBiasAgainstUp:(BOOL)arg1 ;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(void)updateInitialPoint:(CGPoint)arg1 ;
-(UITextGestureTuning *)gestureTuning;
-(void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2 ;
-(void)setupDelayedLoupeActionWithInitialPoint:(CGPoint)arg1 ;
-(void)updateOrCancelDelayedLoupeActionWithPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(BOOL)translationIsWithinAllowableMovement:(CGPoint)arg1 ;
-(BOOL)shouldUseLineThreshold;
-(void)cancelDelayedLoupeActionIfNecessary;
-(BOOL)strongerBiasAgainstUp;
-(void)selectToHere:(id)arg1 ;
-(void)loupeGestureWithState:(long long)arg1 location:(/*^block*/id)arg2 translation:(/*^block*/id)arg3 velocity:(/*^block*/id)arg4 modifierFlags:(long long)arg5 shouldCancel:(BOOL*)arg6 ;
-(void)_processGestureForCustomHighlighter:(id)arg1 ;
-(void)loupeGesture:(id)arg1 ;
-(void)canBeginDragCursor:(id)arg1 ;
-(void)finishSetup;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 forTouchType:(long long)arg5 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(id<UITextLoupeInteractionBehaviorDelegate>)behaviorDelegate;
-(_UITextLoupeResponderProxy *)responderProxy;
-(void)setupGestureExclusionRequirements;
-(void)setResponderProxy:(_UITextLoupeResponderProxy *)arg1 ;
-(void)updateVisibilityOffsetForGesture:(id)arg1 ;
-(void)delayedLoupeAction:(id)arg1 ;
-(void)delayedSelectionAction:(id)arg1 ;
-(id)initWithBehaviorDelegate:(id)arg1 ;
-(void)willBeginExternalGesture;
-(void)delayedDisplayLoupe:(id)arg1 ;
-(void)setBehaviorDelegate:(id<UITextLoupeInteractionBehaviorDelegate>)arg1 ;
@end

