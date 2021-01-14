/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKAchievementViewControllerDelegate;
@interface GKAchievementViewController : GKGameCenterViewController {

	id<GKAchievementViewControllerDelegate> _achievementDelegate;

}

@property (assign,nonatomic,__weak) id<GKAchievementViewControllerDelegate> achievementDelegate;              //@synthesize achievementDelegate=_achievementDelegate - In the implementation block
-(id)init;
-(void)notifyDelegateOnWillFinish;
-(id<GKAchievementViewControllerDelegate>)achievementDelegate;
-(void)setAchievementDelegate:(id<GKAchievementViewControllerDelegate>)arg1 ;
-(void)dealloc;
@end

