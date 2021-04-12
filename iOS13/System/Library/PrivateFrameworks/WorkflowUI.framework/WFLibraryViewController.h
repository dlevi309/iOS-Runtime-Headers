/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/WFLibraryWorkflowCellDelegate.h>
#import <UIKit/UICollectionViewDropDelegate.h>
#import <libobjc.A.dylib/WFRunnableLibraryResultsControllerDelegate.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>
#import <libobjc.A.dylib/WFUIKitUserInterface.h>

@class WFDatabase, UICollectionView, WFLibraryResultsController, UICollectionViewFlowLayout, WFDatabaseResult, WFLibraryRunCoordinator, NSString, UIViewController, UIView;

@interface WFLibraryViewController : UIViewController <UISearchResultsUpdating, UISearchControllerDelegate, UICollectionViewDelegateFlowLayout, WFLibraryWorkflowCellDelegate, UICollectionViewDropDelegate, WFRunnableLibraryResultsControllerDelegate, WFApplicationStateObserver, WFUIKitUserInterface> {

	BOOL _needsDelayWhenPresented;
	BOOL _handlesDropsOntoWorkflows;
	WFDatabase* _database;
	UICollectionView* _collectionView;
	WFLibraryResultsController* _resultsController;
	UICollectionViewFlowLayout* _collectionViewLayout;
	WFDatabaseResult* _collection;
	UIEdgeInsets _previousLayoutMargins;

}

@property (nonatomic,readonly) WFDatabaseResult * collection;                                  //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) UIEdgeInsets previousLayoutMargins;                               //@synthesize previousLayoutMargins=_previousLayoutMargins - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                                          //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) WFLibraryRunCoordinator * runCoordinator; 
@property (nonatomic,readonly) WFLibraryResultsController * resultsController;                 //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,readonly) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) BOOL needsDelayWhenPresented;                                   //@synthesize needsDelayWhenPresented=_needsDelayWhenPresented - In the implementation block
@property (nonatomic,readonly) BOOL needsTopPadding; 
@property (assign,nonatomic) BOOL handlesDropsOntoWorkflows;                                   //@synthesize handlesDropsOntoWorkflows=_handlesDropsOntoWorkflows - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) UIView * view; 
+(Class)resultsControllerClass;
+(Class)collectionViewLayoutClass;
-(id)init;
-(void)dealloc;
-(WFDatabaseResult *)collection;
-(id)initWithCollection:(id)arg1 ;
-(WFDatabase *)database;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(UIViewController *)viewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(id)keyCommands;
-(void)viewLayoutMarginsDidChange;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(WFLibraryResultsController *)resultsController;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)presentAlert:(id)arg1 ;
-(WFLibraryRunCoordinator *)runCoordinator;
-(void)invalidateLayoutMetrics;
-(void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2 ;
-(void)keyboardFrameWillChange;
-(BOOL)needsTopPadding;
-(id)workflowAtIndexPath:(id)arg1 ;
-(void)handleDropOfItems:(id)arg1 ontoWorkflow:(id)arg2 ;
-(void)endSearching;
-(void)beginSearching;
-(BOOL)needsDelayWhenPresented;
-(BOOL)handlesDropsOntoWorkflows;
-(void)setHandlesDropsOntoWorkflows:(BOOL)arg1 ;
-(UIEdgeInsets)previousLayoutMargins;
-(void)setPreviousLayoutMargins:(UIEdgeInsets)arg1 ;
@end

