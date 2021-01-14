/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFloatingApplicationLiveContentOverlayView.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBUISizeObservingViewDelegate.h>

@class SBFloatingApplicationLiveContentWindow, SBWindowSelfHostWrapper, SBUISizeObservingView, SBMedusaDecoratedDeviceApplicationSceneViewController, SBSceneViewStatusBarAssertion, SBFHomeGrabberSettings, FBDisplayLayoutElement, UIView, NSString;

@interface SBFloatingApplicationSceneLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView, SBDeviceApplicationSceneHandleObserver, SBUISizeObservingViewDelegate> {

	BOOL _wantsMinificationFilter;
	BOOL _liveContentRasterizationDisabled;
	BOOL _asynchronousRenderingTemporarilyDisabled;
	long long _rasterizationStyle;
	SBFloatingApplicationLiveContentWindow* _window;
	SBWindowSelfHostWrapper* _windowHostWrapper;
	SBUISizeObservingView* _sizeObservingView;
	SBMedusaDecoratedDeviceApplicationSceneViewController* _deviceApplicationSceneViewController;
	SBSceneViewStatusBarAssertion* _statusBarAssertion;
	SBFHomeGrabberSettings* _grabberSettings;
	FBDisplayLayoutElement* _displayLayoutElement;

}

@property (nonatomic,readonly) SBFloatingApplicationLiveContentWindow * window;                                                           //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) SBWindowSelfHostWrapper * windowHostWrapper;                                                               //@synthesize windowHostWrapper=_windowHostWrapper - In the implementation block
@property (nonatomic,readonly) SBUISizeObservingView * sizeObservingView;                                                                 //@synthesize sizeObservingView=_sizeObservingView - In the implementation block
@property (nonatomic,readonly) SBMedusaDecoratedDeviceApplicationSceneViewController * deviceApplicationSceneViewController;              //@synthesize deviceApplicationSceneViewController=_deviceApplicationSceneViewController - In the implementation block
@property (nonatomic,readonly) SBSceneViewStatusBarAssertion * statusBarAssertion;                                                        //@synthesize statusBarAssertion=_statusBarAssertion - In the implementation block
@property (nonatomic,readonly) SBFHomeGrabberSettings * grabberSettings;                                                                  //@synthesize grabberSettings=_grabberSettings - In the implementation block
@property (nonatomic,readonly) FBDisplayLayoutElement * displayLayoutElement;                                                             //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,readonly) long long rasterizationStyle;                                                                              //@synthesize rasterizationStyle=_rasterizationStyle - In the implementation block
@property (nonatomic,readonly) BOOL wantsMinificationFilter;                                                                              //@synthesize wantsMinificationFilter=_wantsMinificationFilter - In the implementation block
@property (nonatomic,readonly) BOOL liveContentRasterizationDisabled;                                                                     //@synthesize liveContentRasterizationDisabled=_liveContentRasterizationDisabled - In the implementation block
@property (nonatomic,readonly) BOOL asynchronousRenderingTemporarilyDisabled;                                                             //@synthesize asynchronousRenderingTemporarilyDisabled=_asynchronousRenderingTemporarilyDisabled - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBSceneViewStatusBarAssertion *)statusBarAssertion;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(id)contentViewController;
-(void)_updateLiveContentRasterization;
-(long long)rasterizationStyle;
-(BOOL)wantsMinificationFilter;
-(UIView *)contentOverlayView;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(SBFloatingApplicationLiveContentWindow *)window;
-(void)invalidate;
-(SBFHomeGrabberSettings *)grabberSettings;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)dealloc;
-(BOOL)asynchronousRenderingTemporarilyDisabled;
-(void)noteNeedsLayoutUpdateFor180DegreeRotation;
-(SBMedusaDecoratedDeviceApplicationSceneViewController *)deviceApplicationSceneViewController;
-(void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(CGRect)arg2 interfaceOrientation:(long long)arg3 ;
-(void)_updateContentWindowFrameFromView:(id)arg1 ;
-(SBWindowSelfHostWrapper *)windowHostWrapper;
-(SBUISizeObservingView *)sizeObservingView;
-(BOOL)liveContentRasterizationDisabled;
@end

