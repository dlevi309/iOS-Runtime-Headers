/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/GKMatchDelegate.h>
#import <libobjc.A.dylib/GKMatchDelegatePrivate.h>
#import <libobjc.A.dylib/GKExtensionParentViewControllerProtocol.h>

@protocol GKMatchmakerViewControllerDelegate;
@class GKMatchRequest, GKMatchmakerHostViewController, GKInvite, GKMatch, NSMutableArray, UIAlertController, NSString;

@interface GKMatchmakerViewController : UINavigationController <GKMatchDelegate, GKMatchDelegatePrivate, GKExtensionParentViewControllerProtocol> {

	BOOL _userCancelledMatching;
	BOOL _hosted;
	id<GKMatchmakerViewControllerDelegate> matchmakerDelegate;
	GKMatchRequest* _matchRequest;
	long long _matchmakingMode;
	GKMatchmakerHostViewController* _remoteViewController;
	GKInvite* _acceptedInvite;
	GKMatch* _match;
	NSMutableArray* _hostedPlayers;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) GKMatchmakerHostViewController * remoteViewController;                         //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) GKInvite * acceptedInvite;                                                     //@synthesize acceptedInvite=_acceptedInvite - In the implementation block
@property (nonatomic,retain) GKMatch * match;                                                               //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSMutableArray * hostedPlayers;                                                //@synthesize hostedPlayers=_hostedPlayers - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                           //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) GKMatchRequest * matchRequest;                                                 //@synthesize matchRequest=_matchRequest - In the implementation block
@property (assign,nonatomic) BOOL userCancelledMatching;                                                    //@synthesize userCancelledMatching=_userCancelledMatching - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> cancellingQueue; 
@property (assign,nonatomic,__weak) id<GKMatchmakerViewControllerDelegate> matchmakerDelegate; 
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                                                   //@synthesize hosted=_hosted - In the implementation block
@property (assign,nonatomic) long long matchmakingMode;                                                     //@synthesize matchmakingMode=_matchmakingMode - In the implementation block
@property (nonatomic,copy) NSString * defaultInvitationMessage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(GKMatchmakerHostViewController *)remoteViewController;
-(id)init;
-(GKMatch *)match;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)sendData:(id)arg1 ;
-(void)playersToInvite:(id)arg1 ;
-(void)localPlayerAcceptedGameInvite:(id)arg1 ;
-(void)setupNotifications;
-(void)inviterCancelledNotification:(id)arg1 ;
-(id<GKMatchmakerViewControllerDelegate>)matchmakerDelegate;
-(void)createMatchForAcceptedInvite;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setHostedPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)cancellingQueue;
-(void)finishWithMatch;
-(void)finishWithPlayers;
-(NSMutableArray *)hostedPlayers;
-(long long)matchmakingMode;
-(UIAlertController *)alertController;
-(void)invitedPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)addPlayersToMatch:(id)arg1 ;
-(void)setMatchmakingMode:(long long)arg1 ;
-(NSString *)defaultInvitationMessage;
-(void)setDefaultInvitationMessage:(NSString *)arg1 ;
-(void)setMatch:(GKMatch *)arg1 ;
-(void)cancelPendingInviteToPlayer:(id)arg1 ;
-(void)setRemoteViewController:(GKMatchmakerHostViewController *)arg1 ;
-(void)setMatchmakerDelegate:(id<GKMatchmakerViewControllerDelegate>)arg1 ;
-(void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3 ;
-(void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3 ;
-(void)match:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithInvite:(id)arg1 ;
-(void)setHostedPlayer:(id)arg1 didConnect:(BOOL)arg2 ;
-(void)setHostedPlayerReady:(id)arg1 ;
-(void)cancelMatching;
-(void)shareMatchWithRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setShareInvitees:(id)arg1 ;
-(void)startMatchingWithRequest:(id)arg1 ;
-(void)setBrowsingForNearbyPlayers:(BOOL)arg1 ;
-(void)setHostedPlayers:(NSMutableArray *)arg1 ;
-(void)viewDidLoad;
-(void)_setupRemoteViewController;
-(void)_setupChildViewController;
-(void)authenticationChanged:(id)arg1 ;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(void)setHosted:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setAcceptedInvite:(GKInvite *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(GKMatchRequest *)matchRequest;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setUserCancelledMatching:(BOOL)arg1 ;
-(id)initWithMatchRequest:(id)arg1 ;
-(BOOL)isHosted;
-(void)setMatchRequest:(GKMatchRequest *)arg1 ;
-(BOOL)userCancelledMatching;
-(void)cancel;
-(GKInvite *)acceptedInvite;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)dealloc;
-(void)setConnectingStateForPlayer:(id)arg1 ;
@end

