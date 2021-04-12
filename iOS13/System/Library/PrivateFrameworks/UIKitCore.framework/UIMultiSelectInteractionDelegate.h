/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIMultiSelectInteractionDelegate <NSObject>
@optional
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
-(void)automaticallyTransitionToMultiSelectMode;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3;

@required
-(BOOL)supportsMultiSelectInteraction:(id)arg1;
-(BOOL)isInMultiSelectMode;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(CGPoint)arg3 withVelocity:(CGPoint)arg4;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;

@end

