/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewController.h>
#import <libobjc.A.dylib/GKDashboardMultiplayerPickerDelegate.h>
#import <libobjc.A.dylib/GKMultiplayerCustomInviteMessageViewControllerDelegate.h>
#import <libobjc.A.dylib/GKMultiplayerDataSourceDelegate.h>

@protocol GKDashboardNearbyBrowserDelegate;
@class GKMatchRequest, NSString, GKGame, NSURL, _TtC12GameCenterUI23GKMultiplayerFooterView, _TtC12GameCenterUI29GKMultiplayerButtonHeaderView, GKDashboardMultiplayerPickerViewController, GKMultiplayerDataSource;

@interface GKMultiplayerViewController : GKCollectionViewController <GKDashboardMultiplayerPickerDelegate, GKMultiplayerCustomInviteMessageViewControllerDelegate, GKMultiplayerDataSourceDelegate> {

	BOOL _showCancelButton;
	BOOL _didAcceptGameInvite;
	BOOL _didStartForcedAutomatch;
	BOOL _addButtonEnabled;
	GKMatchRequest* _matchRequest;
	GKMatchRequest* _originalMatchRequest;
	NSString* _defaultInvitationMessage;
	GKGame* _game;
	id<GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
	NSURL* _shareURL;
	long long _matchmakingMode;
	_TtC12GameCenterUI23GKMultiplayerFooterView* _footerView;
	_TtC12GameCenterUI29GKMultiplayerButtonHeaderView* _buttonHeaderView;
	GKDashboardMultiplayerPickerViewController* _playerPickerViewController;
	long long _invitationType;
	unsigned long long _messagesInviteStatus;

}

