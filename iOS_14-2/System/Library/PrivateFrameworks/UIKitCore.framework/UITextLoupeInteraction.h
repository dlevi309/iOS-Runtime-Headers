/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _inheritedGranularity;
	id<UITextLoupeInteractionBehaviorDelegate> _behaviorDelegate;
	_UITextLoupeResponderProxy* _responderProxy;

}

@property (nonatomic,retain) _UITextLoupeResponderProxy * responderProxy;                              //@synthesize responderProxy=_responderProxy - In the implementation block
@property (assign,nonatomic) long long inheritedGranularity;                                           //@synthesize inheritedGranularity=_inheritedGranularity - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLineThreshold; 
@property (assign,nonatomic) BOOL strongerBiasAgainstUp; 
@property (nonatomic,readonly) UIResponder * responder; 
@property (nonatomic,readonly) UITextGestureTuning * gestureTuning;                                    //@synthesize gestureTuning=_gestureTuning - In the implementation block
@property (nonatomic,retain) id<UITextLoupeInteractionBehaviorDelegate> behaviorDelegate;              //@synthesize behaviorDelegate=_behaviorDelegate - In the implementation block
-(void)finishSetup;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)updateVisibilityOffsetForGesture:(id)arg1 ;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)canBeginDragCursor:(id)arg1 ;
-(id<UITextLoupeInteractionBehaviorDelegate>)behaviorDelegate;
-(BOOL)translationIsWithinAllowableMovement:(CGPoint)arg1 ;
-(void)_processGestureForCustomHighlighter:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id)initWithBehaviorDelegate:(id)arg1 ;
-(void)setupDelayedLoupeActionWithInitialPoint:(CGPoint)arg1 ;
-(void)selectToHere:(id)arg1 ;
-(UITextGestureTuning *)gestureTuning;
-(void)willMoveToView:(id)arg1 ;
-(UIResponder *)responder;
-(void)cancelDelayedLoupeActionIfNecessary;
-(void)loupeGesture:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 forTouchType:(long long)arg5 ;
-(void)loupeGestureWithState:(long long)arg1 location:(/*^block*/id)arg2 translation:(/*^block*/id)arg3 velocity:(/*^block*/id)arg4 modifierFlags:(long long)arg5 shouldCancel:(BOOL*)arg6 ;
-(void)delayedSelectionAction:(id)arg1 ;
-(void)setInheritedGranularity:(long long)arg1 ;
-(void)setBehaviorDelegate:(id<UITextLoupeInteractionBehaviorDelegate>)arg1 ;
-(BOOL)strongerBiasAgainstUp;
-(BOOL)shouldUseLineThreshold;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setupGestureExclusionRequirements;
-(void)setStrongerBiasAgainstUp:(BOOL)arg1 ;
-(void)setResponderProxy:(_UITextLoupeResponderProxy *)arg1 ;
-(void)updateOrCancelDelayedLoupeActionWithPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(void)setShouldUseLineThreshold:(BOOL)arg1 ;
-(void)willBeginExternalGesture;
-(_UITextLoupeResponderProxy *)responderProxy;
-(void)updateInitialPoint:(CGPoint)arg1 ;
-(void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)delayedLoupeAction:(id)arg1 ;
-(void)delayedDisplayLoupe:(id)arg1 ;
-(long long)inheritedGranularity;
@end

