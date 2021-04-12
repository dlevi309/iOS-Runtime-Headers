/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKMatchmakerServiceProtocol <GKExtensionProtocol>
@optional
-(void)applicationWillEnterForeground;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2;
-(void)setPlayer:(id)arg1 sentData:(id)arg2;
-(void)setInvitesFailedWithError:(id)arg1;
-(void)setAutomatchFailedWithError:(id)arg1;
-(void)setFailedWithError:(id)arg1;
-(void)inviterCancelled;
-(void)setMatchRequestInternal:(id)arg1;
-(void)setMatchmakingMode:(long long)arg1;
-(void)setDefaultInvitationMessage:(id)arg1;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
-(void)setHosted:(BOOL)arg1;
-(void)setAcceptedInviteInternal:(id)arg1;
-(void)setExistingPlayers:(id)arg1;
-(void)setAutomatchPlayerCount:(long long)arg1;
-(void)setPlayer:(id)arg1 responded:(long long)arg2;
-(void)setConnectingStateForPlayer:(id)arg1;

@end

