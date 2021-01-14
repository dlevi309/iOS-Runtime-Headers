/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/GKExtensionParentViewControllerProtocol.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol GKGameCenterControllerDelegate;
@class NSString, GKDashboardHostViewController, GKLeaderboard, UIAlertController;

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	BOOL _isArcade;
	BOOL _presenting;
	id<GKGameCenterControllerDelegate> _gameCenterDelegate;
	long long _viewState;
	NSString* _leaderboardIdentifier;
	long long _leaderboardTimeScope;
	long long _leaderboardPlayerScope;
	GKDashboardHostViewController* _remoteViewController;
	GKLeaderboard* _leaderboard;
	NSString* _achievementIdentifier;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) GKDashboardHostViewController * remoteViewController;                      //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) NSString * leaderboardIdentifier;                                          //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                               //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) NSString * achievementIdentifier;                                          //@synthesize achievementIdentifier=_achievementIdentifier - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                       //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) NSString * leaderboardCategory; 
@property (assign,nonatomic) long long leaderboardTimeScope;                                            //@synthesize leaderboardTimeScope=_leaderboardTimeScope - In the implementation block
@property (assign,nonatomic) long long leaderboardPlayerScope;                                          //@synthesize leaderboardPlayerScope=_leaderboardPlayerScope - In the implementation block
@property (assign,nonatomic) long long viewState;                                                       //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) BOOL isArcade;                                                             //@synthesize isArcade=_isArcade - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                       //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic,__weak) id<GKGameCenterControllerDelegate> gameCenterDelegate;              //@synthesize gameCenterDelegate=_gameCenterDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)accessInstanceVariablesDirectly;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithState:(long long)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)animationEnded:(BOOL)arg1 ;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(GKDashboardHostViewController *)remoteViewController;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(double)transitionDuration:(id)arg1 ;
-(id)init;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setViewState:(long long)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(UIAlertController *)alertController;
-(void)setRemoteViewController:(GKDashboardHostViewController *)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setLeaderboardCategory:(NSString *)arg1 ;
-(NSString *)leaderboardCategory;
-(void)_setupRemoteViewController;
-(NSString *)leaderboardIdentifier;
-(void)_setupChildViewController;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(long long)viewState;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(BOOL)isArcade;
-(void)loadView;
-(void)setIsArcade:(BOOL)arg1 ;
-(void)checkArcadeStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldShowPlayForChallenge;
-(id)initWithAchievementID:(id)arg1 ;
-(id)initWithLeaderboardID:(id)arg1 playerScope:(long long)arg2 timeScope:(long long)arg3 ;
-(id)initWithLeaderboard:(id)arg1 playerScope:(long long)arg2 ;
-(long long)leaderboardTimeScope;
-(void)setLeaderboardTimeScope:(long long)arg1 ;
-(long long)leaderboardPlayerScope;
-(void)setLeaderboardPlayerScope:(long long)arg1 ;
-(void)setGameCenterDelegate:(id<GKGameCenterControllerDelegate>)arg1 ;
-(NSString *)achievementIdentifier;
-(BOOL)isPresenting;
-(void)setAchievementIdentifier:(NSString *)arg1 ;
-(void)setViewStateFromExtension:(long long)arg1 ;
-(void)setLeaderboardIdentifierFromExtension:(id)arg1 ;
-(void)setLeaderboardTimeScopeFromExtension:(long long)arg1 ;
-(void)setLeaderboardPlayerScopeFromExtension:(long long)arg1 ;
-(id<GKGameCenterControllerDelegate>)gameCenterDelegate;
-(void)notifyDelegateOnWillFinish;
-(void)dealloc;
@end

