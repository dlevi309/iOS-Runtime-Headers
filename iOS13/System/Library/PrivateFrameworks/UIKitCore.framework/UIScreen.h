/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFallbackEnvironment.h>
#import <UIKit/UICoordinateSpace.h>
#import <UIKitCore/_UITraitEnvironmentInternal.h>
#import <UIKitCore/_UIFocusEnvironmentInternal.h>
#import <UIKitCore/_UIFocusRegionContainer.h>
#import <UIKit/UIFocusItemContainer.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate.h>
#import <UIKit/UITraitEnvironment.h>

@protocol _UIDisplayInfoProviding, UIFocusEnvironment;
@class UISDisplayContext, NSDictionary, NSArray, _UIScreenFixedCoordinateSpace, FBSDisplayConfiguration, CARSessionStatus, UITraitCollection, UISoftwareDimmingWindow, _UIFocusScrollManager, _UIFocusMovementPerformer, _UIScreenFocusSystemManager, UIFocusSystem, _UIDragManager, _UIInteractiveHighlightEnvironment, _UIScreenBoundingPathUtilities, UIWindow, NSString, UIScreenMode, UIView;

@interface UIScreen : NSObject <_UIFallbackEnvironment, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment> {

	CGRect _unjailedReferenceBounds;
	CGRect _referenceBounds;
	long long _interfaceOrientation;
	double _scale;
	long long _gamut;
	long long _userInterfaceIdiom;
	UISDisplayContext* _initialDisplayContext;
	NSDictionary* _capabilities;
	NSArray* _availableDisplayModes;
	double _pointsPerInch;
	_UIScreenFixedCoordinateSpace* _fixedCoordinateSpace;
	id<_UIDisplayInfoProviding> _displayInfoProvider;
	FBSDisplayConfiguration* __displayConfiguration;
	CARSessionStatus* _currentCarSessionStatus;
	long long _lastUpdatedCanvasUserInterfaceStyle;
	struct {
		unsigned bitsPerComponent : 4;
		unsigned initialized : 1;
		unsigned connected : 1;
		unsigned hasSetOverscanCompensation : 1;
		unsigned overscanCompensation : 2;
		unsigned wantsWideContentMargins : 1;
		unsigned queriedDeviceContentMargins : 1;
		unsigned hasCalculatedPointsPerInch : 1;
		unsigned rightHandDrive : 1;
		unsigned carPlayNightModeEnabled : 1;
	}  _screenFlags;
	SCD_Struct_UI78 _carPlayHumanPresenceStatus;
	BOOL _performingSystemSnapshot;
	BOOL _wantsSoftwareDimming;
	BOOL _captured;
	BOOL __UIIBAlwaysProvidePeripheryInsets;
	BOOL _mainScreen;
	float _lastNotifiedBacklightLevel;
	UITraitCollection* _defaultTraitCollection;
	UITraitCollection* _overrideTraitCollection;
	UITraitCollection* _lastNotifiedTraitCollection;
	UISoftwareDimmingWindow* _softwareDimmingWindow;
	_UIFocusScrollManager* _focusScrollManager;
	_UIFocusMovementPerformer* _focusMovementPerformer;
	_UIScreenFocusSystemManager* _focusSystemManager;
	UIFocusSystem* _focusSystem;
	_UIDragManager* _dragManager;
	_UIInteractiveHighlightEnvironment* _interactiveHighlightEnvironment;
	_UIScreenBoundingPathUtilities* _boundingPathUtilities;
	UIWindow*<UIFocusEnvironment> __focusedWindow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setSoftwareDimmingWindow:,nonatomic,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;                                                       //@synthesize softwareDimmingWindow=_softwareDimmingWindow - In the implementation block
@property (assign,setter=_setLastNotifiedBacklightLevel:,nonatomic) float _lastNotifiedBacklightLevel;                                                                 //@synthesize lastNotifiedBacklightLevel=_lastNotifiedBacklightLevel - In the implementation block
@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,setter=_setCaptured:,getter=isCaptured,nonatomic) BOOL captured;                                                                                     //@synthesize captured=_captured - In the implementation block
@property (setter=_setDefaultTraitCollection:,getter=_defaultTraitCollection,nonatomic,retain) UITraitCollection * defaultTraitCollection;                             //@synthesize defaultTraitCollection=_defaultTraitCollection - In the implementation block
@property (setter=_setOverrideTraitCollection:,getter=_overrideTraitCollection,nonatomic,retain) UITraitCollection * overrideTraitCollection;                          //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (setter=_setLastNotifiedTraitCollection:,getter=_lastNotifiedTraitCollection,nonatomic,retain) UITraitCollection * lastNotifiedTraitCollection;              //@synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection - In the implementation block
@property (getter=_focusSystem,nonatomic,readonly) UIFocusSystem * focusSystem;                                                                                        //@synthesize focusSystem=_focusSystem - In the implementation block
@property (assign,setter=_setUIIBAlwaysProvidePeripheryInsets:,nonatomic) BOOL _UIIBAlwaysProvidePeripheryInsets;                                                      //@synthesize _UIIBAlwaysProvidePeripheryInsets=__UIIBAlwaysProvidePeripheryInsets - In the implementation block
@property (setter=_setBoundingPathUtilities:,getter=_boundingPathUtilities,nonatomic,retain) _UIScreenBoundingPathUtilities * boundingPathUtilities;                   //@synthesize boundingPathUtilities=_boundingPathUtilities - In the implementation block
@property (getter=_interactiveHighlightEnvironment,nonatomic,readonly) _UIInteractiveHighlightEnvironment * interactiveHighlightEnvironment;                           //@synthesize interactiveHighlightEnvironment=_interactiveHighlightEnvironment - In the implementation block
@property (getter=_dragManager,nonatomic,readonly) _UIDragManager * dragManager;                                                                                       //@synthesize dragManager=_dragManager - In the implementation block
@property (assign,setter=_setMainScreen:,getter=_isMainScreen,nonatomic) BOOL mainScreen;                                                                              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (getter=_focusSystemManager,nonatomic,readonly) _UIScreenFocusSystemManager * focusSystemManager;                                                            //@synthesize focusSystemManager=_focusSystemManager - In the implementation block
@property (getter=_focusScrollManager,nonatomic,readonly) _UIFocusScrollManager * focusScrollManager;                                                                  //@synthesize focusScrollManager=_focusScrollManager - In the implementation block
@property (getter=_focusMovementPerformer,nonatomic,readonly) _UIFocusMovementPerformer * focusMovementPerformer;                                                      //@synthesize focusMovementPerformer=_focusMovementPerformer - In the implementation block
@property (assign,setter=_setFocusedWindow:,nonatomic) UIWindow*<UIFocusEnvironment> _focusedWindow;                                                                   //@synthesize _focusedWindow=__focusedWindow - In the implementation block
@property (nonatomic,readonly) UIWindow * _preferredFocusedWindow; 
@property (assign,setter=_setPerformingSystemSnapshot:,getter=_isPerformingSystemSnapshot,nonatomic) BOOL _performingSystemSnapshot;                                   //@synthesize performingSystemSnapshot=_performingSystemSnapshot - In the implementation block
@property (nonatomic,readonly) CGRect _referenceBounds;                                                                                                                //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double scale;                                                                                                                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableModes; 
@property (nonatomic,readonly) UIScreenMode * preferredMode; 
@property (nonatomic,retain) UIScreenMode * currentMode; 
@property (assign,nonatomic) long long overscanCompensation; 
@property (nonatomic,readonly) UIEdgeInsets overscanCompensationInsets; 
@property (nonatomic,readonly) UIScreen * mirroredScreen; 
@property (assign,nonatomic) double brightness; 
@property (assign,nonatomic) BOOL wantsSoftwareDimming;                                                                                                                //@synthesize wantsSoftwareDimming=_wantsSoftwareDimming - In the implementation block
@property (readonly) id<UICoordinateSpace> coordinateSpace; 
@property (readonly) id<UICoordinateSpace> fixedCoordinateSpace; 
@property (nonatomic,readonly) CGRect nativeBounds; 
@property (nonatomic,readonly) double nativeScale; 
@property (readonly) long long maximumFramesPerSecond; 
@property (nonatomic,readonly) double calibratedLatency; 
@property (nonatomic,__weak,readonly) id<UIFocusItem> focusedItem; 
@property (nonatomic,__weak,readonly) UIView * focusedView; 
@property (nonatomic,readonly) BOOL supportsFocus; 
@property (nonatomic,readonly) CGRect applicationFrame; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
+(void)initialize;
+(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
+(id)mainScreen;
+(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
+(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
+(id)_carScreen;
+(id)_screenWithDisplayName:(id)arg1 ;
+(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
+(id)_screenWithFBSDisplayIdentity:(id)arg1 ;
+(void)_prepareCarScreensForResume;
+(CGAffineTransform)transformToRotateScreen:(double)arg1 ;
+(CGAffineTransform)transformForScreenOriginRotation:(double)arg1 ;
+(id)screens;
+(void)_enumerateScreensWithBlock:(/*^block*/id)arg1 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 ;
+(void)_FBSDisplayIdentityDisconnected:(id)arg1 ;
+(id)_mainScreenThreadSafeTraitCollection;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(BOOL)arg3 forceMain:(BOOL)arg4 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 forceMain:(BOOL)arg3 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2 ;
+(BOOL)_shouldDisableJail;
+(id)_screenWithDisplayID:(id)arg1 ;
+(id)_screenWithIntegerDisplayID:(unsigned)arg1 ;
+(void)_prepareScreensForAppResume;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 ;
+(id)_screenForScene:(id)arg1 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 ;
+(BOOL)_isProbablyBeingRecorded;
+(id)__displayConfigurationsIncludingMain:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)_invalidate;
-(id)_name;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIScreenMode *)currentMode;
-(double)scale;
-(double)_scale;
-(double)_latency;
-(CGRect)bounds;
-(long long)_imageOrientation;
-(double)brightness;
-(void)setBrightness:(double)arg1 ;
-(unsigned)_seed;
-(id)snapshot;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIWindow *)_preferredFocusedWindow;
-(BOOL)_isCarScreen;
-(double)_rotation;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(UIView *)preferredFocusedView;
-(id<UICoordinateSpace>)coordinateSpace;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(void)_setNeedsNonDeferredFocusUpdate;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id<UIFocusItem>)focusedItem;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(BOOL)supportsFocus;
-(CGRect)_referenceBounds;
-(CGRect)_boundsForInterfaceOrientation:(long long)arg1 ;
-(void)_computeMetrics:(BOOL)arg1 ;
-(void)_setInterfaceOrientation:(long long)arg1 ;
-(id)_fallbackTraitCollection;
-(BOOL)_isMainScreen;
-(CGRect)_applicationFrame;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(long long)maximumFramesPerSecond;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(long long)_userInterfaceIdiom;
-(BOOL)_wantsWideContentMargins;
-(id)_displayInfoProvider;
-(CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1 ;
-(UIEdgeInsets)overscanCompensationInsets;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(UIEdgeInsets)_peripheryInsets;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 ;
-(long long)_interfaceOrientation;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)displayIdentity;
-(BOOL)_isRotatable;
-(BOOL)_isPerformingSystemSnapshot;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)_updateDisplayConfiguration:(id)arg1 ;
-(void)_setUserInterfaceStyleIfNecessary:(long long)arg1 firstTimeOnly:(BOOL)arg2 ;
-(CGRect)_unjailedReferenceBounds;
-(CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)_artworkSubtype;
-(id)_focusScrollManager;
-(UIView *)focusedView;
-(id)_capabilityForKey:(id)arg1 ;
-(id<UICoordinateSpace>)fixedCoordinateSpace;
-(id)_defaultTraitCollection;
-(id)_focusMapContainer;
-(id)_lastNotifiedTraitCollection;
-(id)_overrideTraitCollection;
-(double)_displayCornerRadius;
-(BOOL)_isRightHandDrive;
-(CGRect)_interfaceOrientedMainSceneBounds;
-(BOOL)_areListsLimited;
-(BOOL)_areMusicListsLimited;
-(BOOL)_hasStatusBar;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ;
-(id)snapshotView;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(id)_dragManager;
-(id)_focusMovementPerformer;
-(id)_focusSystem;
-(void)_ensureFocusSystemIsLoaded;
-(void)setFocusEnabled:(BOOL)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(long long)_effectiveUserInterfaceStyle;
-(double)_refreshRate;
-(double)_maximumSupportedScale;
-(double)_pointsPerInch;
-(id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(BOOL)arg2 ;
-(void)_connectScreen;
-(id)_displayID;
-(unsigned)_integerDisplayID;
-(void)_computeMetrics;
-(BOOL)_supportsDeferredFocus;
-(void)_setInitialDisplayContext:(id)arg1 ;
-(void)_disconnectScreen;
-(void)_beginObservingBacklightLevelNotifications;
-(void)_accessibilityForceTouchEnabledChanged:(id)arg1 ;
-(void)_accessibilityBoldTextChanged:(id)arg1 ;
-(void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1 ;
-(void)_accessibilityTraitFlagsChanged:(id)arg1 ;
-(void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1 ;
-(void)_clearCarPlayHumanPresenceState;
-(void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
-(void)_externalDeviceNightModeDidChange:(id)arg1 ;
-(void)_limitedUIDidChange:(id)arg1 ;
-(void)_endObservingBacklightLevelNotifications;
-(void)_setSoftwareDimmingWindow:(id)arg1 ;
-(BOOL)isCaptured;
-(void)_setCaptured:(BOOL)arg1 ;
-(NSArray *)availableModes;
-(long long)overscanCompensation;
-(void)_updateAvailableDisplayModes;
-(void)_updateTraits;
-(BOOL)_hasWindows;
-(UIEdgeInsets)_displayPeripheryInsets;
-(CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(BOOL)_isExternal;
-(CGRect)_overrideReferenceBounds;
-(CGRect)_mainSceneReferenceBounds;
-(BOOL)_UIIBAlwaysProvidePeripheryInsets;
-(double)calibratedLatency;
-(UIScreenMode *)preferredMode;
-(BOOL)_isOverscanned;
-(void)_setCarPlayHumanPresenceInRange:(BOOL)arg1 ;
-(void)_updateUserInterfaceIdiom;
-(void)_updateCapabilities;
-(void)_setUserInterfaceIdiom:(long long)arg1 ;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(long long)_forceTouchCapability;
-(double)_traitCollectionDisplayCornerRadius;
-(BOOL)_isCarPlayNightModeEnabled;
-(BOOL)_isCarInstrumentsScreen;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 ;
-(void)_setDefaultTraitCollection:(id)arg1 ;
-(void)_willTransitionToTraitCollection:(id)arg1 ;
-(void)_notifyTraitsChangedAndPropagateToAllWindows;
-(void)_setLastNotifiedTraitCollection:(id)arg1 ;
-(id)_capabilities;
-(BOOL)_isForceTouchCapable;
-(double)nativeScale;
-(BOOL)_isMainScreenPointer;
-(BOOL)_isUserInterfaceLimited:(unsigned long long)arg1 ;
-(UISoftwareDimmingWindow *)_softwareDimmingWindow;
-(float)_lastNotifiedBacklightLevel;
-(void)_setLastNotifiedBacklightLevel:(float)arg1 ;
-(void)_postBrightnessDidChangeNotificationIfAppropriate;
-(BOOL)_supportsBrightness;
-(float)rawBrightnessForBacklightLevel:(float)arg1 ;
-(id)_lazySoftwareDimmingWindow;
-(CGRect)_nativeDisplayBounds;
-(double)_nativeScaleWithLevel:(unsigned long long)arg1 ;
-(id)_focusSystemManager;
-(BOOL)_supportsDragging;
-(CGRect)_unjailedReferenceBoundsInPixels;
-(id)_boundingPathUtilities;
-(CGRect)applicationFrame;
-(double)_touchRadiusScaleFactor;
-(UIScreen *)mirroredScreen;
-(int)bitsPerComponent;
-(void)setBitsPerComponent:(int)arg1 ;
-(void)setCurrentMode:(UIScreenMode *)arg1 ;
-(int)screenType;
-(void)setOverscanCompensation:(long long)arg1 ;
-(BOOL)_supportsCarPlayHumanPresence;
-(BOOL)_isCarPlayHumanPresenceInRange;
-(BOOL)_expectsSecureRendering;
-(void)_prepareForWindow;
-(void)_setScale:(double)arg1 ;
-(long long)gamut;
-(BOOL)_isValidInterfaceOrientation:(long long)arg1 ;
-(void)_resetUserInterfaceIdiom;
-(id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(void)_setOverrideTraitCollection:(id)arg1 ;
-(void)_setCapability:(id)arg1 forKey:(id)arg2 ;
-(void)_setExternalDeviceShouldInputText:(BOOL)arg1 ;
-(id)fbsDisplay;
-(BOOL)_isWorkspaceCapable;
-(long long)_workspaceCapableScreenType;
-(BOOL)_isSoftKeyboardLimited;
-(id)_display;
-(CGRect)_mainSceneFrame;
-(CGPoint)_mainSceneOrigin;
-(id)_snapshotExcludingWindows:(id)arg1 withRect:(CGRect)arg2 ;
-(CGRect)nativeBounds;
-(double)_nativeScale;
-(BOOL)_isFocusSystemLoaded;
-(id)_interactiveHighlightEnvironment;
-(void)_setPerformingSystemSnapshot:(BOOL)arg1 ;
-(BOOL)wantsSoftwareDimming;
-(void)setWantsSoftwareDimming:(BOOL)arg1 ;
-(void)_setUIIBAlwaysProvidePeripheryInsets:(BOOL)arg1 ;
-(void)_setBoundingPathUtilities:(id)arg1 ;
-(void)_setMainScreen:(BOOL)arg1 ;
-(UIWindow*<UIFocusEnvironment>)_focusedWindow;
-(void)_setFocusedWindow:(id)arg1 ;
@end

