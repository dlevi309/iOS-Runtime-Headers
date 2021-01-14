/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>
@optional
-(id)_requiredContextIDsForDragSessionInView:(id)arg1;
-(id)_dragInteraction:(id)arg1 customSpringAnimationBehaviorForCancellingItem:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1;
-(void)_dragInteraction:(id)arg1 liftAnimationDidChangeDirection:(long long)arg2;
-(BOOL)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
-(void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(/*^block*/id)arg3;

@end

