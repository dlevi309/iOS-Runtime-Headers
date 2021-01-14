/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKBasicCollectionViewController.h>

@protocol GKTurnBasedMatchDetailViewControllerDelegate;
@class NSObject, GKTurnBasedMatch, GKGame, GKTurnBasedParticipantsDataSource, GKTurnBasedMatchDetailHeaderView;

@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController {

	BOOL _isInGame;
	BOOL _shouldShowPlay;
	BOOL _shouldShowQuit;
	NSObject*<GKTurnBasedMatchDetailViewControllerDelegate> _delegateWeak;
	GKTurnBasedMatch* _match;
	GKGame* _game;
	GKTurnBasedParticipantsDataSource* _participantsDataSource;
	GKTurnBasedMatchDetailHeaderView* _headerView;
	double _initialSectionHeaderHeight;

}

@property (nonatomic,retain) GKTurnBasedParticipantsDataSource * participantsDataSource;                           //@synthesize participantsDataSource=_participantsDataSource - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatchDetailHeaderView * headerView;                                        //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) double initialSectionHeaderHeight;                                                    //@synthesize initialSectionHeaderHeight=_initialSectionHeaderHeight - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatch * match;                                                             //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                                        //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) BOOL isInGame;                                                                        //@synthesize isInGame=_isInGame - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlay;                                                                  //@synthesize shouldShowPlay=_shouldShowPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldShowQuit;                                                                  //@synthesize shouldShowQuit=_shouldShowQuit - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<GKTurnBasedMatchDetailViewControllerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setHeaderView:(GKTurnBasedMatchDetailHeaderView *)arg1 ;
-(BOOL)shouldShowPlay;
-(void)setShouldShowPlay:(BOOL)arg1 ;
-(GKGame *)game;
-(void)updateUIBasedOnTraitCollection;
-(id)init;
-(NSObject*<GKTurnBasedMatchDetailViewControllerDelegate>)delegate;
-(GKTurnBasedMatch *)match;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)chooseMatch:(id)arg1 ;
-(void)quitMatch:(id)arg1 ;
-(void)removeMatch:(id)arg1 ;
-(GKTurnBasedParticipantsDataSource *)participantsDataSource;
-(void)configureViewFactories;
-(void)configureMatchDetailHeader:(id)arg1 ;
-(void)configureHeader:(id)arg1 indexPath:(id)arg2 ;
-(void)doneButtonPressed:(id)arg1 ;
-(void)buyButtonPressed:(id)arg1 ;
-(id)_gkRepresentedObject;
-(void)setIsInGame:(BOOL)arg1 ;
-(void)handleTurnBasedEvent:(id)arg1 ;
-(BOOL)shouldShowQuit;
-(void)setShouldShowQuit:(BOOL)arg1 ;
-(void)setParticipantsDataSource:(GKTurnBasedParticipantsDataSource *)arg1 ;
-(double)initialSectionHeaderHeight;
-(void)setInitialSectionHeaderHeight:(double)arg1 ;
-(void)declineInvitation:(id)arg1 ;
-(void)configureDataSource;
-(void)setDelegate:(NSObject*<GKTurnBasedMatchDetailViewControllerDelegate>)arg1 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)setupActionButton;
-(void)viewDidLoad;
-(void)acceptInvitation:(id)arg1 ;
-(void)didUpdateModel;
-(void)setGame:(GKGame *)arg1 ;
-(void)didEnterNoContentState;
-(void)setActionButtonEnabled:(BOOL)arg1 ;
-(BOOL)isInGame;
-(GKTurnBasedMatchDetailHeaderView *)headerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

