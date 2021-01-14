/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying> {

	NSArray* _items;
	SEL _showAllAction;
	unsigned long long _pageSize;
	NSPredicate* _filterPredicate;
	NSRange _preloadedRange;

}

@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) SEL showAllAction;                          //@synthesize showAllAction=_showAllAction - In the implementation block
@property (assign,nonatomic) unsigned long long pageSize;                //@synthesize pageSize=_pageSize - In the implementation block
@property (assign,nonatomic) NSRange preloadedRange;                     //@synthesize preloadedRange=_preloadedRange - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;              //@synthesize filterPredicate=_filterPredicate - In the implementation block
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filterPredicate;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)init;
-(id)sectionTitle;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(NSArray *)items;
-(unsigned long long)pageSize;
-(void)setPageSize:(unsigned long long)arg1 ;
-(void)setItemsNoNotify:(id)arg1 ;
-(void)setPreloadedRange:(NSRange)arg1 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 complete:(/*^block*/id)arg3 ;
-(id)itemsAtIndexes:(id)arg1 ;
-(void)insertItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2 ;
-(unsigned long long)countOfItems;
-(void)preloadImagesForItems:(id)arg1 startingAtIndex:(unsigned long long)arg2 loadBlock:(/*^block*/id)arg3 ;
-(NSRange)preloadedRange;
-(void)setShowAllAction:(SEL)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(SEL)showAllAction;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)indexPathsForItem:(id)arg1 ;
-(void)configureCollectionView:(id)arg1 ;
@end

