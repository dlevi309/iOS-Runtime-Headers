/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning, _UIKeyboardTextSelectionController, UITextSelectionGrabberSuppressionAssertion;

@interface UITextSelectionInteraction : UITextInteraction {

	double _lastTapTimestamp;
	CGPoint _lastTapLocation;
	UITextGestureTuning* _gestureTuning;
	BOOL _indirectSelectionType;
	BOOL _viewConformsToTextInput;
	CGRect _originalCaretRect;
	BOOL _wasOriginallyFirstResponder;
	long long _granularityToHandOff;
	_UIKeyboardTextSelectionController* _activeSelectionController;
	UITextSelectionGrabberSuppressionAssertion* _grabberSuppressionAssertion;

}
-(void)finishSetup;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(long long)_textGranularityForRepeatedTap:(long long)arg1 ;
-(void)didUpdateSelectionWithGesture:(id)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithMode:(long long)arg1 indirect:(BOOL)arg2 ;
-(BOOL)_isShiftKeyBeingHeldForGesture:(id)arg1 ;
-(BOOL)_usesPencilSelectionBehaviorForGesture:(id)arg1 ;
-(void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_isRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(id)_transientState;
-(BOOL)_isWithinRepeatedTapTimeForTouch:(id)arg1 ;
-(long long)handOffGranularity;
-(BOOL)_usesIndirectSelectionBehavior;
-(void)tapAndAHalf:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)willUpdateSelectionWithGesture:(id)arg1 ;
-(void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)toggleSelectionCommands;
-(BOOL)_isNowWithinRepeatedTapTime;
-(void)_applyTransientState:(id)arg1 ;
-(void)_updateTapGestureHistoryWithLocation:(CGPoint)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handleMultiTapGesture:(id)arg1 ;
-(void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1 ;
@end

