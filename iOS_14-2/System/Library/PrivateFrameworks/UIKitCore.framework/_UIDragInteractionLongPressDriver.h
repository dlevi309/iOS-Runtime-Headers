/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didTransitionToBeginState;
-(void)attachToView:(id)arg1 ;
-(void)setAutomaticallyAddsFailureRelationships:(BOOL)arg1 ;
-(_UIRelationshipGestureRecognizer *)gestureRecognizerForExclusionRelationship;
-(void)didTransitionToDeferred;
-(void)didTransitionToPreparing;
-(void)didTransitionToInactiveState;
-(void)setLiftMoveHysteresis:(double)arg1 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(BOOL)isGestureRecognizerForDragInitiation:(id)arg1 ;
-(void)didTransitionToCancelState;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setLiftDelay:(double)arg1 ;
-(_UIDragLiftGestureRecognizer *)gestureRecognizerForDragInitiation;
-(void)invalidateCompetingGestureRecognizerGateTimer;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)openCompetingGestureRecognizerGateCancelingGestures:(id)arg1 ;
-(void)openGateCancelingAddItemsGestures;
-(void)detachFromView:(id)arg1 ;
-(void)invalidateCancellationTimer;
-(unsigned long long)behavior;
-(id)initWithBehavior:(unsigned long long)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)_updateLiftMoveHysteresisInDragInitiationGesture;
-(void)_dragInitiationGestureStateChanged:(id)arg1 ;
-(_UIRelationshipGestureRecognizer *)gestureRecognizerForFailureRelationship;
-(BOOL)shouldDelayCompetingGestureRecognizer:(id)arg1 ;
-(double)translationInWindow;
-(BOOL)_wantsTimeDelayedFailureRequirementGate;
-(BOOL)canExcludeCompetingGestureRecognizer:(id)arg1 ;
-(void)_gateCompetingGestureRecognizers;
-(void)reset;
-(BOOL)hasExceededAllowableMovement;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)hasMoveHysteresisBeenReached;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)didTransitionToInflightState;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
@end

