/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKNavigationController.h>
#import <libobjc.A.dylib/GKExtensionProtocol.h>
#import <libobjc.A.dylib/GKDaemonProxyDataUpdateDelegate.h>
#import <libobjc.A.dylib/GKDashboardServiceInterface.h>

@class GKGame, UIViewController, NSString;

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface> {

	BOOL _alwaysShowDoneButton;
	int _hostPID;
	GKGame* _game;
	UIViewController* _privateViewController;
	double _statusBarHeight;

}

@property (assign,nonatomic) double statusBarHeight;                                //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) UIViewController * privateViewController;              //@synthesize privateViewController=_privateViewController - In the implementation block
@property (nonatomic,retain) GKGame * game;                                         //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowDoneButton;                             //@synthesize alwaysShowDoneButton=_alwaysShowDoneButton - In the implementation block
@property (assign,nonatomic) int hostPID;                                           //@synthesize hostPID=_hostPID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)statusBarHeight;
-(void)finish;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)donePressed:(id)arg1 ;
-(int)hostPID;
-(BOOL)_useBackdropViewForWindowBackground;
-(BOOL)shouldAnimatePresentationForPrivateViewController:(id)arg1 ;
-(void)finishAndPlayChallenge:(id)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(GKGame *)game;
-(id)init;
-(void)setStatusBarHeight:(double)arg1 ;
-(void)nudge;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)finishWithTurnBasedMatch:(id)arg1 ;
-(void)quitTurnBasedMatch:(id)arg1 ;
-(double)_statusBarHeightForCurrentInterfaceOrientation;
-(id)observedKeyPaths;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)setHostPID:(int)arg1 ;
-(void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_startObservingChangesToProperties;
-(void)serviceViewControllerCreated:(id)arg1 ;
-(void)_stopObservingChangesToProperties;
-(void)cancelServiceViewController;
-(void)presentInitialViewController:(id)arg1 ;
-(BOOL)alwaysShowDoneButton;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 ;
-(void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(void)_addDoneButtonToViewController:(id)arg1 ;
-(void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1 ;
-(UIViewController *)privateViewController;
-(void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1 ;
-(void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1 ;
-(void)resetPrivateViewController;
-(void)performSelectorOnHostController:(SEL)arg1 ;
-(void)remoteViewControllerIsFinishing;
-(void)remoteViewControllerDidFinish;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerDidCancel;
-(void)requestImagesForLeaderboardSetsWithHandler:(/*^block*/id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dashboardDidChangeToViewState:(long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)requestDashboardLogoImageWithHandler:(/*^block*/id)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)messageFromClient:(id)arg1 ;
-(void)setAlwaysShowDoneButton:(BOOL)arg1 ;
-(void)setPrivateViewController:(UIViewController *)arg1 ;
-(void)constructPrivateViewController;
-(void)dealloc;
@end

