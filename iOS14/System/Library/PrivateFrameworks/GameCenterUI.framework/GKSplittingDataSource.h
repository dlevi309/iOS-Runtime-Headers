/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class GKBasicCollectionViewDataSource, NSMutableDictionary;

@interface GKSplittingDataSource : GKCollectionViewDataSource {

	GKBasicCollectionViewDataSource* _underlyingDataSource;
	NSMutableDictionary* _sectionToSectionInfo;

}

@property (nonatomic,retain) NSMutableDictionary * sectionToSectionInfo;                          //@synthesize sectionToSectionInfo=_sectionToSectionInfo - In the implementation block
@property (nonatomic,retain) GKBasicCollectionViewDataSource * underlyingDataSource;              //@synthesize underlyingDataSource=_underlyingDataSource - In the implementation block
@property (nonatomic,readonly) long long sectionCount; 
-(void)removeSection:(long long)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)configureDataSource;
-(GKBasicCollectionViewDataSource *)underlyingDataSource;
-(void)removeAllSections;
-(void)refreshAdditionalInfoForDataType:(unsigned)arg1 updateNotifier:(id)arg2 ;
-(id)filteredItemsForRawItems:(id)arg1 ;
-(void)setItems:(id)arg1 forSection:(long long)arg2 ;
-(void)willUpdateSectionsWithItems:(id)arg1 ;
-(void)setSortDescriptors:(id)arg1 forSection:(long long)arg2 ;
-(NSMutableDictionary *)sectionToSectionInfo;
-(void)setSectionToSectionInfo:(NSMutableDictionary *)arg1 ;
-(void)setUnderlyingDataSource:(GKBasicCollectionViewDataSource *)arg1 ;
-(void)addSectionWithTitle:(id)arg1 sortDescriptors:(id)arg2 ;
-(void)setFilterPredicate:(id)arg1 forSection:(long long)arg2 ;
-(id)sectionInfoForSection:(long long)arg1 ;
-(id)itemsForSection:(long long)arg1 ;
-(id)titleForSection:(long long)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(void)dealloc;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(id)indexPathsForItem:(id)arg1 ;
-(long long)sectionCount;
@end

