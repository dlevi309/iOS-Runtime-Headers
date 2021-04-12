/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKMatchmakerHostProtocol.h>
#import <libobjc.A.dylib/GKMatchmakerServiceProtocol.h>

@class GKMatchmakerViewController, GKGame, NSString;

@interface GKMatchmakerHostViewController : GKExtensionRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol> {

	GKMatchmakerViewController* _delegate;

}

@property (assign,nonatomic,__weak) GKMatchmakerViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)matchmakerExtension;
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
-(void)applicationWillEnterForeground;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)setFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(GKMatchmakerViewController *)delegate;
-(void)extensionIsCanceling;
-(id)extensionObjectProxy;
-(void)setMatchRequestInternal:(id)arg1 ;
-(void)setDelegate:(GKMatchmakerViewController *)arg1 ;
-(void)setMatchmakingMode:(long long)arg1 ;
-(void)setDefaultInvitationMessage:(id)arg1 ;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2 ;
-(void)shareMatchWithRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)setHosted:(BOOL)arg1 ;
-(void)setAcceptedInviteInternal:(id)arg1 ;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
-(void)setPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)setConnectingStateForPlayer:(id)arg1 ;
@end

