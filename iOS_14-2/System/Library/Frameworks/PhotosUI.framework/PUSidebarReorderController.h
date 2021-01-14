/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXNavigationListItem;
@class UICollectionViewDiffableDataSource, PXSidebarOutlineSectionController;

@interface PUSidebarReorderController : NSObject {

	UICollectionViewDiffableDataSource* _dataSource;
	PXSidebarOutlineSectionController* _sidebarOutlineSectionController;
	id<PXNavigationListItem> _itemToReorder;

}

@property (nonatomic,retain) id<PXNavigationListItem> itemToReorder;                                             //@synthesize itemToReorder=_itemToReorder - In the implementation block
@property (nonatomic,readonly) UICollectionViewDiffableDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXSidebarOutlineSectionController * sidebarOutlineSectionController;              //@synthesize sidebarOutlineSectionController=_sidebarOutlineSectionController - In the implementation block
-(UICollectionViewDiffableDataSource *)dataSource;
-(PXSidebarOutlineSectionController *)sidebarOutlineSectionController;
-(BOOL)canReorderItem:(id)arg1 ;
-(id)targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)performReorderOfItems:(id)arg1 transaction:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 outlineSectionController:(id)arg2 ;
-(id<PXNavigationListItem>)itemToReorder;
-(void)setItemToReorder:(id<PXNavigationListItem>)arg1 ;
@end

