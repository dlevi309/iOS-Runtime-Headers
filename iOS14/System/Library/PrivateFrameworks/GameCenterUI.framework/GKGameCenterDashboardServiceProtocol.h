/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKGameCenterDashboardServiceProtocol <GKExtensionProtocol>
@optional
-(void)hostSupportsShowingPlayForChallenge:(BOOL)arg1;
-(void)hostSupportsShowingPlayForTurnBasedMatch:(BOOL)arg1;
-(void)hostSupportsShowingQuitForTurnBasedMatch:(BOOL)arg1;
-(void)hostDidParseDashboardImageNames:(id)arg1 leaderboardSetNames:(id)arg2 leaderboardNames:(id)arg3;
-(void)hostDidChangeViewState:(id)arg1;
-(void)hostDidChangeLeaderboardIdentifier:(id)arg1;
-(void)hostDidChangeLeaderboardTimeScope:(id)arg1;
-(void)hostDidChangeLeaderboardPlayerScope:(id)arg1;

@end

