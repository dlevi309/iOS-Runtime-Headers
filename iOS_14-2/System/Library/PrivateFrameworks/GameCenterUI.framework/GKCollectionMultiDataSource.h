/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSArray;

@interface GKCollectionMultiDataSource : GKCollectionDataSource {

	NSArray* _dataSources;

}

@property (nonatomic,retain) NSArray * dataSources;              //@synthesize dataSources=_dataSources - In the implementation block
-(NSArray *)dataSources;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setDataSources:(NSArray *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(id)dataSourceForIndexPath:(id)arg1 ;
-(long long)itemCountInSection:(long long)arg1 ;
-(void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)dealloc;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
@end

