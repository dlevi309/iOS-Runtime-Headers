/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKLeaderboardSet;

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController {

	GKLeaderboardSet* _leaderboardSet;

}

@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2 ;
-(void)viewDidLoad;
-(GKLeaderboardSet *)leaderboardSet;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
@end

