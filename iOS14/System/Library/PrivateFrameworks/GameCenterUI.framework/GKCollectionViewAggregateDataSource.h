/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class NSMutableArray, NSMapTable, NSMutableDictionary;

@interface GKCollectionViewAggregateDataSource : GKCollectionViewDataSource {

	NSMutableArray* _mappings;
	NSMapTable* _dataSourceToMappings;
	NSMutableDictionary* _globalSectionToMappings;
	unsigned long long _sectionCount;

}

@property (nonatomic,retain) NSMutableArray * mappings;                                  //@synthesize mappings=_mappings - In the implementation block
@property (nonatomic,retain) NSMapTable * dataSourceToMappings;                          //@synthesize dataSourceToMappings=_dataSourceToMappings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * globalSectionToMappings;              //@synthesize globalSectionToMappings=_globalSectionToMappings - In the implementation block
@property (assign,nonatomic) unsigned long long sectionCount;                            //@synthesize sectionCount=_sectionCount - In the implementation block
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setSectionCount:(unsigned long long)arg1 ;
-(id)wrapperForView:(id)arg1 mapping:(id)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4 ;
-(id)createMetricsTreeWithGridLayout:(id)arg1 ;
-(BOOL)containsDataSource:(id)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(unsigned long long)sectionForDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 ;
-(void)dataSourceDidReloadData:(id)arg1 ;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3 ;
-(void)removeDataSource:(id)arg1 ;
-(NSMutableArray *)mappings;
-(void)setMappings:(NSMutableArray *)arg1 ;
-(id)_gkDescription;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(id)dataSourceForSection:(unsigned long long)arg1 ;
-(void)updateMappings;
-(id)allDataSources;
-(id)mappingForDataSource:(id)arg1 ;
-(id)mappingForGlobalSection:(long long)arg1 ;
-(id)globalIndexPathsForLocal:(id)arg1 dataSource:(id)arg2 ;
-(id)globalSectionsForLocal:(id)arg1 dataSource:(id)arg2 ;
-(void)addDataSource:(id)arg1 withTag:(id)arg2 ;
-(void)setDataSource:(id)arg1 forTag:(id)arg2 ;
-(NSMapTable *)dataSourceToMappings;
-(void)setDataSourceToMappings:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)globalSectionToMappings;
-(void)setGlobalSectionToMappings:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(id)indexPathsForItem:(id)arg1 ;
-(BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(unsigned long long)sectionCount;
@end

