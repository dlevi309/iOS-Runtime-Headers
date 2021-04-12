/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSDictionary, GKGameRecord, NSArray;

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource {

	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	GKGameRecord* _gameRecord;
	NSArray* _leaderboardSets;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                            //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * leaderboardSets;                            //@synthesize leaderboardSets=_leaderboardSets - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;              //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                 //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)leaderboardSets;
-(void)setLeaderboardSets:(NSArray *)arg1 ;
-(NSDictionary *)leaderboardSetAssetNames;
-(void)removeLeaderboardSetsWithoutImages;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(NSDictionary *)leaderboardAssetNames;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
@end

