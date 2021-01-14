/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray;

@interface GKAchievementDataSource : GKCollectionDataSource {

	GKGameRecord* _gameRecord;
	NSArray* _achievements;
	NSArray* _localAchievements;
	UIEdgeInsets _collectionLayoutInsets;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                        //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * achievements;                           //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSArray * localAchievements;                      //@synthesize localAchievements=_localAchievements - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionLayoutInsets;              //@synthesize collectionLayoutInsets=_collectionLayoutInsets - In the implementation block
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setCollectionLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)setAchievements:(NSArray *)arg1 ;
-(void)setLocalAchievements:(NSArray *)arg1 ;
-(id)heightMultipliersForSizeCategories;
-(NSArray *)achievements;
-(NSArray *)localAchievements;
-(UIEdgeInsets)collectionLayoutInsets;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(void)dealloc;
@end

