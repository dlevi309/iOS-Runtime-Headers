/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBDeviceApplicationSceneOverlayViewProviderDelegate;
@class SBIsolatedSceneOrientationFollowingWrapperViewController, SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {

	SBIsolatedSceneOrientationFollowingWrapperViewController* _orientationWrapperViewController;
	BOOL _prefersStatusBarHidden;
	id<SBDeviceApplicationSceneOverlayViewProviderDelegate> _delegate;
	SBDeviceApplicationSceneHandle* _sceneHandle;

}

@property (nonatomic,retain) SBDeviceApplicationSceneHandle * sceneHandle;                                                          //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,__weak,readonly) id<SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBDeviceApplicationSceneOverlayViewController> overlayViewController; 
@property (nonatomic,readonly) BOOL prefersStatusBarHidden;                                                                         //@synthesize prefersStatusBarHidden=_prefersStatusBarHidden - In the implementation block
@property (nonatomic,readonly) long long preferredStatusBarStyle; 
@property (nonatomic,readonly) BOOL wantsResignActiveAssertion; 
@property (nonatomic,readonly) long long priority; 
-(BOOL)prefersStatusBarHidden;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)wantsResignActiveAssertion;
-(id<SBDeviceApplicationSceneOverlayViewProviderDelegate>)delegate;
-(void)_deactivateIfPossible;
-(void)_activateIfPossible;
-(unsigned long long)supportedInterfaceOrientations;
-(void)showContentWithAnimation:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithSceneHandle:(id)arg1 delegate:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(UIViewController*<SBDeviceApplicationSceneOverlayViewController>)overlayViewController;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(id)_realOverlayViewController;
-(BOOL)shouldFollowSceneOrientation;
-(long long)priority;
-(void)hideContentWithAnimation:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setSceneHandle:(SBDeviceApplicationSceneHandle *)arg1 ;
@end

