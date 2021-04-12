/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKDashboardServiceInterface <NSObject>
@optional
-(void)finishAndPlayChallenge:(id)arg1;
-(void)finishWithTurnBasedMatch:(id)arg1;
-(void)quitTurnBasedMatch:(id)arg1;
-(void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(/*^block*/id)arg2;
-(void)setToLightBackground;
-(void)setToDarkBackground;
-(void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;
-(void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1;
-(void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1;
-(void)requestImagesForLeaderboardSetsWithHandler:(/*^block*/id)arg1;
-(void)dashboardDidChangeToViewState:(long long)arg1;
-(void)requestDashboardLogoImageWithHandler:(/*^block*/id)arg1;

@required
-(void)finish;

@end

