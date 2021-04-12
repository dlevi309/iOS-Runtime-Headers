/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class UISDisplayContext, NSDictionary, NSArray, _UIScreenFixedCoordinateSpace, FBSDisplayConfiguration, UITraitCollection, UISoftwareDimmingWindow, _UIDragManager, _UIInteractiveHighlightEnvironment, CARSessionStatus, _UIScreenBoundingPathUtilities, UIWindow, NSString, UIFocusSystem, UIScreenMode, UIView;

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
	double _nativePointsPerMillimeter;
	_UIScreenFixedCoordinateSpace* _fixedCoordinateSpace;
	id<_UIDisplayInfoProviding> _displayInfoProvider;
	FBSDisplayConfiguration* __displayConfiguration;
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
	SCD_Struct_UI62 _carPlayHumanPresenceStatus;
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
	_UIDragManager* _dragManager;
	_UIInteractiveHighlightEnvironment* _interactiveHighlightEnvironment;
	CARSessionStatus* _carSessionStatus;
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
@property (assign,setter=_setUIIBAlwaysProvidePeripheryInsets:,nonatomic) BOOL _UIIBAlwaysProvidePeripheryInsets;                                                      //@synthesize _UIIBAlwaysProvidePeripheryInsets=__UIIBAlwaysProvidePeripheryInsets - In the implementation block
@property (getter=_carSessionStatus,nonatomic,retain) CARSessionStatus * carSessionStatus;                                                                             //@synthesize carSessionStatus=_carSessionStatus - In the implementation block
@property (setter=_setBoundingPathUtilities:,getter=_boundingPathUtilities,nonatomic,retain) _UIScreenBoundingPathUtilities * boundingPathUtilities;                   //@synthesize boundingPathUtilities=_boundingPathUtilities - In the implementation block
@property (getter=_interactiveHighlightEnvironment,nonatomic,readonly) _UIInteractiveHighlightEnvironment * interactiveHighlightEnvironment;                           //@synthesize interactiveHighlightEnvironment=_interactiveHighlightEnvironment - In the implementation block
@property (getter=_dragManager,nonatomic,readonly) _UIDragManager * dragManager;                                                                                       //@synthesize dragManager=_dragManager - In the implementation block
@property (assign,setter=_setMainScreen:,getter=_isMainScreen,nonatomic) BOOL mainScreen;                                                                              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (getter=_focusSystem,nonatomic,readonly) UIFocusSystem * focusSystem; 
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
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
+(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
+(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
+(void)initialize;
+(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
+(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(BOOL)arg3 forceMain:(BOOL)arg4 ;
+(id)screens;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 ;
+(void)_FBSDisplayIdentityDisconnected:(id)arg1 ;
+(void)_enumerateScreensWithBlock:(/*^block*/id)arg1 ;
+(id)mainScreen;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 forceMain:(BOOL)arg3 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2 ;
+(id)_carScreen;
+(BOOL)_shouldDisableJail;
+(id)_screenForScene:(id)arg1 ;
+(id)_screenWithDisplayID:(id)arg1 ;
+(id)_screenWithIntegerDisplayID:(unsigned)arg1 ;
+(void)_prepareScreensForAppResume;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 ;
+(BOOL)_isProbablyBeingRecorded;
+(id)__displayConfigurationsIncludingMain:(BOOL)arg1 ;
+(id)_screenWithFBSDisplayIdentity:(id)arg1 ;
+(id)_mainScreenThreadSafeTraitCollection;
+(CGAffineTransform)transformToRotateScreen:(double)arg1 ;
+(CGAffineTransform)transformForScreenOriginRotation:(double)arg1 ;
+(id)_screenWithDisplayName:(id)arg1 ;
-(id)snapshot;
-(void)setCurrentMode:(UIScreenMode *)arg1 ;
-(id)_defaultTraitCollection;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(double)_latency;
-(CGRect)bounds;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(unsigned)_seed;
-(long long)gamut;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)_capabilities;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(UIScreenMode *)currentMode;
-(void)_invalidate;
-(long long)_interfaceOrientation;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(UITraitCollection *)traitCollection;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIView *)preferredFocusedView;
-(id)snapshotView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(void)setNeedsFocusUpdate;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(double)brightness;
-(id)_display;
-(CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1 ;
-(double)scale;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(void)_setUserInterfaceIdiom:(long long)arg1 ;
-(FBSDisplayConfiguration *)displayConfiguration;
-(BOOL)_isMainScreen;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)displayIdentity;
-(CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1 ;
-(void)_setCaptured:(BOOL)arg1 ;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 ;
-(double)_scale;
-(BOOL)_hasWindows;
-(id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(BOOL)arg2 ;
-(void)_connectScreen;
-(unsigned)_integerDisplayID;
-(void)_computeMetrics;
-(void)_setInitialDisplayContext:(id)arg1 ;
-(void)_disconnectScreen;
-(BOOL)_isExternal;
-(void)_beginObservingBacklightLevelNotifications;
-(double)calibratedLatency;
-(void)_accessibilityForceTouchEnabledChanged:(id)arg1 ;
-(void)_limitedUIDidChange:(id)arg1 ;
-(void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1 ;
-(BOOL)_supportsDragging;
-(void)_accessibilityTraitFlagsChanged:(id)arg1 ;
-(void)_setSoftwareDimmingWindow:(id)arg1 ;
-(void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1 ;
-(BOOL)isCaptured;
-(void)_clearCarPlayHumanPresenceState;
-(void)_updateAvailableDisplayModes;
-(void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_externalDeviceNightModeDidChange:(id)arg1 ;
-(void)_capturedStateUpdated:(BOOL)arg1 ;
-(void)_endObservingBacklightLevelNotifications;
-(BOOL)_isOverscanned;
-(UIEdgeInsets)_displayPeripheryInsets;
-(CGRect)_overrideReferenceBounds;
-(double)nativeScale;
-(id)_focusSystem;
-(CGRect)_mainSceneReferenceBounds;
-(BOOL)_UIIBAlwaysProvidePeripheryInsets;
-(void)_updateUserInterfaceIdiom;
-(UIScreen *)mirroredScreen;
-(long long)_imageOrientation;
-(long long)_forceTouchCapability;
-(void)_setCarPlayHumanPresenceInRange:(BOOL)arg1 ;
-(BOOL)_isCarScreen;
-(BOOL)_isForceTouchCapable;
-(id<UIFocusItem>)focusedItem;
-(id)_name;
-(void)_ensureComputedMainScreenDPI;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(double)_traitCollectionDisplayCornerRadius;
-(BOOL)_isCarInstrumentsScreen;
-(void)_setNeedsNonDeferredFocusUpdate;
-(BOOL)_isCarPlayNightModeEnabled;
-(void)_setDefaultTraitCollection:(id)arg1 ;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 ;
-(CGRect)nativeBounds;
-(UIView *)focusedView;
-(void)_willTransitionToTraitCollection:(id)arg1 ;
-(BOOL)_isMainScreenPointer;
-(void)_notifyTraitsChangedAndPropagateToAllWindows;
-(UIWindow*<UIFocusEnvironment>)_focusedWindow;
-(void)_setLastNotifiedTraitCollection:(id)arg1 ;
-(BOOL)_isUserInterfaceLimited:(unsigned long long)arg1 ;
-(UISoftwareDimmingWindow *)_softwareDimmingWindow;
-(float)_lastNotifiedBacklightLevel;
-(void)_setLastNotifiedBacklightLevel:(float)arg1 ;
-(BOOL)_supportsBrightness;
-(void)_postBrightnessDidChangeNotificationIfAppropriate;
-(void)_setScale:(double)arg1 ;
-(NSString *)description;
-(float)rawBrightnessForBacklightLevel:(float)arg1 ;
-(id)_lazySoftwareDimmingWindow;
-(CGRect)_nativeDisplayBounds;
-(double)_nativeScaleWithLevel:(unsigned long long)arg1 ;
-(CGRect)applicationFrame;
-(id)_preferredFocusedWindowScene;
-(id)_displayInfoProvider;
-(id)_boundingPathUtilities;
-(CGRect)_unjailedReferenceBoundsInPixels;
-(double)_touchRadiusScaleFactor;
-(int)bitsPerComponent;
-(void)setBitsPerComponent:(int)arg1 ;
-(void)_prepareForWindow;
-(void)setOverscanCompensation:(long long)arg1 ;
-(BOOL)_supportsCarPlayHumanPresence;
-(BOOL)_isCarPlayHumanPresenceInRange;
-(BOOL)_expectsSecureRendering;
-(double)_nativePointsPerMillimeter;
-(BOOL)_isValidInterfaceOrientation:(long long)arg1 ;
-(void)_resetUserInterfaceIdiom;
-(void)_setOverrideTraitCollection:(id)arg1 ;
-(void)_setUserInterfaceStyleIfNecessary:(long long)arg1 firstTimeOnly:(BOOL)arg2 ;
-(id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(void)_setCapability:(id)arg1 forKey:(id)arg2 ;
-(void)_setExternalDeviceShouldInputText:(BOOL)arg1 ;
-(BOOL)_isWorkspaceCapable;
-(long long)_workspaceCapableScreenType;
-(double)_nativeScale;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(BOOL)_isSoftKeyboardLimited;
-(CGPoint)_mainSceneOrigin;
-(id)_focusScrollManager;
-(BOOL)_areListsLimited;
-(id)_snapshotExcludingWindows:(id)arg1 withRect:(CGRect)arg2 ;
-(id)_focusMovementPerformer;
-(id)_focusSystemManager;
-(BOOL)_isFocusSystemLoaded;
-(void)setFocusEnabled:(BOOL)arg1 ;
-(BOOL)_supportsDeferredFocus;
-(id)_interactiveHighlightEnvironment;
-(void)_setPerformingSystemSnapshot:(BOOL)arg1 ;
-(BOOL)wantsSoftwareDimming;
-(void)setWantsSoftwareDimming:(BOOL)arg1 ;
-(void)_setBoundingPathUtilities:(id)arg1 ;
-(void)_setUIIBAlwaysProvidePeripheryInsets:(BOOL)arg1 ;
-(void)setCarSessionStatus:(CARSessionStatus *)arg1 ;
-(void)_setFocusedWindow:(id)arg1 ;
-(NSArray *)availableModes;
-(id)_capabilityForKey:(id)arg1 ;
-(id<UICoordinateSpace>)fixedCoordinateSpace;
-(id)_preferredFocusRegionCoordinateSpace;
-(id<UIFocusItemContainer>)focusItemContainer;
-(CGRect)_interfaceOrientedMainSceneBounds;
-(CGRect)_boundsForInterfaceOrientation:(long long)arg1 ;
-(int)screenType;
-(UIEdgeInsets)_peripheryInsets;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(BOOL)_wantsWideContentMargins;
-(id)_fallbackTraitCollection;
-(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)supportsFocus;
-(BOOL)_areMusicListsLimited;
-(BOOL)_isRotatable;
-(id)_lastNotifiedTraitCollection;
-(id)_overrideTraitCollection;
-(id)_displayID;
-(id)fbsDisplay;
-(double)_maximumSupportedScale;
-(void)_computeMetrics:(BOOL)arg1 ;
-(void)_accessibilityBoldTextChanged:(id)arg1 ;
-(void)_setInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)_artworkSubtype;
-(UIEdgeInsets)overscanCompensationInsets;
-(UIScreenMode *)preferredMode;
-(void)updateFocusIfNeeded;
-(BOOL)_isPerformingSystemSnapshot;
-(id)_dragManager;
-(double)_displayCornerRadius;
-(double)_rotation;
-(BOOL)_isRightHandDrive;
-(void)_updateDisplayConfiguration:(id)arg1 ;
-(CGRect)_applicationFrame;
-(BOOL)_hasStatusBar;
-(double)_refreshRate;
-(UIWindow *)_preferredFocusedWindow;
-(CGRect)_unjailedReferenceBounds;
-(id)_focusMapContainer;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)maximumFramesPerSecond;
-(void)_setMainScreen:(BOOL)arg1 ;
-(long long)_userInterfaceIdiom;
-(void)setBrightness:(double)arg1 ;
-(id)_carSessionStatus;
-(CGRect)_mainSceneFrame;
-(long long)_effectiveUserInterfaceStyle;
-(void)_updateCapabilities;
-(double)_pointsPerInch;
-(long long)overscanCompensation;
-(void)_updateTraits;
-(void)dealloc;
-(CGRect)_referenceBounds;
@end

