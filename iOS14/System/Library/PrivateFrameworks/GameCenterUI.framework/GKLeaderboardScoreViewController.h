/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLoadingViewController.h>
#import <libobjc.A.dylib/GKLeaderboardScoreDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UICollectionView, UIStackView, UIButton, UIView, UILabel, UISegmentedControl, NSLayoutConstraint, UIScrollView, GKTimeScopeButton, GKLeaderboardScoreDataSource, GKLeaderboard, GKLeaderboardMetadataView, GKNoContentView, CAGradientLayer, GKLeaderboardEntry, NSString;

@interface GKLeaderboardScoreViewController : GKLoadingViewController <GKLeaderboardScoreDelegate, UIScrollViewDelegate> {

	BOOL _shouldAutoRefreshHighlights;
	UICollectionView* _collectionView;
	UIStackView* _highlightView;
	UIButton* _scrollToTopButton;
	UIView* _collectionContainer;
	UIView* _timeScopeContainer;
	UILabel* _titleLabel;
	UISegmentedControl* _playerScopeControl;
	NSLayoutConstraint* _collectionContainerHeight;
	UIView* _collectionGradientView;
	NSLayoutConstraint* _collectionGradientViewHeightConstraint;
	UIScrollView* _mainScrollView;
	NSLayoutConstraint* _highlightViewHeightConstraint;
	NSLayoutConstraint* _highlightViewWidthConstraint;
	NSLayoutConstraint* _collectionGradientViewLandscapeTopConstraint;
	NSLayoutConstraint* _highlightViewLandscapeTopConstraint;
	GKTimeScopeButton* _timeScopeButton;
	GKLeaderboardScoreDataSource* _dataSource;
	GKLeaderboard* _leaderboard;
	GKLeaderboard* _currentOccurrence;
	GKLeaderboard* _previousOccurrence;
	long long _timeScope;
	long long _playerScope;
	long long _leaderboardOccurrence;
	GKLeaderboardMetadataView* _personalView;
	GKLeaderboardMetadataView* _socialView;
	GKNoContentView* _noContentView;
	CAGradientLayer* _collectionViewFadeGradient;
	GKLeaderboardEntry* _localPlayerEntry;
	GKLeaderboardEntry* _topPlayerEntry;
	GKLeaderboardEntry* _playerAboveEntry;
	GKLeaderboardEntry* _playerBelowEntry;
	long long _totalEntries;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIStackView * highlightView;                                                    //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UIButton * scrollToTopButton;                                                   //@synthesize scrollToTopButton=_scrollToTopButton - In the implementation block
@property (nonatomic,retain) UIView * collectionContainer;                                                   //@synthesize collectionContainer=_collectionContainer - In the implementation block
@property (nonatomic,retain) UIView * timeScopeContainer;                                                    //@synthesize timeScopeContainer=_timeScopeContainer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UISegmentedControl * playerScopeControl;                                        //@synthesize playerScopeControl=_playerScopeControl - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionContainerHeight;                                 //@synthesize collectionContainerHeight=_collectionContainerHeight - In the implementation block
@property (nonatomic,retain) UIView * collectionGradientView;                                                //@synthesize collectionGradientView=_collectionGradientView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionGradientViewHeightConstraint;                    //@synthesize collectionGradientViewHeightConstraint=_collectionGradientViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIScrollView * mainScrollView;                                                  //@synthesize mainScrollView=_mainScrollView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * highlightViewHeightConstraint;                             //@synthesize highlightViewHeightConstraint=_highlightViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * highlightViewWidthConstraint;                              //@synthesize highlightViewWidthConstraint=_highlightViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * collectionGradientViewLandscapeTopConstraint;              //@synthesize collectionGradientViewLandscapeTopConstraint=_collectionGradientViewLandscapeTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * highlightViewLandscapeTopConstraint;                       //@synthesize highlightViewLandscapeTopConstraint=_highlightViewLandscapeTopConstraint - In the implementation block
@property (nonatomic,retain) GKTimeScopeButton * timeScopeButton;                                            //@synthesize timeScopeButton=_timeScopeButton - In the implementation block
@property (nonatomic,retain) GKLeaderboardScoreDataSource * dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                                    //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKLeaderboard * currentOccurrence;                                              //@synthesize currentOccurrence=_currentOccurrence - In the implementation block
@property (nonatomic,retain) GKLeaderboard * previousOccurrence;                                             //@synthesize previousOccurrence=_previousOccurrence - In the implementation block
@property (assign,nonatomic) long long timeScope;                                                            //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,nonatomic) long long playerScope;                                                          //@synthesize playerScope=_playerScope - In the implementation block
@property (assign,nonatomic) long long leaderboardOccurrence;                                                //@synthesize leaderboardOccurrence=_leaderboardOccurrence - In the implementation block
@property (nonatomic,retain) GKLeaderboardMetadataView * personalView;                                       //@synthesize personalView=_personalView - In the implementation block
@property (nonatomic,retain) GKLeaderboardMetadataView * socialView;                                         //@synthesize socialView=_socialView - In the implementation block
@property (nonatomic,retain) GKNoContentView * noContentView;                                                //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * collectionViewFadeGradient;                                   //@synthesize collectionViewFadeGradient=_collectionViewFadeGradient - In the implementation block
@property (nonatomic,retain) GKLeaderboardEntry * localPlayerEntry;                                          //@synthesize localPlayerEntry=_localPlayerEntry - In the implementation block
@property (nonatomic,retain) GKLeaderboardEntry * topPlayerEntry;                                            //@synthesize topPlayerEntry=_topPlayerEntry - In the implementation block
@property (nonatomic,retain) GKLeaderboardEntry * playerAboveEntry;                                          //@synthesize playerAboveEntry=_playerAboveEntry - In the implementation block
@property (nonatomic,retain) GKLeaderboardEntry * playerBelowEntry;                                          //@synthesize playerBelowEntry=_playerBelowEntry - In the implementation block
@property (assign,nonatomic) long long totalEntries;                                                         //@synthesize totalEntries=_totalEntries - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoRefreshHighlights;                                               //@synthesize shouldAutoRefreshHighlights=_shouldAutoRefreshHighlights - In the implementation block
@property (assign,nonatomic) long long initialTimeScope; 
@property (assign,nonatomic) long long initialPlayerScope; 
@property (assign,nonatomic) BOOL restrictToFriendsOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)restrictToFriendsOnly;
+(long long)initialTimeScope;
+(void)setInitialTimeScope:(long long)arg1 ;
+(void)setInitialPlayerScope:(long long)arg1 ;
+(long long)initialPlayerScope;
+(void)setRestrictToFriendsOnly:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)donePressed:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setHighlightView:(UIStackView *)arg1 ;
-(UIStackView *)highlightView;
-(BOOL)isLoading;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(GKLeaderboard *)previousOccurrence;
-(BOOL)hasData;
-(UICollectionView *)collectionView;
-(void)setTimeScope:(long long)arg1 ;
-(void)setLeaderboardOccurrence:(long long)arg1 ;
-(long long)timeScope;
-(long long)leaderboardOccurrence;
-(GKLeaderboardScoreDataSource *)dataSource;
-(void)setNeedsRefresh;
-(void)dataUpdated:(BOOL)arg1 withError:(id)arg2 ;
-(void)setupNoContentView:(id)arg1 withError:(id)arg2 ;
-(void)loadData;
-(void)hideNoContentPlaceholder;
-(void)showNoContentPlaceholderForError:(id)arg1 ;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2 ;
-(void)setDataSource:(GKLeaderboardScoreDataSource *)arg1 ;
-(void)viewDidLoad;
-(void)configureCloseButton;
-(void)setPersonalView:(GKLeaderboardMetadataView *)arg1 ;
-(void)setSocialView:(GKLeaderboardMetadataView *)arg1 ;
-(GKLeaderboardMetadataView *)personalView;
-(GKLeaderboardMetadataView *)socialView;
-(id)formattedNumber:(id)arg1 ;
-(void)setPlayerScope:(long long)arg1 ;
-(long long)playerScope;
-(void)setLocalPlayerEntry:(GKLeaderboardEntry *)arg1 ;
-(void)didLoadScoresWithLocalPlayerEntry:(id)arg1 topPlayer:(id)arg2 playerAbove:(id)arg3 playerBelow:(id)arg4 totalEntries:(long long)arg5 ;
-(id)attributedStringWithSymbol:(id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setCurrentOccurrence:(GKLeaderboard *)arg1 ;
-(void)updateHighlights;
-(void)setShouldAutoRefreshHighlights:(BOOL)arg1 ;
-(void)autoRefreshHighlightsPersonalView;
-(BOOL)shouldAutoRefreshHighlights;
-(BOOL)updateHighlightsPersonalView;
-(id)timeRemainingFromDate:(id)arg1 toDate:(id)arg2 ;
-(long long)totalEntries;
-(UISegmentedControl *)playerScopeControl;
-(GKLeaderboardEntry *)playerAboveEntry;
-(GKLeaderboardEntry *)playerBelowEntry;
-(GKLeaderboardEntry *)topPlayerEntry;
-(void)didLoadAdditionalScores;
-(GKLeaderboardEntry *)localPlayerEntry;
-(void)clearSelection;
-(GKTimeScopeButton *)timeScopeButton;
-(void)setPlayerScope:(long long)arg1 restrictToFriendsOnly:(BOOL)arg2 ;
-(UIView *)collectionContainer;
-(UIView *)timeScopeContainer;
-(void)addLeaderboardHighlights;
-(void)addPlayerScopeControl;
-(void)setupFadeGradient;
-(void)configureTimeScopeMenu;
-(UIButton *)scrollToTopButton;
-(UIView *)collectionGradientView;
-(void)setCollectionViewFadeGradient:(CAGradientLayer *)arg1 ;
-(void)didEnterLoadingState;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)updatePlayerScopeLayoutForSize:(CGSize)arg1 ;
-(void)enableDisableCollectionViewScrolling;
-(CAGradientLayer *)collectionViewFadeGradient;
-(void)timeScopePressed:(id)arg1 ;
-(void)playerScopeChanged:(id)arg1 ;
-(void)setPlayerScopeControl:(UISegmentedControl *)arg1 ;
-(void)loadLeaderboardForOccurrence:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateContentSize;
-(void)setPreviousOccurrence:(GKLeaderboard *)arg1 ;
-(GKLeaderboard *)currentOccurrence;
-(void)setTopPlayerEntry:(GKLeaderboardEntry *)arg1 ;
-(void)setPlayerAboveEntry:(GKLeaderboardEntry *)arg1 ;
-(void)setPlayerBelowEntry:(GKLeaderboardEntry *)arg1 ;
-(void)setTotalEntries:(long long)arg1 ;
-(NSLayoutConstraint *)collectionContainerHeight;
-(void)shareScore:(id)arg1 fromLeaderboard:(id)arg2 sendingView:(id)arg3 relativeRect:(CGRect)arg4 ;
-(void)setMainScrollView:(UIScrollView *)arg1 ;
-(NSLayoutConstraint *)highlightViewHeightConstraint;
-(NSLayoutConstraint *)highlightViewWidthConstraint;
-(NSLayoutConstraint *)highlightViewLandscapeTopConstraint;
-(NSLayoutConstraint *)collectionGradientViewLandscapeTopConstraint;
-(void)scrollToTopPressed:(id)arg1 ;
-(void)setScrollToTopButton:(UIButton *)arg1 ;
-(void)setCollectionContainer:(UIView *)arg1 ;
-(void)setTimeScopeContainer:(UIView *)arg1 ;
-(void)setCollectionContainerHeight:(NSLayoutConstraint *)arg1 ;
-(void)setCollectionGradientView:(UIView *)arg1 ;
-(NSLayoutConstraint *)collectionGradientViewHeightConstraint;
-(void)setCollectionGradientViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHighlightViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHighlightViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCollectionGradientViewLandscapeTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHighlightViewLandscapeTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTimeScopeButton:(GKTimeScopeButton *)arg1 ;
-(void)collectionViewDidScroll;
-(void)challengeWithScore:(id)arg1 ;
-(void)shareWithScore:(id)arg1 fromView:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNoContentView:(GKNoContentView *)arg1 ;
-(GKNoContentView *)noContentView;
-(void)viewDidLayoutSubviews;
-(UIScrollView *)mainScrollView;
-(void)dealloc;
@end

