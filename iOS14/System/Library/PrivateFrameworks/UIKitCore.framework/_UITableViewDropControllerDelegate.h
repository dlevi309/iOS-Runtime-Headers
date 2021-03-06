/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITableViewDropControllerDelegate <NSObject>
@required
-(void)_updateDropTargetAppearanceWithTargetIndexPath:(id)arg1 dropProposal:(id)arg2 dropSession:(id)arg3;
-(void)_dropEntered:(id)arg1;
-(void)_endAnimatingDropOfCell:(id)arg1;
-(id)_beginAnimatingDropOfCell:(id)arg1 isCanceling:(BOOL)arg2;
-(void)_dropExited:(id)arg1;
-(void)_dropEnded:(id)arg1;
-(void)_removeDropTargetAndResetAppearance;
-(id)_targetIndexPathForDrop:(id)arg1;
-(id)_updatedDropProposalForIndexPath:(id)arg1 dropSession:(id)arg2 withDefaultProposal:(id)arg3;
-(BOOL)_canHandleDropSession:(id)arg1;
-(void)_beginAnimatingDropIntoCell:(id)arg1;
-(void)_performDrop:(id)arg1 withDropCoordinator:(id)arg2 forceHandleAsReorder:(BOOL)arg3;
-(void)_endAnimatingDropIntoCell:(id)arg1;
-(long long)_dataOwnerForDropSession:(id)arg1 atIndexPath:(id)arg2;
-(id)_dropPreviewParametersForIndexPath:(id)arg1;
-(id)_deletePlaceholderForContext:(id)arg1;
-(id)_insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2;
-(BOOL)_commitPlaceholderInsertionWithContext:(id)arg1 dataSourceUpdates:(/*^block*/id)arg2;
-(id)_activeSourceDragSession;
-(BOOL)_shouldAllowInternalDrop;

@end

