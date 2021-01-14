/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKDashboardLeaderboardScoreHeaderView, GKLeaderboard, GKDashboardLeaderboardScoreDataSource;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController {

	GKDashboardLeaderboardScoreHeaderView* _headerView;
	GKLeaderboard* _leaderboard;
	GKDashboardLeaderboardScoreDataSource* _friendDataSource;
	GKDashboardLeaderboardScoreDataSource* _globalDataSource;
	long long _timeScope;

}

@property (nonatomic,retain) GKDashboardLeaderboardScoreHeaderView * headerView;                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                           //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKDashboardLeaderboardScoreDataSource * friendDataSource;              //@synthesize friendDataSource=_friendDataSource - In the implementation block
@property (nonatomic,retain) GKDashboardLeaderboardScoreDataSource * globalDataSource;              //@synthesize globalDataSource=_globalDataSource - In the implementation block
@property (assign,nonatomic) long long timeScope;                                                   //@synthesize timeScope=_timeScope - In the implementation block
+(long long)initialTimeScope;
+(void)setInitialTimeScope:(long long)arg1 ;
-(void)setHeaderView:(GKDashboardLeaderboardScoreHeaderView *)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)donePressed:(id)arg1 ;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(BOOL)shouldUseTwoColumnLayoutForSize:(CGSize)arg1 ;
-(GKDashboardLeaderboardScoreDataSource *)friendDataSource;
-(void)updateColumnLayoutForSize:(CGSize)arg1 ;
-(void)setFriendDataSource:(GKDashboardLeaderboardScoreDataSource *)arg1 ;
-(GKDashboardLeaderboardScoreDataSource *)globalDataSource;
-(void)setGlobalDataSource:(GKDashboardLeaderboardScoreDataSource *)arg1 ;
-(id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2 ;
-(void)viewDidLoad;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)timeScopePressed:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(GKDashboardLeaderboardScoreHeaderView *)headerView;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

