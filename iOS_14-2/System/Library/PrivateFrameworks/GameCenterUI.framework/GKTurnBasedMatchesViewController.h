/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewController.h>
#import <libobjc.A.dylib/GKTurnBasedInviteViewControllerDelegate.h>
#import <libobjc.A.dylib/GKTurnBasedMatchDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/GKTurnBasedMatchesDataSourceDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol GKTurnBasedMatchesViewControllerDelegate;
@class GKCollectionViewController, GKGame, GKMatchRequest, GKTurnBasedMatchesDataSource, NSString, GKTurnBasedInviteViewController;

@interface GKTurnBasedMatchesViewController : GKCollectionViewController <GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate, GKTurnBasedMatchesDataSourceDelegate, UIPopoverControllerDelegate, UIStateRestoring, UIPopoverPresentationControllerDelegate> {

	BOOL _showExistingMatches;
	BOOL _showPlay;
	BOOL _showQuit;
	GKCollectionViewController* _masterViewController;
	GKGame* _game;
	GKMatchRequest* _matchRequest;
	id<GKTurnBasedMatchesViewControllerDelegate> _delegate;
	GKTurnBasedMatchesDataSource* _matchesDataSource;
	long long _maxMatchesSeen;
	NSString* _matchIDWaitingForTurnEvent;
	GKTurnBasedInviteViewController* _inviteController;
	double _initialSectionHeaderHeight;

}

@property (nonatomic,retain) GKTurnBasedMatchesDataSource * matchesDataSource;                          //@synthesize matchesDataSource=_matchesDataSource - In the implementation block
@property (assign,nonatomic) long long maxMatchesSeen;                                                  //@synthesize maxMatchesSeen=_maxMatchesSeen - In the implementation block
@property (nonatomic,retain) NSString * matchIDWaitingForTurnEvent;                                     //@synthesize matchIDWaitingForTurnEvent=_matchIDWaitingForTurnEvent - In the implementation block
@property (nonatomic,retain) GKTurnBasedInviteViewController * inviteController;                        //@synthesize inviteController=_inviteController - In the implementation block
@property (assign,nonatomic) double initialSectionHeaderHeight;                                         //@synthesize initialSectionHeaderHeight=_initialSectionHeaderHeight - In the implementation block
@property (assign,nonatomic,__weak) GKCollectionViewController * masterViewController;                  //@synthesize masterViewController=_masterViewController - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                             //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKMatchRequest * matchRequest;                                             //@synthesize matchRequest=_matchRequest - In the implementation block
@property (assign,nonatomic,__weak) id<GKTurnBasedMatchesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showExistingMatches;                                                  //@synthesize showExistingMatches=_showExistingMatches - In the implementation block
@property (assign,nonatomic) BOOL showPlay;                                                             //@synthesize showPlay=_showPlay - In the implementation block
@property (assign,nonatomic) BOOL showQuit;                                                             //@synthesize showQuit=_showQuit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationDidEnterBackground;
-(GKCollectionViewController *)masterViewController;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(GKGame *)game;
-(void)updateUIBasedOnTraitCollection;
-(id)init;
-(id<GKTurnBasedMatchesViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)configureViewFactories;
-(void)configureHeader:(id)arg1 indexPath:(id)arg2 ;
-(void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1 ;
-(void)handleTurnBasedEvent:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidShowStore:(id)arg1 ;
-(void)setShowPlay:(BOOL)arg1 ;
-(double)initialSectionHeaderHeight;
-(void)setInitialSectionHeaderHeight:(double)arg1 ;
-(void)configureDataSource;
-(void)setShowQuit:(BOOL)arg1 ;
-(void)cancelButtonPressed;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setDelegate:(id<GKTurnBasedMatchesViewControllerDelegate>)arg1 ;
-(void)_gkRestorePopoverWithViewControllers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)viewDidLoad;
-(void)setMatchesDataSource:(GKTurnBasedMatchesDataSource *)arg1 ;
-(void)turnBasedMatchesDataSource:(id)arg1 didQuitMatch:(id)arg2 ;
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(BOOL)showPlay;
-(GKTurnBasedMatchesDataSource *)matchesDataSource;
-(void)addPressed;
-(void)detailPressedForMatch:(id)arg1 ;
-(void)showInviteControllerAnimated:(BOOL)arg1 ;
-(GKTurnBasedInviteViewController *)inviteController;
-(void)acceptInviteForMatch:(id)arg1 ;
-(void)showMatch:(id)arg1 ;
-(void)showDetailForMatch:(id)arg1 ;
-(void)dismissDetailViewControllerAnimated:(BOOL)arg1 ;
-(void)setInviteController:(GKTurnBasedInviteViewController *)arg1 ;
-(void)launchGameAndShowMatch:(id)arg1 ;
-(void)notifyGameWithMatch:(id)arg1 orError:(id)arg2 ;
-(void)dismissDetailViewControllerInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentNavigationControllerInPopover:(id)arg1 fromCell:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMatchIDWaitingForTurnEvent:(NSString *)arg1 ;
-(void)turnBasedInviteViewControllerWasCancelled:(id)arg1 ;
-(void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2 ;
-(void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setGame:(GKGame *)arg1 ;
-(GKMatchRequest *)matchRequest;
-(void)setShowExistingMatches:(BOOL)arg1 ;
-(void)setMasterViewController:(GKCollectionViewController *)arg1 ;
-(long long)maxMatchesSeen;
-(void)setMaxMatchesSeen:(long long)arg1 ;
-(NSString *)matchIDWaitingForTurnEvent;
-(void)didEnterNoContentState;
-(id)initWithMatchRequest:(id)arg1 ;
-(BOOL)isInGame;
-(BOOL)showQuit;
-(void)setMatchRequest:(GKMatchRequest *)arg1 ;
-(BOOL)showExistingMatches;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
@end

