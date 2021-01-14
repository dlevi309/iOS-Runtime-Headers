/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class NSDictionary, GKGameRecord, GKLeaderboardSet, NSArray;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource {

	NSDictionary* _assetNames;
	GKGameRecord* _gameRecord;
	GKLeaderboardSet* _leaderboardSet;
	NSArray* _leaderboards;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                      //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) NSArray * leaderboards;                         //@synthesize leaderboards=_leaderboards - In the implementation block
@property (nonatomic,retain) NSDictionary * assetNames;                      //@synthesize assetNames=_assetNames - In the implementation block
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(NSArray *)leaderboards;
-(void)setLeaderboards:(NSArray *)arg1 ;
-(NSDictionary *)assetNames;
-(void)removeLeaderboardsWithoutImages;
-(id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2 ;
-(void)setAssetNames:(NSDictionary *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(GKLeaderboardSet *)leaderboardSet;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
@end

