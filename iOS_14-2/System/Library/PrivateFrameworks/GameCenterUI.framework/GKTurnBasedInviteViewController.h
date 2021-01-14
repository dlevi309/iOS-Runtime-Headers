/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKMultiplayerViewController.h>

@protocol GKTurnBasedInviteViewControllerDelegate;
@class NSMutableDictionary, GKTurnBasedMatch;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController {

	BOOL _deletePreloadedMatch;
	NSMutableDictionary* _inviteMessageDictionary;
	id<GKTurnBasedInviteViewControllerDelegate> _delegate;
	long long _mode;
	GKTurnBasedMatch* _match;

}

@property (nonatomic,retain) NSMutableDictionary * inviteMessageDictionary;                                                //@synthesize inviteMessageDictionary=_inviteMessageDictionary - In the implementation block
@property (assign,nonatomic) long long mode;                                                                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatch * match;                                                                     //@synthesize match=_match - In the implementation block
@property (assign,nonatomic) BOOL deletePreloadedMatch;                                                                    //@synthesize deletePreloadedMatch=_deletePreloadedMatch - In the implementation block
@property (getter=isLoadingOrRemovingPreloadedMatch,nonatomic,readonly) BOOL loadingOrRemovingPreloadedMatch; 
@property (assign,nonatomic,__weak) id<GKTurnBasedInviteViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)mode;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(BOOL)canStartForcedAutomatch;
-(void)sendInvitesToContactPlayers:(id)arg1 legacyPlayers:(id)arg2 ;
-(id<GKTurnBasedInviteViewControllerDelegate>)delegate;
-(GKTurnBasedMatch *)match;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)removeCurrentMatchAndSetFlagIfNotLoaded:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)cleanupStateForCancelOrErrorWithHandler:(/*^block*/id)arg1 ;
-(void)finishWithMatchID:(id)arg1 ;
-(BOOL)deletePreloadedMatch;
-(void)setMode:(long long)arg1 ;
-(void)didInviteContactPlayers;
-(void)didClickCancelForServiceUnavailableAlert;
-(void)createGameWithPlayersToInvite:(id)arg1 forSharing:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDeletePreloadedMatch:(BOOL)arg1 ;
-(NSMutableDictionary *)inviteMessageDictionary;
-(void)setInviteMessageDictionary:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<GKTurnBasedInviteViewControllerDelegate>)arg1 ;
-(void)handleNewParticipantCount:(long long)arg1 ;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)playNow;
-(void)viewDidLoad;
-(BOOL)isLoadingOrRemovingPreloadedMatch;
-(void)finishWithError:(id)arg1 ;
-(void)updateStartGameButtonTitle;
-(BOOL)isInSetupMode;
-(void)cancel;
-(void)performActionsForButtonCancelCurrentMatching;
-(void)invitePlayers:(id)arg1 ;
-(void)startGameButtonPressed;
-(long long)automatchParticipantStatus;
@end

