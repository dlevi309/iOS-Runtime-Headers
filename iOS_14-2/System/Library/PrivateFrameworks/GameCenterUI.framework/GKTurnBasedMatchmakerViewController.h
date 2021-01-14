/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/GKLocalPlayerListener.h>
#import <libobjc.A.dylib/GKTurnBasedEventListener.h>
#import <libobjc.A.dylib/GKExtensionParentViewControllerProtocol.h>

@protocol GKTurnBasedMatchmakerViewControllerDelegate;
@class GKTurnBasedMatchmakerHostViewController, GKMatchRequest, UIAlertController, NSString;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol> {

	BOOL _showExistingMatches;
	id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
	GKTurnBasedMatchmakerHostViewController* _remoteViewController;
	GKMatchRequest* _matchRequest;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) GKTurnBasedMatchmakerHostViewController * remoteViewController;                                  //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) GKMatchRequest * matchRequest;                                                                   //@synthesize matchRequest=_matchRequest - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                                             //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate; 
@property (assign,nonatomic) BOOL showExistingMatches;                                                                        //@synthesize showExistingMatches=_showExistingMatches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(GKTurnBasedMatchmakerHostViewController *)remoteViewController;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIAlertController *)alertController;
-(void)setRemoteViewController:(GKTurnBasedMatchmakerHostViewController *)arg1 ;
-(void)viewDidLoad;
-(void)_setupRemoteViewController;
-(void)_setupChildViewController;
-(void)authenticationChanged:(id)arg1 ;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(void)player:(id)arg1 receivedTurnEventForMatch:(id)arg2 didBecomeActive:(BOOL)arg3 ;
-(id<GKTurnBasedMatchmakerViewControllerDelegate>)turnBasedMatchmakerDelegate;
-(void)finishWithError:(id)arg1 ;
-(GKMatchRequest *)matchRequest;
-(void)setShowExistingMatches:(BOOL)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)initWithMatchRequest:(id)arg1 ;
-(void)finishWithMatch:(id)arg1 ;
-(void)loadView;
-(void)playerQuitMatch:(id)arg1 ;
-(void)setTurnBasedMatchmakerDelegate:(id<GKTurnBasedMatchmakerViewControllerDelegate>)arg1 ;
-(void)setMatchRequest:(GKMatchRequest *)arg1 ;
-(BOOL)showExistingMatches;
-(void)cancel;
-(void)dealloc;
@end

