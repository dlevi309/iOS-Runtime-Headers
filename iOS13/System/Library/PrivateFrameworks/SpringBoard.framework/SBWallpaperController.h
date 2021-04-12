/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBFWallpaperViewInternalObserver.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFWallpaperConfigurationManagerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBWallpaperServerDelegate.h>
#import <libobjc.A.dylib/SBFWallpaperViewDelegate.h>
#import <libobjc.A.dylib/SBWallpaperWindowDelegate.h>
#import <UIKit/UIWindowDelegate.h>
#import <libobjc.A.dylib/CSWallpaperOverlayHosting.h>

@protocol SBUIWallpaperOverlay, BSInvalidatable;
@class UIWindow, UIView, SBFWallpaperView, NSHashTable, NSMutableSet, SBFWallpaperConfigurationManager, NSMapTable, PTSingleTestRecipe, UIScreen, NSString, SBWallpaperStyleInfo, SBWallpaperAggdLogger, SBRootSettings, UITraitCollection, UIGestureRecognizer;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBFWallpaperConfigurationManagerDelegate, BSDescriptionProviding, SBWallpaperServerDelegate, SBFWallpaperViewDelegate, SBWallpaperWindowDelegate, UIWindowDelegate, CSWallpaperOverlayHosting> {

	UIWindow* _wallpaperWindow;
	UIView* _wallpaperContainerView;
	UIView* _wallpaperOverlayContainerView;
	long long _orientation;
	SBFWallpaperView* _lockscreenWallpaperView;
	SBFWallpaperView* _homescreenWallpaperView;
	SBFWallpaperView* _sharedWallpaperView;
	NSHashTable* _lockscreenObservers;
	NSHashTable* _homescreenObservers;
	NSHashTable* _suspendColorSamplingAssertions;
	NSHashTable* _suspendWallpaperAnimationAssertions;
	NSHashTable* _requireWallpaperAssertions;
	NSMutableSet* _hideHomescreenWallpaperReasons;
	NSMutableSet* _hideLockscreenWallpaperReasons;
	long long _displayedVariant;
	double _lockscreenOnlyWallpaperAlpha;
	NSHashTable* _lockscreenBlurViews;
	NSHashTable* _homescreenBlurViews;
	long long _disallowRasterizationBlockCount;
	NSMutableSet* _disallowRasterizationReasonsHomeVariant;
	NSMutableSet* _disallowRasterizationReasonsLockVariant;
	NSMutableSet* _homescreenStyleChangeDelayReasons;
	SBFWallpaperConfigurationManager* _wallpaperConfigurationManager;
	UIView*<SBUIWallpaperOverlay> _wallpaperOverlay;
	NSMutableSet* _activeOrientationSources;
	NSMapTable* _orientationProviders;
	PTSingleTestRecipe* _migrationTestRecipe;
	PTSingleTestRecipe* _reloadTestRecipe;
	UIScreen* _screen;
	NSString* _cachingIdentifier;
	double _homescreenWallpaperScale;
	double _lockscreenWallpaperScale;
	SBWallpaperStyleInfo* _homescreenStyleInfo;
	SBWallpaperStyleInfo* _lockscreenStyleInfo;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;
	SBRootSettings* _rootSettings;
	UITraitCollection* _fakeBlurViewOverrideTraitCollection;
	id<BSInvalidatable> _batterySaverAnimationAssertion;
	id<BSInvalidatable> _wallpaperStyleAnimationAssertion;

}

