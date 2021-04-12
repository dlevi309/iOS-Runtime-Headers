/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLeaderboardCollectionDataSource.h>

@class NSDictionary, NSArray;

@interface GKLeaderboardSetDataSource : GKLeaderboardCollectionDataSource {

	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	NSArray* _leaderboardSets;

}

@property (nonatomic,retain) NSArray * leaderboardSets;                            //@synthesize leaderboardSets=_leaderboardSets - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;              //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                 //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
-(long long)itemCount;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(void)updateHighlightsInSectionHeader:(id)arg1 ;
-(long long)allowedColumnCount:(long long)arg1 ;
-(NSArray *)leaderboardSets;
-(void)setLeaderboardSets:(NSArray *)arg1 ;
-(NSDictionary *)leaderboardSetAssetNames;
-(void)presentLeaderboardsListWithSet:(id)arg1 segueToLeaderboard:(id)arg2 ;
-(void)removeLeaderboardSetsWithoutImages;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(NSDictionary *)leaderboardAssetNames;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(CGSize)standardCellSizeForCollectionView:(id)arg1 ;
-(void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)title;
@end

