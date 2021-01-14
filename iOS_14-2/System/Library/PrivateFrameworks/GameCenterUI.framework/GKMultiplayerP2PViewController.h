/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKMultiplayerViewController.h>

@protocol GKMultiplayerP2PViewControllerDelegate;
@class GKInvite;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController {

	BOOL _hosted;
	BOOL _userCancelledMatching;
	id<GKMultiplayerP2PViewControllerDelegate> _delegate;
	long long _mode;
	GKInvite* _acceptedInvite;
	double _inviteeConnectionTimeStamp;

}

@property (assign,nonatomic) long long mode;                                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) GKInvite * acceptedInvite;                                               //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (assign,nonatomic) double inviteeConnectionTimeStamp;                                       //@synthesize inviteeConnectionTimeStamp=_inviteeConnectionTimeStamp - In the implementation block
@property (assign) BOOL userCancelledMatching;                                                        //@synthesize userCancelledMatching=_userCancelledMatching - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                                             //@synthesize hosted=_hosted - In the implementation block
@property (assign,nonatomic,__weak) id<GKMultiplayerP2PViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationWillEnterForeground;
-(long long)mode;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)setFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(BOOL)canStartForcedAutomatch;
-(void)willPresentPlayerPicker:(id)arg1 ;
-(void)loadShareURLWithCompletion:(/*^block*/id)arg1 ;
-(void)sendInvitesToContactPlayers:(id)arg1 legacyPlayers:(id)arg2 ;
-(void)setShareInvitees;
-(void)removedPlayer:(id)arg1 ;
-(id<GKMultiplayerP2PViewControllerDelegate>)delegate;
-(void)setMode:(long long)arg1 ;
-(void)configureDataSource;
-(void)setDelegate:(id<GKMultiplayerP2PViewControllerDelegate>)arg1 ;
-(void)startGame;
-(void)playNow;
-(void)viewDidLoad;
-(void)setHosted:(BOOL)arg1 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(void)cancelAlertWithoutDelegateCallback;
-(void)showParentalControlsRestrictionAlert;
-(void)cancelPendingInvites;
-(void)finishWithError:(id)arg1 ;
-(void)updateForNewMode;
-(void)setUserCancelledMatching:(BOOL)arg1 ;
-(void)updateStartGameButtonTitle;
-(BOOL)havePendingPlayers;
-(void)sendStatusUpdate;
-(BOOL)isHosted;
-(BOOL)isInSetupMode;
-(void)setInviteeConnectionTimeStamp:(double)arg1 ;
-(void)playerConnected:(id)arg1 ;
-(void)playerDisconnected:(id)arg1 ;
-(void)processStatusUpdateMessageFromBytes:(const char*)arg1 withLength:(unsigned)arg2 ;
-(void)showInviterDisconnectedAlert;
-(BOOL)userCancelledMatching;
-(void)showAutomatchingErrorAlert;
-(void)cancel;
-(BOOL)haveInvitedPlayers;
-(void)displayCancelConfirmationDialog;
-(GKInvite *)acceptedInvite;
-(void)resetInviteesStatus;
-(void)performActionsForButtonCancelCurrentMatching;
-(double)inviteeConnectionTimeStamp;
-(void)invitePlayers:(id)arg1 ;
-(void)showMatchDisconnectedAlertForPlayer:(id)arg1 ;
-(BOOL)isCanceling;
-(void)dealloc;
-(void)startGameButtonPressed;
-(id)initWithAcceptedInvite:(id)arg1 ;
-(long long)automatchParticipantStatus;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
-(void)setPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)setConnectingStateForPlayer:(id)arg1 ;
@end

