/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class NSString, GKGameRecord, GKDashboardHeaderView, GKCollectionMultiDataSource, NSMutableDictionary, NSArray, GKDashboardChallengeDataSource;

@interface GKDashboardViewController : GKDashboardCollectionViewController {

	BOOL _shouldShowPlayForChallenge;
	BOOL _shouldShowPlayForTurnBasedMatch;
	BOOL _shouldShowQuitForTurnBasedMatch;
	long long _viewState;
	NSString* _leaderboardIdentifier;
	GKGameRecord* _gameRecord;
	GKDashboardHeaderView* _headerView;
	GKCollectionMultiDataSource* _multiDataSource;
	NSMutableDictionary* _viewStateIndexes;
	NSArray* _titles;
	GKDashboardChallengeDataSource* _challengeDataSource;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                                         //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) GKDashboardHeaderView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) GKCollectionMultiDataSource * multiDataSource;                     //@synthesize multiDataSource=_multiDataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewStateIndexes;                            //@synthesize viewStateIndexes=_viewStateIndexes - In the implementation block
@property (nonatomic,retain) NSArray * titles;                                                  //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic) GKDashboardChallengeDataSource * challengeDataSource;              //@synthesize challengeDataSource=_challengeDataSource - In the implementation block
@property (assign,nonatomic) long long viewState;                                               //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) long long leaderboardTimeScope; 
@property (nonatomic,retain) NSString * leaderboardIdentifier;                                  //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlayForChallenge;                                   //@synthesize shouldShowPlayForChallenge=_shouldShowPlayForChallenge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlayForTurnBasedMatch;                              //@synthesize shouldShowPlayForTurnBasedMatch=_shouldShowPlayForTurnBasedMatch - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQuitForTurnBasedMatch;                              //@synthesize shouldShowQuitForTurnBasedMatch=_shouldShowQuitForTurnBasedMatch - In the implementation block
-(void)setHeaderView:(GKDashboardHeaderView *)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)selectedSegmentChanged:(id)arg1 ;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)setViewState:(long long)arg1 ;
-(void)loadData;
-(void)setupSegmentedControl;
-(void)viewDidLoad;
-(NSString *)leaderboardIdentifier;
-(GKGameRecord *)gameRecord;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)setMultiDataSource:(GKCollectionMultiDataSource *)arg1 ;
-(void)setViewStateIndexes:(NSMutableDictionary *)arg1 ;
-(void)addDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3 ;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(void)setChallengeDataSource:(GKDashboardChallengeDataSource *)arg1 ;
-(void)selectDataSourceAtIndex:(long long)arg1 updateCollectionView:(BOOL)arg2 ;
-(void)showLeaderboardVC;
-(void)setShouldShowPlayForChallenge:(BOOL)arg1 ;
-(void)setShouldShowPlayForTurnBasedMatch:(BOOL)arg1 ;
-(void)setShouldShowQuitForTurnBasedMatch:(BOOL)arg1 ;
-(GKCollectionMultiDataSource *)multiDataSource;
-(NSMutableDictionary *)viewStateIndexes;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(GKDashboardChallengeDataSource *)challengeDataSource;
-(NSArray *)titles;
-(long long)viewState;
-(GKDashboardHeaderView *)headerView;
-(BOOL)shouldShowPlayForChallenge;
-(long long)leaderboardTimeScope;
-(void)setLeaderboardTimeScope:(long long)arg1 ;
-(id)initWithGameRecord:(id)arg1 ;
-(void)dealloc;
@end

