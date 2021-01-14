/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLoadingViewController.h>

@class GKGameLayerCollectionDataSource, NSDictionary, UICollectionView, GKNoContentView;

@interface GKLeaderboardListViewController : GKLoadingViewController {

	BOOL _showingLeaderboardSets;
	BOOL _canSegueToScores;
	GKGameLayerCollectionDataSource* _dataSource;
	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	UICollectionView* _collectionView;
	GKNoContentView* _noContentView;

}

@property (nonatomic,retain) UICollectionView * collectionView;                         //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL showingLeaderboardSets;                               //@synthesize showingLeaderboardSets=_showingLeaderboardSets - In the implementation block
@property (nonatomic,retain) GKNoContentView * noContentView;                           //@synthesize noContentView=_noContentView - In the implementation block
@property (assign,nonatomic) BOOL canSegueToScores;                                     //@synthesize canSegueToScores=_canSegueToScores - In the implementation block
@property (nonatomic,retain) GKGameLayerCollectionDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;                   //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                      //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateLayout;
-(void)donePressed:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(BOOL)isLoading;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)hasData;
-(UICollectionView *)collectionView;
-(GKGameLayerCollectionDataSource *)dataSource;
-(void)setHorizontalLayout:(BOOL)arg1 ;
-(void)setNeedsRefresh;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)loadData;
-(void)hideNoContentPlaceholder;
-(void)showNoContentPlaceholderForError:(id)arg1 ;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2 ;
-(void)setDataSource:(GKGameLayerCollectionDataSource *)arg1 ;
-(void)viewDidLoad;
-(NSDictionary *)leaderboardSetAssetNames;
-(void)setShowingLeaderboardSets:(BOOL)arg1 ;
-(BOOL)showingLeaderboardSets;
-(void)configureCloseButton;
-(BOOL)canSegueToScores;
-(void)setCanSegueToScores:(BOOL)arg1 ;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(NSDictionary *)leaderboardAssetNames;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)clearSelection;
-(void)didEnterLoadingState;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNoContentView:(GKNoContentView *)arg1 ;
-(GKNoContentView *)noContentView;
-(id)title;
-(void)dealloc;
@end