@property (nonatomic,retain) SBFWallpaperView * lockscreenWallpaperView;                                      //@synthesize lockscreenWallpaperView=_lockscreenWallpaperView - In the implementation block
@property (nonatomic,retain) SBFWallpaperView * homescreenWallpaperView;                                      //@synthesize homescreenWallpaperView=_homescreenWallpaperView - In the implementation block
@property (nonatomic,retain) SBFWallpaperView * sharedWallpaperView;                                          //@synthesize sharedWallpaperView=_sharedWallpaperView - In the implementation block
@property (nonatomic,readonly) SBWallpaperStyleInfo * homescreenStyleInfo;                                    //@synthesize homescreenStyleInfo=_homescreenStyleInfo - In the implementation block
@property (nonatomic,readonly) SBWallpaperStyleInfo * lockscreenStyleInfo;                                    //@synthesize lockscreenStyleInfo=_lockscreenStyleInfo - In the implementation block
@property (nonatomic,retain) SBWallpaperAggdLogger * wallpaperAggdLogger;                                     //@synthesize wallpaperAggdLogger=_wallpaperAggdLogger - In the implementation block
@property (nonatomic,retain) SBRootSettings * rootSettings;                                                   //@synthesize rootSettings=_rootSettings - In the implementation block
@property (getter=_WallpaperOrientationNotForYou,nonatomic,readonly) long long _orientation;                  //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UITraitCollection * fakeBlurViewOverrideTraitCollection;                         //@synthesize fakeBlurViewOverrideTraitCollection=_fakeBlurViewOverrideTraitCollection - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> batterySaverAnimationAssertion;                              //@synthesize batterySaverAnimationAssertion=_batterySaverAnimationAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperStyleAnimationAssertion;                            //@synthesize wallpaperStyleAnimationAssertion=_wallpaperStyleAnimationAssertion - In the implementation block
@property (assign,nonatomic) long long variant; 
@property (nonatomic,readonly) UIScreen * screen;                                                             //@synthesize screen=_screen - In the implementation block
@property (nonatomic,copy,readonly) NSString * cachingIdentifier;                                             //@synthesize cachingIdentifier=_cachingIdentifier - In the implementation block
@property (assign,nonatomic) double windowLevel; 
@property (assign,nonatomic) double homescreenWallpaperScale;                                                 //@synthesize homescreenWallpaperScale=_homescreenWallpaperScale - In the implementation block
@property (assign,nonatomic) double lockscreenWallpaperScale;                                                 //@synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale - In the implementation block
@property (nonatomic,readonly) id<SBFIrisWallpaperView> irisWallpaperView; 
@property (nonatomic,readonly) UIGestureRecognizer * wallpaperGestureRecognizer; 
@property (nonatomic,readonly) SCD_Struct_SB29 currentHomescreenStyleTransitionState; 
@property (nonatomic,readonly) long long activeOrientationSource; 
@property (nonatomic,readonly) SBFWallpaperConfigurationManager * wallpaperConfigurationManager;              //@synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)accessAuthenticator;
+(id)substitutionFlatColorForWallpaperName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(long long)variant;
-(UIScreen *)screen;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_window;
-(void)setWindowLevel:(double)arg1 ;
-(double)windowLevel;
-(SBRootSettings *)rootSettings;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(NSString *)cachingIdentifier;
-(void)setVariant:(long long)arg1 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)_updateRasterizationState;
-(void)_beginDisallowRasterizationBlock;
-(void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2 ;
-(void)_endDisallowRasterizationBlock;
-(void)wallpaperViewDidInvalidateBlurs:(id)arg1 ;
-(void)wallpaperViewDidChangeWantsRasterization:(id)arg1 ;
-(void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2 ;
-(id)wallpaperView:(id)arg1 wallpaperConfigurationIncludingValueTypes:(unsigned long long)arg2 ;
-(SBFWallpaperConfigurationManager *)wallpaperConfigurationManager;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)setRootSettings:(SBRootSettings *)arg1 ;
-(id)suspendWallpaperAnimationForReason:(id)arg1 ;
-(id<SBFIrisWallpaperView>)irisWallpaperView;
-(void)startHostingWallpaperOverlay:(id)arg1 ;
-(id)relinquishHostingOfWallpaperOverlay;
-(UIGestureRecognizer *)wallpaperGestureRecognizer;
-(SBWallpaperAggdLogger *)wallpaperAggdLogger;
-(void)setWallpaperAggdLogger:(SBWallpaperAggdLogger *)arg1 ;
-(BOOL)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(BOOL)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(double)contrastForVariant:(long long)arg1 ;
-(id)averageColorForVariant:(long long)arg1 ;
-(id)legibilitySettingsForVariant:(long long)arg1 ;
-(void)_batterySaverModeChanged:(id)arg1 ;
-(void)removeObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)addObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)setOrientationProvider:(id)arg1 forSource:(long long)arg2 ;
-(void)activateOrientationSource:(long long)arg1 ;
-(long long)activeOrientationSource;
-(void)deactivateOrientationSource:(long long)arg1 ;
-(void)cancelInProcessAnimations;
-(void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)orientationSource:(long long)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)orientationSource:(long long)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)orientationSource:(long long)arg1 didRotateFromInterfaceOrientation:(long long)arg2 ;
-(id)beginRequiringWithReason:(id)arg1 ;
-(id)suspendColorSamplingForReason:(id)arg1 ;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(void)_reloadWallpaperAndFlushCaches:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preheatWallpaperForVariant:(long long)arg1 ;
-(void)_updateAndPrewarmWallpapers;
-(void)_updateScreenBlanked;
-(void)_motionEffectsChanged;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithScreen:(id)arg1 orientation:(long long)arg2 variant:(long long)arg3 wallpaperConfigurationManager:(id)arg4 cachingIdentifier:(id)arg5 rootSettings:(id)arg6 ;
-(void)_endSuspendingMotionEffectsForStyleIfNeeded;
-(BOOL)_shouldSuspendMotionEffectsForState:(SCD_Struct_SB29)arg1 ;
-(void)_updateMotionEffectsForState:(SCD_Struct_SB29)arg1 ;
-(void)_updateWallpaperHidden;
-(void)_updateWallpaperParallax;
-(void)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2 ;
-(void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2 ;
-(SBWallpaperStyleInfo *)homescreenStyleInfo;
-(SBWallpaperStyleInfo *)lockscreenStyleInfo;
-(BOOL)setWallpaperStyleTransitionState:(SCD_Struct_SB29)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(id)wallpaperStyleInfoForVariant:(long long)arg1 ;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2 ;
-(BOOL)shouldDelayHomescreenStyleUpdates;
-(void)_suspendOrResumeColorSampling;
-(void)_suspendOrResumeWallpaperAnimation;
-(void)removeColorSamplingAssertion:(id)arg1 ;
-(void)removeWallpaperAnimationAssertion:(id)arg1 ;
-(void)removeWallpaperRequiredAssertion:(id)arg1 ;
-(id)_wallpaperViewForVariant:(long long)arg1 ;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3 ;
-(BOOL)_setDisallowRasterization:(BOOL)arg1 withReason:(id)arg2 reasons:(id)arg3 ;
-(unsigned long long)_bestWallpaperViewInitializationOptionsForVariant:(long long)arg1 shared:(BOOL)arg2 wallpaperOptions:(id)arg3 options:(unsigned long long)arg4 ;
-(Class)_wallpaperViewClassForType:(long long)arg1 ;
-(BOOL)_isWallpaperHiddenForVariant:(long long)arg1 ;
-(id<BSInvalidatable>)batterySaverAnimationAssertion;
-(void)setBatterySaverAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(unsigned long long)wallpaperDataTypesToRequestForUpdatingWallpaperViews;
-(id)substitutionWallpaperConfigurationForWallpaperConfiguration:(id)arg1 ;
-(void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)variantsShareWallpaper;
-(void)_updateSharedWallpaperWithOptions:(unsigned long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)_updateSeparateWallpaperForVariants:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)setHomescreenWallpaperScale:(double)arg1 ;
-(void)setLockscreenWallpaperScale:(double)arg1 ;
-(void)setLockscreenOnlyWallpaperAlpha:(double)arg1 ;
-(void)_updateBlurGeneration;
-(id)wallpaperConfigurationForUpdatingWallpaperViewsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)_isWallpaperView:(id)arg1 displayingWallpaperWithConfiguration:(id)arg2 forVariant:(long long)arg3 ;
-(void)_clearWallpaperView:(id)arg1 ;
-(void)setSharedWallpaperView:(SBFWallpaperView *)arg1 ;
-(void)setLockscreenWallpaperView:(SBFWallpaperView *)arg1 ;
-(void)setHomescreenWallpaperView:(SBFWallpaperView *)arg1 ;
-(id)_makeWallpaperViewWithConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(void)cleanupOldSharedWallpaper:(id)arg1 lockSreenWallpaper:(id)arg2 homeScreenWallpaper:(id)arg3 ;
-(void)setFakeBlurViewOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(void)_precacheStyles:(id)arg1 usingTraitCollection:(id)arg2 ;
-(void)_handleWallpaperChangedForVariant:(long long)arg1 ;
-(void)_saveWallpaperAggdKeysForLocations:(long long)arg1 withConfiguration:(id)arg2 ;
-(id)vendWallpaperViewForConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(void)_setWallpaperHidden:(BOOL)arg1 variant:(long long)arg2 reason:(id)arg3 ;
-(id<BSInvalidatable>)wallpaperStyleAnimationAssertion;
-(void)setWallpaperStyleAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(BOOL)_shouldSuspendMotionEffectsForStyle:(long long)arg1 ;
-(void)_beginSuspendingMotionEffectsForStyleIfNeeded;
-(id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(SCD_Struct_SB29)arg2 ;
-(void)_clearWallpaperEffectView:(id)arg1 ;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 oldState:(SCD_Struct_SB29*)arg2 newState:(SCD_Struct_SB29*)arg3 oldEffectView:(id*)arg4 newEffectView:(id*)arg5 ;
-(id)_activeWallpaperView;
-(id)_observersForVariant:(long long)arg1 ;
-(void)_reconfigureBlurViewsForVariant:(long long)arg1 ;
-(void)_updateBlurImagesForVariant:(long long)arg1 ;
-(id)_blurViewsForVariant:(long long)arg1 ;
-(void)updateOrientationAfterSourceChange;
-(BOOL)_isRasterizationDisallowedForCurrentVariant;
-(id)activeInterfaceOrientationSourcesDescriptions;
-(BOOL)_isAcceptingOrientationChangesFromSource:(long long)arg1 ;
-(long long)defaultInterfaceOrientationForSource:(long long)arg1 ;
-(void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2 ;
-(void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)wallpaperServer:(id)arg1 setWallpaperVideoWithWallpaperMode:(id)arg2 cropRect:(CGRect)arg3 wallpaperMode:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)wallpaperServer:(id)arg1 setWallpaperColorName:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)wallpaperServer:(id)arg1 setWallpaperGradient:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)wallpaperServer:(id)arg1 restoreDefaultWallpaperWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateWallpaper:(id)arg1 forWallpaperMode:(long long)arg2 ;
-(void)updateWallpaper:(id)arg1 forWallpaperDimming:(BOOL)arg2 ;
-(id)initWithWallpaperConfigurationManager:(id)arg1 ;
-(id)initWithWallpaperConfigurationManager:(id)arg1 cachingIdentifier:(id)arg2 rootSettings:(id)arg3 ;
-(void)setAlpha:(double)arg1 forWallpaperVariant:(long long)arg2 ;
-(BOOL)updateIrisWallpaperForStaticMode;
-(void)updateIrisWallpaperForInteractiveMode;
-(void)setLockscreenWallpaperContentsRect:(CGRect)arg1 ;
-(SCD_Struct_SB29)currentHomescreenStyleTransitionState;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg1 ;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)invalidateWallpaperAssertion:(id)arg1 ;
-(double)contrastInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 forVariant:(long long)arg4 ;
-(void)setDisallowsRasterization:(BOOL)arg1 forVariant:(long long)arg2 withReason:(id)arg3 ;
-(void)_registerFakeBlurView:(id)arg1 ;
-(void)_unregisterFakeBlurView:(id)arg1 ;
-(id)_sourceForFakeBlurView:(id)arg1 ;
-(id)_newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3 ;
-(id)_getImageInRect:(CGRect)arg1 withZoomFactor:(double)arg2 forVariant:(long long)arg3 style:(inout long long*)arg4 ;
-(void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1 ;
-(long long)_WallpaperOrientationNotForYou;
-(double)homescreenWallpaperScale;
-(double)lockscreenWallpaperScale;
-(SBFWallpaperView *)lockscreenWallpaperView;
-(SBFWallpaperView *)homescreenWallpaperView;
-(SBFWallpaperView *)sharedWallpaperView;
-(UITraitCollection *)fakeBlurViewOverrideTraitCollection;
@end

