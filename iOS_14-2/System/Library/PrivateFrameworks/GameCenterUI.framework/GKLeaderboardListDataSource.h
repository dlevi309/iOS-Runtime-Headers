/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLeaderboardCollectionDataSource.h>

@class NSDictionary, GKLeaderboardSet, NSMutableArray, NSTimer, UICollectionView;

@interface GKLeaderboardListDataSource : GKLeaderboardCollectionDataSource {

	NSDictionary* _assetNames;
	GKLeaderboardSet* _leaderboardSet;
	NSMutableArray* _leaderboards;
	NSTimer* _timer;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;                     //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * leaderboards;                         //@synthesize leaderboards=_leaderboards - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                       //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSDictionary * assetNames;                             //@synthesize assetNames=_assetNames - In the implementation block
-(NSTimer *)timer;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(UICollectionView *)collectionView;
-(long long)itemCount;
-(NSMutableArray *)leaderboards;
-(void)setLeaderboards:(NSMutableArray *)arg1 ;
-(NSDictionary *)assetNames;
-(void)removeLeaderboardsWithoutImages;
-(id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2 ;
-(void)setAssetNames:(NSDictionary *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(void)setupTimer;
-(void)updateHighlightsInSectionHeader:(id)arg1 ;
-(CGSize)standardCellSizeForCollectionView:(id)arg1 ;
-(void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(GKLeaderboardSet *)leaderboardSet;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(id)title;
-(void)dealloc;
@end

