/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFLibraryViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDragDelegate.h>
#import <UIKit/UICollectionViewDropDelegate.h>
#import <libobjc.A.dylib/WFEditableLibraryResultsControllerDelegate.h>

@class UIBarButtonItem, AVAudioPlayer, NSIndexPath, WFEditableLibraryResultsController, NSString;

@interface WFEditableLibraryViewController : WFLibraryViewController <UIGestureRecognizerDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, WFEditableLibraryResultsControllerDelegate> {

	BOOL _dropping;
	UIBarButtonItem* _createButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	UIBarButtonItem* _duplicateButtonItem;
	AVAudioPlayer* _reorderSoundPlayer;
	NSIndexPath* _dragItemOriginIndexPath;

}

@property (nonatomic,retain) UIBarButtonItem * createButtonItem;                                    //@synthesize createButtonItem=_createButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteButtonItem;                                    //@synthesize deleteButtonItem=_deleteButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * duplicateButtonItem;                                 //@synthesize duplicateButtonItem=_duplicateButtonItem - In the implementation block
@property (nonatomic,retain) AVAudioPlayer * reorderSoundPlayer;                                    //@synthesize reorderSoundPlayer=_reorderSoundPlayer - In the implementation block
@property (nonatomic,retain) NSIndexPath * dragItemOriginIndexPath;                                 //@synthesize dragItemOriginIndexPath=_dragItemOriginIndexPath - In the implementation block
@property (nonatomic,readonly) WFEditableLibraryResultsController * resultsController; 
@property (nonatomic,readonly) BOOL dropping;                                                       //@synthesize dropping=_dropping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)resultsControllerClass;
-(void)dealloc;
-(id)initWithCollection:(id)arg1 ;
-(void)loadView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2 ;
-(void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2 ;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2 ;
-(void)updateNavigationItems;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(UIBarButtonItem *)deleteButtonItem;
-(void)workflowCellDidRequestRename:(id)arg1 ;
-(void)workflowCellDidRequestDuplicate:(id)arg1 ;
-(void)workflowCellDidRequestDelete:(id)arg1 ;
-(void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2 ;
-(void)playReorderSound;
-(void)resultsController:(id)arg1 handleLegacyMoveFromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)beginEditingFromIndexPath:(id)arg1 ;
-(void)workflowsUpdated;
-(void)createWorkflowFromBarButtonItem;
-(void)importWorkflowAtURL:(id)arg1 withSuggestedName:(id)arg2 fromSourceApplication:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)duplicateSelectedWorkflows;
-(void)deleteSelectedWorkflows;
-(void)promptToRenameWorkflow:(id)arg1 ;
-(void)duplicateWorkflows:(id)arg1 ;
-(void)deleteWorkflows:(id)arg1 withConfirmationPresentationSource:(id)arg2 ;
-(void)deleteWorkflowsWithoutConfirmation:(id)arg1 ;
-(void)moveWorkflowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)createDragItemForIndexPath:(id)arg1 ;
-(AVAudioPlayer *)reorderSoundPlayer;
-(void)accessibilityAnnounceMovingWorkflowToIndexPath:(id)arg1 ;
-(BOOL)dropping;
-(UIBarButtonItem *)createButtonItem;
-(void)setCreateButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDeleteButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)duplicateButtonItem;
-(void)setDuplicateButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setReorderSoundPlayer:(AVAudioPlayer *)arg1 ;
-(NSIndexPath *)dragItemOriginIndexPath;
-(void)setDragItemOriginIndexPath:(NSIndexPath *)arg1 ;
@end

