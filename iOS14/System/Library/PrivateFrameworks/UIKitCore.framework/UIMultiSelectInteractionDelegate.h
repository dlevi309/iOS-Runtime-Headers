/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIMultiSelectInteractionDelegate <NSObject>
@optional
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)arg1;
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
-(void)automaticallyTransitionToMultiSelectMode;

@required
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2;
-(BOOL)supportsMultiSelectInteraction:(id)arg1;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1;
-(BOOL)isInMultiSelectMode;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(CGPoint)arg3 withVelocity:(CGPoint)arg4;

@end

