/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNKFaceTimeInCallControlsDragControllerDelegate.h>
#import <libobjc.A.dylib/CNKFaceTimeInCallControlsViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXEffectBrowserContentPresenterDelegate.h>
#import <libobjc.A.dylib/AVCEffectsDelegate.h>
#import <libobjc.A.dylib/CNKFaceTimeCameraViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXCameraViewControllerDelegate.h>

@class NSTimer, TUCall, UIViewController;

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController <CNKFaceTimeInCallControlsDragControllerDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, AVCEffectsDelegate, CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate> {

	 conversationController;
	 mostActiveParticipantsController;
	 avcEffects;
	 effectsCaptureInfo;
	 viewContent;
	 inCallControlsDismissTimer;
	 hideInactiveParticipantsTimer;
	 effectsLayoutController;
	 pipZoomControl;
	 shouldShowZoomControls;
	 deviceOrientation;
	 isOnScreen;
	 delegate;
	 effectsEnabled;
	 isPipped;

}

@property (retain,nonatomic) NSTimer * inCallControlsDismissTimer; 
@property (readonly,nonatomic) TUCall * call; 
@property (readonly,nonatomic) BOOL wantsApplicationDismissalStyle; 
@property (assign,nonatomic) long long deviceOrientation; 
@property (assign,nonatomic) BOOL isOnScreen; 
@property (assign,__weak,nonatomic) id<CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL effectsEnabled; 
@property (readonly,nonatomic) UIViewController * pipViewController; 
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
-(void)setControlsState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2 ;
-(void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2 ;
-(void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1 ;
-(void)cameraViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4 ;
-(void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2 ;
-(BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1 ;
-(void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(TUCall *)call;
-(BOOL)isOnScreen;
-(id<CNKFaceTimeMultiwayConversationViewControllerDelegate>)delegate;
-(BOOL)effectsEnabled;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<CNKFaceTimeMultiwayConversationViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)deviceOrientation;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithActiveCall:(id)arg1 ;
-(void)restartAutoHideInCallControlsDrawerTimer;
-(NSTimer *)inCallControlsDismissTimer;
-(void)setInCallControlsDismissTimer:(NSTimer *)arg1 ;
-(BOOL)wantsApplicationDismissalStyle;
-(void)setIsOnScreen:(BOOL)arg1 ;
-(UIViewController *)pipViewController;
-(id)initWithActiveCall:(id)arg1 stagingAreaViewController:(id)arg2 ;
-(void)toggleAudioMute;
-(void)toggleVideoMute;
-(void)muteVideo;
-(void)openMessagesConversation;
-(void)hideEffectsBrowser;
-(void)setControllerIsPipped:(BOOL)arg1 ;
-(id)accessibilityConstraintController;
@end

