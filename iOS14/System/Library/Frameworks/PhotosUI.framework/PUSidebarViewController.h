/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PUCollectionsCollectionViewDropDataProvider.h>
#import <libobjc.A.dylib/PUOutlineCellDelegate.h>
#import <libobjc.A.dylib/PXAssetCollectionActionPerformerDelegate.h>
#import <libobjc.A.dylib/PXSidebarOutlineSectionControllerDelegate.h>
#import <libobjc.A.dylib/PXProgrammaticNavigationUpdateTarget.h>
#import <libobjc.A.dylib/PXSplitViewControllerChangeObserver.h>

@protocol PXProgrammaticNavigationParticipant;
@class PHPhotoLibrary, UICollectionView, UICollectionViewDiffableDataSource, _UIDiffableDataSourceOutlineSectionController, PXSidebarOutlineSectionController, PUSidebarDataSectionEnablementController, PXSidebarDataController, PUCollectionsCollectionViewDropDelegate, PXProgrammaticNavigationDestination, PUSidebarReorderController, NSString;

@interface PUSidebarViewController : UIViewController <UICollectionViewDelegate, PUCollectionsCollectionViewDropDataProvider, PUOutlineCellDelegate, PXAssetCollectionActionPerformerDelegate, PXSidebarOutlineSectionControllerDelegate, PXProgrammaticNavigationUpdateTarget, PXSplitViewControllerChangeObserver> {

	BOOL _selectingAlreadySelectedIndexPath;
	id<PXProgrammaticNavigationParticipant> _navigationRoot;
	PHPhotoLibrary* _photoLibrary;
	UICollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _dataSource;
	_UIDiffableDataSourceOutlineSectionController* _dataSourceSectionController;
	PXSidebarOutlineSectionController* _sidebarOutlineSectionController;
	PUSidebarDataSectionEnablementController* _sidebarDataSectionEnablementController;
	PXSidebarDataController* _sidebarDataController;
	PUCollectionsCollectionViewDropDelegate* _dropDelegate;
	PXProgrammaticNavigationDestination* _currentNavigationDestination;
	PUSidebarReorderController* _reorderController;
	long long _suspendSelectionUpdatesMode;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) _UIDiffableDataSourceOutlineSectionController * dataSourceSectionController;                    //@synthesize dataSourceSectionController=_dataSourceSectionController - In the implementation block
@property (nonatomic,retain) PXSidebarOutlineSectionController * sidebarOutlineSectionController;                            //@synthesize sidebarOutlineSectionController=_sidebarOutlineSectionController - In the implementation block
@property (nonatomic,retain) PUSidebarDataSectionEnablementController * sidebarDataSectionEnablementController;              //@synthesize sidebarDataSectionEnablementController=_sidebarDataSectionEnablementController - In the implementation block
@property (nonatomic,retain) PXSidebarDataController * sidebarDataController;                                                //@synthesize sidebarDataController=_sidebarDataController - In the implementation block
@property (nonatomic,retain) PUCollectionsCollectionViewDropDelegate * dropDelegate;                                         //@synthesize dropDelegate=_dropDelegate - In the implementation block
@property (nonatomic,retain) PXProgrammaticNavigationDestination * currentNavigationDestination;                             //@synthesize currentNavigationDestination=_currentNavigationDestination - In the implementation block
@property (nonatomic,retain) PUSidebarReorderController * reorderController;                                                 //@synthesize reorderController=_reorderController - In the implementation block
@property (assign,nonatomic) long long suspendSelectionUpdatesMode;                                                          //@synthesize suspendSelectionUpdatesMode=_suspendSelectionUpdatesMode - In the implementation block
@property (assign,nonatomic) BOOL selectingAlreadySelectedIndexPath;                                                         //@synthesize selectingAlreadySelectedIndexPath=_selectingAlreadySelectedIndexPath - In the implementation block
@property (nonatomic,readonly) id<PXProgrammaticNavigationParticipant> navigationRoot;                                       //@synthesize navigationRoot=_navigationRoot - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3 ;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)configureDataSource;
-(void)px_navigationDestinationWillChange:(id)arg1 ;
-(void)splitViewControllerWillExpand:(id)arg1 ;
-(void)sidebarOutlineSectionController:(id)arg1 willApplySnapshotWithChangedItemsBeforeChange:(id)arg2 changedItemsAfterChange:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
-(id)initWithNavigationRoot:(id)arg1 photoLibrary:(id)arg2 ;
-(void)configureViewHierarchy;
-(id)generateLayout;
-(BOOL)_canSelectListItem:(id)arg1 ;
-(void)setupDataSectionManager;
-(void)_sectionControllerWillExpandItem:(id)arg1 ;
-(void)_sectionControllerWillCollapseItem:(id)arg1 ;
-(id)_collectionViewIndexPathForItemIdentifier:(id)arg1 ;
-(void)_expandItemsForSelectedIndexPath:(id)arg1 collectionToSelect:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateSelectedRowScrollToVisible:(BOOL)arg1 ;
-(id)_backNavigationRootItemForItem:(id)arg1 ;
-(void)_handleDidSelectListItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_navigateToDestinationForItem:(id)arg1 sameItem:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSuspendSelectionUpdatesMode:(long long)arg1 ;
-(void)_triggerNavigationToDestination:(id)arg1 animated:(BOOL)arg2 suspendSelections:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_executeActionForActionItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_actionPerformerIdentifierForNavigationListItem:(id)arg1 ;
-(void)_deleteItemTapped:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_trailingSwipeActionConfigurationForIndexPath:(id)arg1 ;
-(BOOL)_canReorderItem:(id)arg1 ;
-(void)_didReorderItems:(id)arg1 transaction:(id)arg2 ;
-(void)_highlightNavigationDestination:(id)arg1 ;
-(void)navigateToFallbackForDestination:(id)arg1 ;
-(id<PXProgrammaticNavigationParticipant>)navigationRoot;
-(_UIDiffableDataSourceOutlineSectionController *)dataSourceSectionController;
-(void)setDataSourceSectionController:(_UIDiffableDataSourceOutlineSectionController *)arg1 ;
-(PXSidebarOutlineSectionController *)sidebarOutlineSectionController;
-(void)setSidebarOutlineSectionController:(PXSidebarOutlineSectionController *)arg1 ;
-(PUSidebarDataSectionEnablementController *)sidebarDataSectionEnablementController;
-(void)setSidebarDataSectionEnablementController:(PUSidebarDataSectionEnablementController *)arg1 ;
-(PXSidebarDataController *)sidebarDataController;
-(id)collectionViewDropDelegate:(id)arg1 collectionAtIndexPath:(id)arg2 ;
-(void)setSidebarDataController:(PXSidebarDataController *)arg1 ;
-(PXProgrammaticNavigationDestination *)currentNavigationDestination;
-(void)setCurrentNavigationDestination:(PXProgrammaticNavigationDestination *)arg1 ;
-(PUSidebarReorderController *)reorderController;
-(void)setReorderController:(PUSidebarReorderController *)arg1 ;
-(long long)suspendSelectionUpdatesMode;
-(BOOL)selectingAlreadySelectedIndexPath;
-(void)setSelectingAlreadySelectedIndexPath:(BOOL)arg1 ;
-(id)actionPerformerDelegateForCollectionViewDropDelegate:(id)arg1 ;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)viewDidLoad;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(PUCollectionsCollectionViewDropDelegate *)dropDelegate;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setDropDelegate:(PUCollectionsCollectionViewDropDelegate *)arg1 ;
-(void)outlineCell:(id)arg1 updatedTitle:(id)arg2 forItem:(id)arg3 ;
@end

