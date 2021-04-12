/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UIDragInteractionDelegate_Private <UIDragInteractionDelegate>
@optional
-(id)_requiredContextIDsForDragSessionInView:(id)arg1;
-(id)_dragInteraction:(id)arg1 viewToSnapshotItem:(id)arg2;
-(BOOL)_dragInteractionAllowsDragOverridingMasterSwitch:(id)arg1;
-(void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_dragInteraction:(id)arg1 liftAnimationDidChangeDirection:(long long)arg2;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
-(BOOL)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(BOOL)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;

@end

