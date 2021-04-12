/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionDataSource.h>

@class GKLeaderboard, GKGameRecord, NSArray, UIFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource {

	BOOL _showingMoreScores;
	BOOL _forceInitialShowMore;
	GKLeaderboard* _leaderboard;
	id _timeScopeTarget;
	SEL _timeScopeAction;
	GKGameRecord* _gameRecord;
	NSArray* _scores;
	long long _visibleItemCount;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;                                      //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * scores;                                               //@synthesize scores=_scores - In the implementation block
@property (assign,nonatomic) long long visibleItemCount;                                     //@synthesize visibleItemCount=_visibleItemCount - In the implementation block
@property (nonatomic,readonly) BOOL needsShowcaseCell; 
@property (nonatomic,readonly) BOOL needsShowMoreCell; 
@property (nonatomic,readonly) UIFont * sectionHeaderFont; 
@property (assign,getter=isShowingMoreScores,nonatomic) BOOL showingMoreScores;              //@synthesize showingMoreScores=_showingMoreScores - In the implementation block
@property (assign,nonatomic) BOOL forceInitialShowMore;                                      //@synthesize forceInitialShowMore=_forceInitialShowMore - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                    //@synthesize leaderboard=_leaderboard - In the implementation block
@property (assign,nonatomic) long long playerScope; 
@property (assign,nonatomic) long long timeScope; 
@property (assign,nonatomic,__weak) id timeScopeTarget;                                      //@synthesize timeScopeTarget=_timeScopeTarget - In the implementation block
@property (assign,nonatomic) SEL timeScopeAction;                                            //@synthesize timeScopeAction=_timeScopeAction - In the implementation block
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSArray *)scores;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(long long)itemCount;
-(double)preferredCollectionHeight;
-(void)setForceInitialShowMore:(BOOL)arg1 ;
-(BOOL)hasFriendsButton;
-(void)setVisibleItemCount:(long long)arg1 ;
-(BOOL)needsShowMoreCell;
-(long long)visibleItemCount;
-(BOOL)isShowingMoreScores;
-(void)setShowingMoreScores:(BOOL)arg1 ;
-(void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)needsShowcaseCell;
-(BOOL)isShowcaseIndexPath:(id)arg1 ;
-(BOOL)isShowMoreIndexPath:(id)arg1 ;
-(id)timeScopeTarget;
-(SEL)timeScopeAction;
-(void)sectionHeaderButtonPressed:(id)arg1 ;
-(void)showMoreInCollectionView:(id)arg1 section:(long long)arg2 ;
-(void)setTimeScopeTarget:(id)arg1 ;
-(void)setTimeScopeAction:(SEL)arg1 ;
-(BOOL)forceInitialShowMore;
-(id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2 ;
-(void)setupCollectionView:(id)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)sectionHeaderText;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(GKGameRecord *)gameRecord;
-(void)setPlayerScope:(long long)arg1 ;
-(long long)playerScope;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
-(UIFont *)sectionHeaderFont;
-(void)setScores:(NSArray *)arg1 ;
@end

