/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UISwitchMVEGestureTrackingSessionElement;
@class UIView, UIGestureRecognizer;

@interface UISwitchMVEGestureTrackingSession : NSObject {

	BOOL _displayedOnValue;
	BOOL _pendingDisplayedOnValue;
	BOOL _lastCommitedOnValue;
	UIView*<UISwitchMVEGestureTrackingSessionElement> _visualElement;
	double _naturalLayoutDirection;
	double _movementVectorForPanInitiatedChangeY;
	double _movementVectorForPanInitiatedChangeTargetOnValue;
	UIGestureRecognizer* _pendingDisplayedOnValueInitiatingGesture;

}

@property (nonatomic,readonly) double naturalLayoutDirection;                                                     //@synthesize naturalLayoutDirection=_naturalLayoutDirection - In the implementation block
@property (nonatomic,readonly) double movementVectorForPanInitiatedChangeY;                                       //@synthesize movementVectorForPanInitiatedChangeY=_movementVectorForPanInitiatedChangeY - In the implementation block
@property (nonatomic,readonly) double movementVectorForPanInitiatedChangeTargetOnValue;                           //@synthesize movementVectorForPanInitiatedChangeTargetOnValue=_movementVectorForPanInitiatedChangeTargetOnValue - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * pendingDisplayedOnValueInitiatingGesture;                    //@synthesize pendingDisplayedOnValueInitiatingGesture=_pendingDisplayedOnValueInitiatingGesture - In the implementation block
@property (nonatomic,readonly) BOOL pendingDisplayedOnValue;                                                      //@synthesize pendingDisplayedOnValue=_pendingDisplayedOnValue - In the implementation block
@property (nonatomic,readonly) BOOL lastCommitedOnValue;                                                          //@synthesize lastCommitedOnValue=_lastCommitedOnValue - In the implementation block
@property (assign,nonatomic,__weak) UIView*<UISwitchMVEGestureTrackingSessionElement> visualElement;              //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,nonatomic) BOOL displayedOnValue;                                                               //@synthesize displayedOnValue=_displayedOnValue - In the implementation block
+(BOOL)gestureIsInEndState:(long long)arg1 ;
-(void)applyPendingDisplayedOnValueAndSendActions;
-(void)_sendStateChangeActionsIfNecessary;
-(void)applyPendingDisplayedOnValueWithoutSendingActions;
-(double)movementVectorForPanInitiatedChangeTargetOnValue;
-(BOOL)updatePendingDisplayedOnValueIfMovementIsEnoughToInitiateChange:(double)arg1 forGesture:(id)arg2 ;
-(void)setPendingDisplayedOnValue:(BOOL)arg1 forGesture:(id)arg2 ;
-(BOOL)displayedOnValue;
-(double)naturalLayoutDirection;
-(UIView*<UISwitchMVEGestureTrackingSessionElement>)visualElement;
-(BOOL)_isMovementDirectionTrackableForPossibleOnOffChange:(double)arg1 ;
-(void)_applyPendingChangesIfNecessary;
-(double)movementVectorForPanInitiatedChangeY;
-(void)_updateMovementVectorForPanInitiatedChanges;
-(BOOL)_isMovementDirectionAndMagnitudeEnoughToPerformOnOffChange:(double)arg1 ;
-(void)setDisplayedOnValue:(BOOL)arg1 ;
-(UIGestureRecognizer *)pendingDisplayedOnValueInitiatingGesture;
-(BOOL)lastCommitedOnValue;
-(void)reset;
-(BOOL)pendingDisplayedOnValue;
-(id)initWithVisualElement:(id)arg1 ;
-(BOOL)pendingDisplayedOnValueIsValid;
-(void)invalidatePendingOnValue;
-(BOOL)canApplyPendingOnValueForGesture:(id)arg1 ;
-(void)setVisualElement:(UIView*<UISwitchMVEGestureTrackingSessionElement>)arg1 ;
@end

