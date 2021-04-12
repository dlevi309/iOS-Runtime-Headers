/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowKit/WFDatabaseCollectionViewResultsController.h>
#import <libobjc.A.dylib/WFLibraryRunCoordinatorDelegate.h>
#import <libobjc.A.dylib/WFLibraryRunCoordinatorObserver.h>
#import <libobjc.A.dylib/WFBaseLibraryWorkflowCellDelegate.h>

@protocol WFRunnableLibraryResultsControllerDelegate, WFBaseLibraryWorkflowCellDelegate, WFBaseLibraryWorkflowCellMetrics;
@class WFLibraryRunCoordinator, UICollectionView, NSString;

@interface WFRunnableLibraryResultsController : WFDatabaseCollectionViewResultsController <WFLibraryRunCoordinatorDelegate, WFLibraryRunCoordinatorObserver, WFBaseLibraryWorkflowCellDelegate> {

	WFLibraryRunCoordinator* _runCoordinator;
	id<WFRunnableLibraryResultsControllerDelegate> _delegate;
	id<WFBaseLibraryWorkflowCellDelegate> _cellDelegate;
	id<WFBaseLibraryWorkflowCellMetrics> _cellLayoutMetrics;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) WFLibraryRunCoordinator * runCoordinator;                                  //@synthesize runCoordinator=_runCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<WFRunnableLibraryResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WFBaseLibraryWorkflowCellDelegate> cellDelegate;                   //@synthesize cellDelegate=_cellDelegate - In the implementation block
@property (nonatomic,copy) id<WFBaseLibraryWorkflowCellMetrics> cellLayoutMetrics;                        //@synthesize cellLayoutMetrics=_cellLayoutMetrics - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)libraryWorkflowCellClass;
-(id<WFRunnableLibraryResultsControllerDelegate>)delegate;
-(void)setDelegate:(id<WFRunnableLibraryResultsControllerDelegate>)arg1 ;
-(UICollectionView *)collectionView;
-(id<WFBaseLibraryWorkflowCellDelegate>)cellDelegate;
-(void)setCellDelegate:(id<WFBaseLibraryWorkflowCellDelegate>)arg1 ;
-(id)collectionView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)workflowCellDidRequestRun:(id)arg1 ;
-(void)workflowCellDidRequestStop:(id)arg1 ;
-(void)runCoordinator:(id)arg1 didChangeRunningStateWithProgress:(double)arg2 forWorkflow:(id)arg3 ;
-(id)runCoordinator:(id)arg1 userInterfaceForWorkflow:(id)arg2 ;
-(id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3 ;
-(void)setCellLayoutMetrics:(id<WFBaseLibraryWorkflowCellMetrics>)arg1 ;
-(WFLibraryRunCoordinator *)runCoordinator;
-(id<WFBaseLibraryWorkflowCellMetrics>)cellLayoutMetrics;
@end

