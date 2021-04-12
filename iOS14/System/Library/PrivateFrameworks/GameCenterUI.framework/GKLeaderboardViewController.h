/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKLeaderboardViewControllerDelegate;
@class NSString;

@interface GKLeaderboardViewController : GKGameCenterViewController {

	id<GKLeaderboardViewControllerDelegate> _leaderboardDelegate;

}

@property (assign,nonatomic) long long timeScope; 
@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic,__weak) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;              //@synthesize leaderboardDelegate=_leaderboardDelegate - In the implementation block
-(void)setCategory:(NSString *)arg1 ;
-(id<GKLeaderboardViewControllerDelegate>)leaderboardDelegate;
-(void)setLeaderboardDelegate:(id<GKLeaderboardViewControllerDelegate>)arg1 ;
-(id)init;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(NSString *)category;
-(void)notifyDelegateOnWillFinish;
@end

