/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning, NSNumber, _UIKeyboardTextSelectionController, UITextSelectionGrabberSuppressionAssertion;

@interface UITextSelectionInteraction : UITextInteraction {

	double _lastTapTimestamp;
	CGPoint _lastTapLocation;
	long long _previousRepeatedGranularity;
	UITextGestureTuning* _gestureTuning;
	BOOL _indirectSelectionType;
	CGRect _originalCaretRect;
	BOOL _wasOriginallyFirstResponder;
	NSNumber* _granularityToHandOff;
	_UIKeyboardTextSelectionController* _activeSelectionController;
	UITextSelectionGrabberSuppressionAssertion* _grabberSuppressionAssertion;

}
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(void)confirmMarkedText:(id)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(void)toggleSelectionCommands;
-(id)initWithMode:(long long)arg1 ;
-(BOOL)_isNowWithinRepeatedTapTime;
-(void)finishSetup;
-(id)_transientState;
-(void)_applyTransientState:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithMode:(long long)arg1 indirect:(BOOL)arg2 ;
-(void)_handleMultiTapGesture:(id)arg1 ;
-(BOOL)_usesIndirectSelectionBehavior;
-(void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1 ;
-(BOOL)_isWithinRepeatedTapTimeForTouch:(id)arg1 ;
-(BOOL)_isRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(void)willUpdateSelectionWithGesture:(id)arg1 ;
-(BOOL)_isShiftKeyBeingHeldForGesture:(id)arg1 ;
-(long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1 ;
-(void)didUpdateSelectionWithGesture:(id)arg1 ;
-(void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(void)_updateTapGestureHistoryWithLocation:(CGPoint)arg1 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(long long)_textGranularityForRepeatedTap:(long long)arg1 ;
-(id)handOffGranularity;
@end

