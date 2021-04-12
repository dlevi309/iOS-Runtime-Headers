/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol GKLeaderboardScoreDelegate <NSObject>
@required
-(void)didLoadScoresWithLocalPlayerEntry:(id)arg1 topPlayer:(id)arg2 playerAbove:(id)arg3 playerBelow:(id)arg4 totalEntries:(long long)arg5;
-(void)didLoadAdditionalScores;
-(void)collectionViewDidScroll;

@end

