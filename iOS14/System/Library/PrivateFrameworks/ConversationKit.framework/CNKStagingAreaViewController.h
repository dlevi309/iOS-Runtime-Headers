/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXEffectBrowserContentPresenterDelegate.h>
#import <libobjc.A.dylib/AVCEffectsDelegate.h>
#import <libobjc.A.dylib/CNKFaceTimeInCallControlsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNKFaceTimeInCallControlsDragControllerDelegate.h>
#import <libobjc.A.dylib/CNKFaceTimeCameraViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXCameraViewControllerDelegate.h>

@class TUCall;

@interface CNKStagingAreaViewController : UIViewController <CFXEffectBrowserContentPresenterDelegate, AVCEffectsDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, CNKFaceTimeInCallControlsDragControllerDelegate, CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate> {

	 participantLabel;
	 secondaryParticipantLabel;
	 localPreviewFrontView;
	 localPreviewBackView;
	 audioVisualizationView;
	 controlsViewController;
	 constraintController;
	 controlsDragController;
	 effectsEnabled;
	 avcEffects;
	 effectsCaptureInfo;
	 effectsViewController;
	 effectsBrowserViewController;
	 effectsLayoutController;
	 conversationController;
	 videoDeviceController;
	 numberFormatter;
	 scheduledUpdateTimer;
	 isWaitingToConnect;
	 hasJoined;
	 delegate;
	 stagingAreaDelegate;
	 call;
	 deviceOrientation;
	 isOnScreen;

}

@property (assign,nonatomic) BOOL effectsEnabled; 
@property (assign,nonatomic) BOOL hasJoined; 
@property (assign,__weak,nonatomic) id<CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; 
@property (assign,__weak,nonatomic) id<CNKStagingAreaViewControllerDelegate> stagingAreaDelegate; 
@property (retain,nonatomic) TUCall * call; 
@property (assign,nonatomic) long long deviceOrientation; 
@property (assign,nonatomic) BOOL isOnScreen; 
-(void)didCaptureVideoFrame:(id)arg1 ;
-(void)serverDidTimeout:(id)arg1 ;
-(void)didSelectApp:(id)arg1 ;
-(void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2 ;
-(void)didCreateTableViewForInCallControlsViewController:(id)arg1 ;
-(void)resetEffectsState;
-(id)audioRouteMenuForInCallControlsViewController:(id)arg1 ;
-(id)audioRouteGlyphForInCallControlsViewController:(id)arg1 route:(id)arg2 buttonStyle:(long long)arg3 ;
-(long long)inCallControlsDragControllerShortestState:(id)arg1 ;
-(void)inCallControlsDragController:(id)arg1 willStartDragFrom:(long long)arg2 ;
-(void)inCallControlsDragController:(id)arg1 didStartDragTo:(long long)arg2 ;
-(void)inCallControlsDragController:(id)arg1 didEndDragAt:(long long)arg2 ;
-(void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2 ;
-(void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2 ;
-(void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2 ;
-(BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1 ;
-(void)updateViewConstraints;
-(TUCall *)call;
-(BOOL)isOnScreen;
-(id<CNKFaceTimeMultiwayConversationViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)effectsEnabled;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setDelegate:(id<CNKFaceTimeMultiwayConversationViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(long long)deviceOrientation;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)hasJoined;
-(void)setHasJoined:(BOOL)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithActiveCall:(id)arg1 ;
-(void)setIsOnScreen:(BOOL)arg1 ;
-(void)toggleVideoMute;
-(void)muteVideo;
-(void)hideEffectsBrowser;
-(id)initWithActiveCall:(id)arg1 hasJoined:(BOOL)arg2 ;
-(void)didTapJoinButton;
-(id<CNKStagingAreaViewControllerDelegate>)stagingAreaDelegate;
-(void)setStagingAreaDelegate:(id<CNKStagingAreaViewControllerDelegate>)arg1 ;
-(void)didTapLeaveButton;
-(void)didTapSwapLocalParticipantCamera;
@end

