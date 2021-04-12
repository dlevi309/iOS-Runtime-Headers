/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationSceneView.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneClassicAccessoryViewDelegate.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@protocol UISceneLayerTarget, UIScenePresentation;
@class SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, SBApplicationSceneViewStatusBarDescriptor, _UIDirectionalRotationView, SBHomeGrabberRotationView, SBFHomeGrabberSettings, SBDeviceApplicationSceneClassicAccessoryView, UIView, NSString, SBDeviceApplicationSceneHandle, SBHomeGrabberView;

@interface SBDeviceApplicationSceneView : SBApplicationSceneView <SBDeviceApplicationSceneClassicAccessoryViewDelegate, SBAppSwitcherPageContentView> {

	id<UISceneLayerTarget> _statusBarLayerTarget;
	SBSceneHandleBlockObserver* _sceneHandleObserver;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsInspector;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInspector;
	SBApplicationSceneViewStatusBarDescriptor* _statusBarDescriptor;
	_UIDirectionalRotationView* _hostCounterRotationView;
	SBHomeGrabberRotationView* _grabberRotationView;
	SBFHomeGrabberSettings* _grabberSettings;
	long long _lastStableOverlayOrientation;
	SBDeviceApplicationSceneClassicAccessoryView* _classicAccessoryView;
	UIView* _classicWrapperView;
	UIView* _classicPositioningView;
	UIView*<UIScenePresentation> _wrappedHostView;
	BOOL _active;
	BOOL _visible;
	BOOL _counterRotationViewTransformUpdatesPaused;
	double _statusBarAlpha;
	UIView* _appOverlayView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL counterRotationViewTransformUpdatesPaused;                               //@synthesize counterRotationViewTransformUpdatesPaused=_counterRotationViewTransformUpdatesPaused - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,retain) UIView*<SBApplicationSceneBackgroundView> backgroundView; 
@property (nonatomic,retain) UIView * appOverlayView;                                                      //@synthesize appOverlayView=_appOverlayView - In the implementation block
@property (assign,nonatomic) BOOL forcesStatusBarHidden; 
@property (nonatomic,retain) SBApplicationSceneViewStatusBarDescriptor * statusBarDescriptor;              //@synthesize statusBarDescriptor=_statusBarDescriptor - In the implementation block
@property (assign,nonatomic) double statusBarAlpha;                                                        //@synthesize statusBarAlpha=_statusBarAlpha - In the implementation block
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(void)setBackgroundView:(UIView*<SBApplicationSceneBackgroundView>)arg1 ;
-(double)statusBarAlpha;
-(void)setStatusBarAlpha:(double)arg1 ;
-(void)_refresh;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4 ;
-(void)_configureSceneSnapshotContext:(id)arg1 ;
-(void)_layoutLiveHostView:(id)arg1 ;
-(void)_invalidateSceneLiveHostView:(id)arg1 ;
-(id)_transitionViewForHostView;
-(void)_configureSceneLiveHostView:(id)arg1 ;
-(BOOL)_representsTranslucentContent;
-(void)_updateReferenceSize:(CGSize)arg1 andOrientation:(long long)arg2 ;
-(BOOL)contentRequiresGroupOpacity;
-(SBHomeGrabberView *)homeGrabberView;
-(void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg1 ;
-(long long)_wallpaperStyle;
-(id)deviceApplicationSceneView;
-(void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)applicationSceneCompatibilityModeAnimatingChangeTo:(long long)arg1 ;
-(void)setCounterRotationViewTransformUpdatesPaused:(BOOL)arg1 ;
-(void)tearDownHomeGrabberView;
-(void)setForcesStatusBarHidden:(BOOL)arg1 ;
-(void)setAppOverlayView:(UIView *)arg1 ;
-(void)_updateStatusBarVisibilityForHostView;
-(BOOL)_sceneDrivesOwnRotation;
-(void)_createHostCounterRotationViewIfNecessary;
-(void)_tearDownHostCounterRotationViewIfNecessary;
-(SBApplicationSceneViewStatusBarDescriptor *)statusBarDescriptor;
-(BOOL)forcesStatusBarHidden;
-(void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
-(void)_maybeStartTrackingRotationForOverlay;
-(void)setStatusBarDescriptor:(SBApplicationSceneViewStatusBarDescriptor *)arg1 ;
-(UIView *)appOverlayView;
-(BOOL)counterRotationViewTransformUpdatesPaused;
-(void)createClassicAccesoryViewIfNecessary;
-(void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg1 ;
-(CGRect)_effectiveSceneBounds;
-(void)teardownClassicAccesoryViewIfNecessary;
@end

