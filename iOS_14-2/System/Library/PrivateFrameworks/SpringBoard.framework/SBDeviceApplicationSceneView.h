/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationSceneView.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneClassicAccessoryViewDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBAppSwitcherPageContentView.h>

@protocol UISceneLayerTarget, UIScenePresentation;
@class SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, SBApplicationSceneViewStatusBarDescriptor, _UIDirectionalRotationView, SBHomeGrabberRotationView, SBFHomeGrabberSettings, NSMutableDictionary, SBDeviceApplicationSceneClassicAccessoryView, UIView, NSMutableArray, NSString, SBDeviceApplicationSceneHandle, SBHomeGrabberView;

@interface SBDeviceApplicationSceneView : SBApplicationSceneView <SBDeviceApplicationSceneClassicAccessoryViewDelegate, PTSettingsKeyObserver, SBAppSwitcherPageContentView> {

	id<UISceneLayerTarget> _statusBarLayerTarget;
	SBSceneHandleBlockObserver* _sceneHandleObserver;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsInspector;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInspector;
	SBApplicationSceneViewStatusBarDescriptor* _statusBarDescriptor;
	_UIDirectionalRotationView* _hostCounterRotationView;
	SBHomeGrabberRotationView* _grabberRotationView;
	SBFHomeGrabberSettings* _grabberSettings;
	BOOL _grabberLivesInCounterRotationView;
	NSMutableDictionary* _overlayViewsByPriority;
	long long _lastStableOverlayOrientation;
	BOOL _waitingForBoundsUpdateDuringRotation;
	long long _overlayOrientationAtStartOfRotation;
	SBDeviceApplicationSceneClassicAccessoryView* _classicAccessoryView;
	UIView* _classicWrapperView;
	UIView* _classicPositioningView;
	UIView*<UIScenePresentation> _wrappedHostView;
	NSMutableArray* _multitaskingExclusionRectDebugViews;
	BOOL _active;
	BOOL _visible;
	BOOL _counterRotationViewTransformUpdatesPaused;
	double _statusBarAlpha;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL counterRotationViewTransformUpdatesPaused;                               //@synthesize counterRotationViewTransformUpdatesPaused=_counterRotationViewTransformUpdatesPaused - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,retain) UIView*<SBApplicationSceneBackgroundView> backgroundView; 
@property (assign,nonatomic) BOOL forcesStatusBarHidden; 
@property (nonatomic,retain) SBApplicationSceneViewStatusBarDescriptor * statusBarDescriptor;              //@synthesize statusBarDescriptor=_statusBarDescriptor - In the implementation block
@property (assign,nonatomic) double statusBarAlpha;                                                        //@synthesize statusBarAlpha=_statusBarAlpha - In the implementation block
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) BOOL contentRequiresGroupOpacity; 
@property (assign,getter=isActive,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                                //@synthesize visible=_visible - In the implementation block
-(void)_invalidateSceneLiveHostView:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)createClassicAccesoryViewIfNecessary;
-(void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
-(void)_updateDragAndDropExclusionDebugViewsIfNecessary;
-(void)setBackgroundView:(UIView*<SBApplicationSceneBackgroundView>)arg1 ;
-(void)_tearDownHostCounterRotationViewIfNecessary;
-(void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(BOOL)contentRequiresGroupOpacity;
-(void)_layoutLiveHostView:(id)arg1 ;
-(void)setStatusBarAlpha:(double)arg1 ;
-(BOOL)isActive;
-(void)setVisible:(BOOL)arg1 ;
-(void)teardownClassicAccesoryViewIfNecessary;
-(void)_updateStatusBarVisibilityForHostView;
-(void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg1 ;
-(void)setCounterRotationViewTransformUpdatesPaused:(BOOL)arg1 ;
-(void)_updateReferenceSize:(CGSize)arg1 andOrientation:(long long)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(double)statusBarAlpha;
-(double)cornerRadius;
-(long long)_wallpaperStyle;
-(void)tearDownHomeGrabberView;
-(void)_refresh;
-(void)setStatusBarDescriptor:(SBApplicationSceneViewStatusBarDescriptor *)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg1 ;
-(BOOL)forcesStatusBarHidden;
-(BOOL)isVisible;
-(BOOL)_representsTranslucentContent;
-(void)_configureSceneLiveHostView:(id)arg1 ;
-(void)applicationSceneCompatibilityModeAnimatingChangeTo:(long long)arg1 ;
-(void)removeOverlayView:(id)arg1 withPriority:(long long)arg2 ;
-(void)_createHostCounterRotationViewIfNecessary;
-(BOOL)counterRotationViewTransformUpdatesPaused;
-(SBApplicationSceneViewStatusBarDescriptor *)statusBarDescriptor;
-(CGRect)_effectiveSceneBounds;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_transitionViewForHostView;
-(void)invalidate;
-(BOOL)_sceneDrivesOwnRotation;
-(SBHomeGrabberView *)homeGrabberView;
-(id)deviceApplicationSceneView;
-(void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)setForcesStatusBarHidden:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_configureSceneSnapshotContext:(id)arg1 ;
-(void)addOverlayView:(id)arg1 withPriority:(long long)arg2 ;
-(void)_maybeStartTrackingRotationForOverlay;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4 ;
-(void)dealloc;
@end

