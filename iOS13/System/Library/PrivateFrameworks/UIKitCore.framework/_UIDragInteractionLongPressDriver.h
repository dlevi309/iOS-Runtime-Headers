/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDragInteractionDriver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDelayedAction, _UIDragLiftGestureRecognizer, _UIRelationshipGestureRecognizer, NSString;

@interface _UIDragInteractionLongPressDriver : _UIDragInteractionDriver <UIGestureRecognizerDelegate> {

	UIDelayedAction* _gateTimer;
	UIDelayedAction* _cancellationTimer;
	unsigned long long _behavior;
	_UIDragLiftGestureRecognizer* _gestureRecognizerForDragInitiation;
	_UIRelationshipGestureRecognizer* _gestureRecognizerForFailureRelationship;
	_UIRelationshipGestureRecognizer* _gestureRecognizerForExclusionRelationship;

}

@property (nonatomic,readonly) _UIDragLiftGestureRecognizer * gestureRecognizerForDragInitiation;                         //@synthesize gestureRecognizerForDragInitiation=_gestureRecognizerForDragInitiation - In the implementation block
@property (nonatomic,readonly) _UIRelationshipGestureRecognizer * gestureRecognizerForFailureRelationship;                //@synthesize gestureRecognizerForFailureRelationship=_gestureRecognizerForFailureRelationship - In the implementation block
@property (nonatomic,readonly) _UIRelationshipGestureRecognizer * gestureRecognizerForExclusionRelationship;              //@synthesize gestureRecognizerForExclusionRelationship=_gestureRecognizerForExclusionRelationship - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior;                                                               //@synthesize behavior=_behavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)reset;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(BOOL)hasExceededAllowableMovement;
-(unsigned long long)behavior;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)didTransitionToBeginState;
-(void)didTransitionToInactiveState;
-(void)didTransitionToInflightState;
-(id)initWithBehavior:(unsigned long long)arg1 ;
-(void)setAutomaticallyAddsFailureRelationships:(BOOL)arg1 ;
-(void)setLiftDelay:(double)arg1 ;
-(void)setLiftMoveHysteresis:(double)arg1 ;
-(BOOL)isGestureRecognizerForDragInitiation:(id)arg1 ;
-(void)detachFromView:(id)arg1 ;
-(void)attachToView:(id)arg1 ;
-(void)didTransitionToPreparing;
-(void)didTransitionToCancelState;
-(_UIRelationshipGestureRecognizer *)gestureRecognizerForExclusionRelationship;
-(void)_dragInitiationGestureStateChanged:(id)arg1 ;
-(void)_updateLiftMoveHysteresisInDragInitiationGesture;
-(void)invalidateCompetingGestureRecognizerGateTimer;
-(void)invalidateCancellationTimer;
-(void)_gateCompetingGestureRecognizers;
-(void)openCompetingGestureRecognizerGateCancelingGestures:(id)arg1 ;
-(BOOL)_wantsTimeDelayedFailureRequirementGate;
-(void)openGateCancelingAddItemsGestures;
-(BOOL)hasMoveHysteresisBeenReached;
-(double)translationInWindow;
-(BOOL)canExcludeCompetingGestureRecognizer:(id)arg1 ;
-(BOOL)shouldDelayCompetingGestureRecognizer:(id)arg1 ;
-(_UIDragLiftGestureRecognizer *)gestureRecognizerForDragInitiation;
-(_UIRelationshipGestureRecognizer *)gestureRecognizerForFailureRelationship;
@end

