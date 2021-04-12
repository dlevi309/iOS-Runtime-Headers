/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFLibraryResultsController.h>

@class NSMutableSet;

@interface WFEditableLibraryResultsController : WFLibraryResultsController {

	BOOL _editing;
	NSMutableSet* _selectedWorkflows;

}

@property (nonatomic,readonly) NSMutableSet * selectedWorkflows;                                          //@synthesize selectedWorkflows=_selectedWorkflows - In the implementation block
@property (assign,nonatomic,__weak) id<WFEditableLibraryResultsControllerDelegate> delegate; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                               //@synthesize editing=_editing - In the implementation block
-(BOOL)isEditing;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)completedBatchUpdateForSection:(unsigned long long)arg1 ;
-(void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3 ;
-(void)markResultAtIndexPath:(id)arg1 asSelected:(BOOL)arg2 ;
-(unsigned long long)numberOfSelectedResults;
-(id)selectedResults;
-(void)removeDeletedResultsFromSelection;
-(NSMutableSet *)selectedWorkflows;
@end

