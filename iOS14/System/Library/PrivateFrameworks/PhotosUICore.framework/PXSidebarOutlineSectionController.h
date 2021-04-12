/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSidebarDataSourceControllerDelegate.h>

@protocol PXSidebarOutlineSectionControllerDelegate;
@class PXSidebarDataController, _UIDiffableDataSourceOutlineSectionController, NSString;

@interface PXSidebarOutlineSectionController : NSObject <PXSidebarDataSourceControllerDelegate> {

	BOOL _animateDataSourceUpdates;
	PXSidebarDataController* _dataController;
	_UIDiffableDataSourceOutlineSectionController* _outlineSectionController;
	id<PXSidebarOutlineSectionControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PXSidebarDataController * dataController;                                              //@synthesize dataController=_dataController - In the implementation block
@property (nonatomic,readonly) _UIDiffableDataSourceOutlineSectionController * outlineSectionController;              //@synthesize outlineSectionController=_outlineSectionController - In the implementation block
@property (assign,nonatomic) BOOL animateDataSourceUpdates;                                                           //@synthesize animateDataSourceUpdates=_animateDataSourceUpdates - In the implementation block
@property (assign,nonatomic,__weak) id<PXSidebarOutlineSectionControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXSidebarOutlineSectionControllerDelegate>)delegate;
-(void)loadRootItems;
-(void)setDelegate:(id<PXSidebarOutlineSectionControllerDelegate>)arg1 ;
-(BOOL)animateDataSourceUpdates;
-(void)reloadFromDataControllerApplyAnimated:(BOOL)arg1 onQueue:(id)arg2 ;
-(id)expandItemsToRevealFirstEditableItemIfNeededAnimated:(BOOL)arg1 ;
-(void)expandItemsForIdentifiersIfNeeded:(id)arg1 animated:(BOOL)arg2 ;
-(void)sectionControllerWillCollapseItem:(id)arg1 ;
-(void)sectionControllerWillExpandItem:(id)arg1 ;
-(void)setAnimateDataSourceUpdates:(BOOL)arg1 ;
-(id)initWithSidebarDataController:(id)arg1 outlineSectionController:(id)arg2 ;
-(PXSidebarDataController *)dataController;
-(_UIDiffableDataSourceOutlineSectionController *)outlineSectionController;
-(void)sidebarDataSourceController:(id)arg1 didChangeChildrenOfItem:(id)arg2 changeDetails:(id)arg3 ;
-(id)_newSnapshotFromDataControllerWithRestoredExpansionState:(BOOL)arg1 ;
-(void)_configureInitialSnapshotAnimated:(BOOL)arg1 expandSubItems:(BOOL)arg2 applyOnQueue:(id)arg3 ;
-(void)appendChildrenForParentIfNeeded:(id)arg1 ;
-(BOOL)_appendChildrenForParentIfNeeded:(id)arg1 inSnapshot:(id)arg2 ;
-(void)_expandItem:(id)arg1 inSnapshot:(id)arg2 ;
-(void)_expandItemIfNeeded:(id)arg1 inSnapshot:(id)arg2 ;
-(void)_transferStateOfItem:(id)arg1 oldSnapshot:(id)arg2 toNewItem:(id)arg3 newSnapshot:(id)arg4 ;
-(id)_applyChangeDetails:(id)arg1 forItem:(id)arg2 toSnapshot:(id)arg3 outChangedItemsBeforeChange:(id*)arg4 outChangedItemsAfterChange:(id*)arg5 ;
@end

