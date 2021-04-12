/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceIdentifying.h>
#import <UIKit/UICollectionViewDataSource.h>

@class __UIDiffableDataSource, UICollectionViewDiffableDataSourceReorderingHandlers, UICollectionViewDiffableDataSourceSectionSnapshotHandlers, NSString;

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource> {

	__UIDiffableDataSource* _impl;
	/*^block*/id __didReorderItemsHandler;

}

@property (nonatomic,retain) __UIDiffableDataSource * impl;                                                                  //@synthesize impl=_impl - In the implementation block
@property (nonatomic,copy) id _didReorderItemsHandler;                                                                       //@synthesize _didReorderItemsHandler=__didReorderItemsHandler - In the implementation block
@property (nonatomic,copy) id supplementaryViewProvider; 
@property (nonatomic,copy) UICollectionViewDiffableDataSourceReorderingHandlers * reorderingHandlers; 
@property (nonatomic,copy) UICollectionViewDiffableDataSourceSectionSnapshotHandlers * sectionSnapshotHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)snapshot;
-(void)setSupplementaryViewProvider:(id)arg1 ;
-(UICollectionViewDiffableDataSourceReorderingHandlers *)reorderingHandlers;
-(void)setReorderingHandlers:(UICollectionViewDiffableDataSourceReorderingHandlers *)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(/*^block*/id)arg3 ;
-(id)supplementaryViewProvider;
-(id)snapshotForSection:(id)arg1 ;
-(/*^block*/id)_canReorderItemHandler;
-(UICollectionViewDiffableDataSourceSectionSnapshotHandlers *)sectionSnapshotHandlers;
-(id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(/*^block*/id)arg3 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)_setDidReorderItemsHandler:(/*^block*/id)arg1 ;
-(id)_snapshotForSection:(id)arg1 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(/*^block*/id)arg2 ;
-(id)collectionView;
-(void)setImpl:(__UIDiffableDataSource *)arg1 ;
-(void)setSectionSnapshotHandlers:(UICollectionViewDiffableDataSourceSectionSnapshotHandlers *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)_associatedSectionControllerForItemIdentifier:(id)arg1 ;
-(id)_diffableDataSourceImpl;
-(id)_didReorderItemsHandler;
-(NSString *)description;
-(BOOL)_isDiffableDataSource;
-(void)_setCanReorderItemHandler:(/*^block*/id)arg1 ;
-(id)initWithCollectionView:(id)arg1 itemRenderer:(id)arg2 ;
-(void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(void)set_didReorderItemsHandler:(id)arg1 ;
-(id)_associatedSectionControllerForSectionIdentifier:(id)arg1 ;
-(void)_applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(__UIDiffableDataSource *)impl;
@end

