/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoUIServices.framework/ChronoUIServices
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FBSceneDelegate.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol UIScenePresenter, CHUISAvocadoHostViewControllerDelegate;
@class FBScene, NSMutableDictionary, FBApplicationUpdateScenesTransaction, UIImageView, UILabel, CHSScreenshotManager, CHSWidget, CHSWidgetMetrics, NSString;

@interface CHUISAvocadoHostViewController : UIViewController <FBSceneDelegate, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol, BSInvalidatable> {

	id<UIScenePresenter> _scenePresenter;
	FBScene* _scene;
	NSMutableDictionary* _touchDeliveryPolicyAssertions;
	FBApplicationUpdateScenesTransaction* _updateScenesTransaction;
	BOOL _invalidated;
	UIImageView* _snapshotImageView;
	UILabel* _snapshotDebugLabel;
	unsigned long long _signpostID;
	CHSScreenshotManager* _screenshotManager;
	BOOL _hasSentForegroundMessage;
	BOOL _isInViewDidDisappear;
	BOOL _visiblySettled;
	BOOL _avocadoViewShouldShareTouchesWithHost;
	BOOL _privateModeEnabled;
	BOOL _animationsDisabled;
	BOOL _visibleEntryShouldSnapshot;
	CHSWidget* _widget;
	CHSWidgetMetrics* _metrics;
	unsigned long long _style;
	unsigned long long _mode;
	NSString* _widgetConfigurationIdentifier;
	id<CHUISAvocadoHostViewControllerDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * avocadoIdentifier; 
@property (nonatomic,copy,readonly) NSString * avocadoKind; 
@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier; 
@property (nonatomic,readonly) long long sizeClass; 
@property (nonatomic,copy) CHSWidget * widget;                                                               //@synthesize widget=_widget - In the implementation block
@property (nonatomic,copy,readonly) CHSWidgetMetrics * metrics;                                              //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetConfigurationIdentifier;                                //@synthesize widgetConfigurationIdentifier=_widgetConfigurationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CHUISAvocadoHostViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisiblySettled,nonatomic) BOOL visiblySettled;                                    //@synthesize visiblySettled=_visiblySettled - In the implementation block
@property (assign,nonatomic) BOOL avocadoViewShouldShareTouchesWithHost;                                     //@synthesize avocadoViewShouldShareTouchesWithHost=_avocadoViewShouldShareTouchesWithHost - In the implementation block
@property (assign,getter=isPrivateModeEnabled,nonatomic) BOOL privateModeEnabled;                            //@synthesize privateModeEnabled=_privateModeEnabled - In the implementation block
@property (assign,getter=areAnimationsDisabled,nonatomic) BOOL animationsDisabled;                           //@synthesize animationsDisabled=_animationsDisabled - In the implementation block
@property (assign,getter=shouldVisibleEntrySnapshot,nonatomic) BOOL visibleEntryShouldSnapshot;              //@synthesize visibleEntryShouldSnapshot=_visibleEntryShouldSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_compatibilityMetrics;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(BOOL)isPrivateModeEnabled;
-(CHSWidgetMetrics *)metrics;
-(void)sceneContentStateDidChange:(id)arg1 ;
-(unsigned long long)mode;
-(void)sceneDidInvalidate:(id)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(CHSWidget *)widget;
-(id)sceneSnapshotView;
-(void)setAnimationsDisabled:(BOOL)arg1 ;
-(BOOL)areAnimationsDisabled;
-(id<CHUISAvocadoHostViewControllerDelegate>)delegate;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)avocadoIdentifier;
-(void)setMode:(unsigned long long)arg1 ;
-(BOOL)isVisiblySettled;
-(long long)sizeClass;
-(void)setDelegate:(id<CHUISAvocadoHostViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setWidget:(CHSWidget *)arg1 ;
-(id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3 style:(unsigned long long)arg4 privateModeEnabled:(BOOL)arg5 ;
-(void)setAvocadoViewShouldShareTouchesWithHost:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(void)invalidate;
-(id)_snapshotImage;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)screenshotManager;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(void)setVisiblySettled:(BOOL)arg1 ;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg1 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg1 ;
-(unsigned long long)style;
-(void)dealloc;
-(NSString *)widgetConfigurationIdentifier;
-(BOOL)shouldVisibleEntrySnapshot;
-(void)setVisibleEntryShouldSnapshot:(BOOL)arg1 ;
-(id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3 style:(unsigned long long)arg4 mode:(unsigned long long)arg5 privateModeEnabled:(BOOL)arg6 ;
-(void)_tearDownScene;
-(void)_updateSceneToForeground:(BOOL)arg1 ;
-(void)_updateActiveUI;
-(void)_updateTouchDeliveryPolicies;
-(void)_clearTouchDeliveryPolicies;
-(void)_createSnapshotView;
-(BOOL)avocadoViewShouldShareTouchesWithHost;
-(BOOL)_isAppearingOrAppeared;
-(void)_modifySnapshotViewForSceneReady;
-(void)_modifySnapshotViewForSceneInitialization;
-(id)initWithWidget:(id)arg1 metrics:(id)arg2 widgetConfigurationIdentifier:(id)arg3 ;
-(void)setScreenshotManager:(id)arg1 ;
-(void)prewarmContent;
-(id)_containingApplicationProxyForExtensionBundleIdentifier:(id)arg1 ;
-(NSString *)avocadoKind;
@end

