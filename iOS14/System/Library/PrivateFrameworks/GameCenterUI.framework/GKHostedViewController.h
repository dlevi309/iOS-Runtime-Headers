/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>

@class GKGame, GKRemoteViewServiceController;

@interface GKHostedViewController : UIViewController {

	BOOL _presentingRemoteViewController;
	BOOL _shouldPresentRemoteViewController;
	BOOL _isRequestingRemoteViewController;
	BOOL _gkIsDisappearing;
	GKGame* _game;
	GKRemoteViewServiceController* _remoteViewController;
	/*^block*/id _remoteViewReadyHandler;

}

@property (nonatomic,retain) GKRemoteViewServiceController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic) BOOL isRequestingRemoteViewController;                             //@synthesize isRequestingRemoteViewController=_isRequestingRemoteViewController - In the implementation block
@property (assign,nonatomic) BOOL gkIsDisappearing;                                             //@synthesize gkIsDisappearing=_gkIsDisappearing - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                     //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentRemoteViewController;                            //@synthesize shouldPresentRemoteViewController=_shouldPresentRemoteViewController - In the implementation block
@property (assign,nonatomic) BOOL presentingRemoteViewController;                               //@synthesize presentingRemoteViewController=_presentingRemoteViewController - In the implementation block
@property (nonatomic,copy) id remoteViewReadyHandler;                                           //@synthesize remoteViewReadyHandler=_remoteViewReadyHandler - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)requestRemoteViewControllerIfNeeded;
-(void)setPresentingRemoteViewController:(BOOL)arg1 ;
-(void)presentRemoteViewControllerIfNeeded;
-(void)setGkIsDisappearing:(BOOL)arg1 ;
-(id)hostSideViewControllerClassName;
-(id)serviceSideViewControllerClassName;
-(void)didGetRemoteViewController;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)donePressed:(id)arg1 ;
-(GKRemoteViewServiceController *)remoteViewController;
-(GKGame *)game;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)init;
-(void)setRemoteViewReadyHandler:(id)arg1 ;
-(BOOL)gkIsDisappearing;
-(BOOL)presentingRemoteViewController;
-(void)setShouldPresentRemoteViewController:(BOOL)arg1 ;
-(id)remoteViewReadyHandler;
-(BOOL)isRequestingRemoteViewController;
-(void)setIsRequestingRemoteViewController:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldPresentRemoteViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(id)_presentingViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)setRemoteViewController:(GKRemoteViewServiceController *)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetRemoteViewController;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)dismissModalViewControllerAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