@property (nonatomic,retain) _TtC12GameCenterUI29GKMultiplayerButtonHeaderView * buttonHeaderView;                 //@synthesize buttonHeaderView=_buttonHeaderView - In the implementation block
@property (nonatomic,retain) GKDashboardMultiplayerPickerViewController * playerPickerViewController;              //@synthesize playerPickerViewController=_playerPickerViewController - In the implementation block
@property (assign,nonatomic) long long invitationType;                                                             //@synthesize invitationType=_invitationType - In the implementation block
@property (assign,nonatomic) unsigned long long messagesInviteStatus;                                              //@synthesize messagesInviteStatus=_messagesInviteStatus - In the implementation block
@property (nonatomic,copy,readonly) GKMatchRequest * matchRequest;                                                 //@synthesize matchRequest=_matchRequest - In the implementation block
@property (nonatomic,copy,readonly) GKMatchRequest * originalMatchRequest;                                         //@synthesize originalMatchRequest=_originalMatchRequest - In the implementation block
@property (nonatomic,copy) NSString * defaultInvitationMessage;                                                    //@synthesize defaultInvitationMessage=_defaultInvitationMessage - In the implementation block
@property (assign,nonatomic) BOOL showCancelButton;                                                                //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                                        //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) BOOL didAcceptGameInvite;                                                             //@synthesize didAcceptGameInvite=_didAcceptGameInvite - In the implementation block
@property (assign,nonatomic,__weak) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;                           //@synthesize nearbyDelegate=_nearbyDelegate - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                                                                     //@synthesize shareURL=_shareURL - In the implementation block
@property (assign,nonatomic) BOOL didStartForcedAutomatch;                                                         //@synthesize didStartForcedAutomatch=_didStartForcedAutomatch - In the implementation block
@property (assign,nonatomic) long long matchmakingMode;                                                            //@synthesize matchmakingMode=_matchmakingMode - In the implementation block
@property (nonatomic,retain) _TtC12GameCenterUI23GKMultiplayerFooterView * footerView;                             //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,readonly) GKMultiplayerDataSource * multiplayerDataSource; 
@property (assign,nonatomic) BOOL addButtonEnabled;                                                                //@synthesize addButtonEnabled=_addButtonEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removePlayer:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(_TtC12GameCenterUI23GKMultiplayerFooterView *)footerView;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(BOOL)canStartForcedAutomatch;
-(void)willPresentPlayerPicker:(id)arg1 ;
-(void)loadShareURLWithCompletion:(/*^block*/id)arg1 ;
-(void)sendInvitesToContactPlayers:(id)arg1 legacyPlayers:(id)arg2 ;
-(void)setShareInvitees;
-(void)removedPlayer:(id)arg1 ;
-(GKGame *)game;
-(NSURL *)shareURL;
-(id)init;
-(BOOL)isLoading;
-(UIEdgeInsets)collectionViewContentInset;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)playersToInvite:(id)arg1 ;
-(void)localPlayerAcceptedGameInvite:(id)arg1 ;
-(void)setInvitationType:(long long)arg1 ;
-(void)configureDataSource;
-(void)addMessageButtonPressed;
-(_TtC12GameCenterUI29GKMultiplayerButtonHeaderView *)buttonHeaderView;
-(void)updateCollectionViewContentInset;
-(void)updateHeaderFooterLayoutMargins;
-(void)refreshHeaderAndFooterMaterials;
-(long long)invitationType;
-(void)setPlayerPickerViewController:(GKDashboardMultiplayerPickerViewController *)arg1 ;
-(void)setupCancelButton;
-(long long)maxAvailablePlayers;
-(void)preparePlayerPicker;
-(GKDashboardMultiplayerPickerViewController *)playerPickerViewController;
-(long long)matchmakingMode;
-(void)dismissPickerViewController;
-(void)determineInvitationType;
-(BOOL)allowPlayerCountSelection;
-(void)setMessagesInviteStatus:(unsigned long long)arg1 ;
-(unsigned long long)messagesInviteStatus;
-(void)handleServiceUnavailable:(id)arg1 ;
-(void)didInviteContactPlayers;
-(void)didClickCancelForServiceUnavailableAlert;
-(void)setDidAcceptGameInvite:(BOOL)arg1 ;
-(void)presentPlayerPicker;
-(void)cancelButtonPressed;
-(id)viewControllerLayout;
-(void)setViewNeedsLayout;
-(id)makeButtonHeaderView;
-(void)setButtonHeaderView:(_TtC12GameCenterUI29GKMultiplayerButtonHeaderView *)arg1 ;
-(void)handleNewParticipantCount:(long long)arg1 ;
-(void)didUpdateParticipants;
-(void)customInviteViewController:(id)arg1 didFinishWithMessage:(id)arg2 ;
-(long long)multiplayerCellLayoutMode;
-(void)didTapInviteOnCell:(id)arg1 ;
-(void)didTapRemoveParticipant:(id)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)addAutomatchPlayer;
-(void)removeAutomatchPlayer;
-(void)setMatchmakingMode:(long long)arg1 ;
-(NSString *)defaultInvitationMessage;
-(void)setDefaultInvitationMessage:(NSString *)arg1 ;
-(BOOL)addButtonEnabled;
-(void)multiplayerPickerDidCancel:(id)arg1 ;
-(void)setNearbyDelegate:(id<GKDashboardNearbyBrowserDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)playNow;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(void)multiplayerPicker:(id)arg1 didPickPlayers:(id)arg2 ;
-(id<GKDashboardNearbyBrowserDelegate>)nearbyDelegate;
-(void)setFooterView:(_TtC12GameCenterUI23GKMultiplayerFooterView *)arg1 ;
-(void)didEnterLoadedState;
-(void)setGame:(GKGame *)arg1 ;
-(GKMatchRequest *)originalMatchRequest;
-(BOOL)didAcceptGameInvite;
-(GKMatchRequest *)matchRequest;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setAddButtonEnabled:(BOOL)arg1 ;
-(GKMultiplayerDataSource *)multiplayerDataSource;
-(void)updateDataSourceInvitationEnabled;
-(void)updateStartGameButtonTitle;
-(void)updateAddMessageButtonVisibility;
-(id)initWithMatchRequest:(id)arg1 ;
-(BOOL)isInSetupMode;
-(BOOL)showCancelButton;
-(void)cancel;
-(void)setDidStartForcedAutomatch:(BOOL)arg1 ;
-(BOOL)didStartForcedAutomatch;
-(void)performActionsForButtonStartGame;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)performActionsForButtonCancelCurrentMatching;
-(void)inviteContactPlayers:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)invitePlayers:(id)arg1 ;
-(BOOL)isCanceling;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)startGameButtonPressed;
-(long long)automatchParticipantStatus;
@end

