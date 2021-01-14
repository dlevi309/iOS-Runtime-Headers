/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBFWallpaperViewInternalObserver.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/SBWallpaperPresentingDelegate.h>
#import <libobjc.A.dylib/SBWallpaperReachabilityCoordinating.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBWallpaperServerDelegate.h>
#import <libobjc.A.dylib/SBFWallpaperViewDelegate.h>
#import <UIKit/UIWindowDelegate.h>
#import <libobjc.A.dylib/CSWallpaperOverlayHosting.h>
#import <libobjc.A.dylib/SBWallpaperPresenting.h>
#import <libobjc.A.dylib/SBWallpaperLegibilityProviding.h>

@protocol SBUIWallpaperOverlay, SBWallpaperPresenting, SBWallpaperLegibilityProviding, SBWallpaperPresentingDelegate, BSInvalidatable;
@class UIWindow, UIView, NSMutableSet, NSMapTable, PTSingleTestRecipe, SBWallpaperViewController, UIScreen, NSString, SBFWallpaperConfigurationManager, SBWallpaperAggdLogger, UITraitCollection, UIGestureRecognizer;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBWallpaperPresentingDelegate, SBWallpaperReachabilityCoordinating, BSDescriptionProviding, SBWallpaperServerDelegate, SBFWallpaperViewDelegate, UIWindowDelegate, CSWallpaperOverlayHosting, SBWallpaperPresenting, SBWallpaperLegibilityProviding> {

	UIWindow* _wallpaperWindow;
	UIView* _wallpaperContainerView;
	UIView* _wallpaperOverlayContainerView;
	long long _orientation;
	long long _displayedVariant;
	UIView*<SBUIWallpaperOverlay> _wallpaperOverlay;
	NSMutableSet* _activeOrientationSources;
	NSMapTable* _orientationProviders;
	PTSingleTestRecipe* _migrationTestRecipe;
	PTSingleTestRecipe* _reloadTestRecipe;
	SBWallpaperViewController* _wallpaperViewController;
	id<SBWallpaperPresenting> _wallpaperPresenter;
	id<SBWallpaperLegibilityProviding> _wallpaperLegibilityProvider;
	id<SBWallpaperPresentingDelegate> _wallpaperPresentingDelegate;
	UIScreen* _screen;
	NSString* _cachingIdentifier;
	SBFWallpaperConfigurationManager* _wallpaperConfigurationManager;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;
	UITraitCollection* _fakeBlurViewOverrideTraitCollection;
	id<BSInvalidatable> _batterySaverAnimationAssertion;
	id<BSInvalidatable> _wallpaperStyleAnimationAssertion;

}

@property (nonatomic,retain) SBWallpaperAggdLogger * wallpaperAggdLogger;                                       //@synthesize wallpaperAggdLogger=_wallpaperAggdLogger - In the implementation block
@property (getter=_WallpaperOrientationNotForYou,nonatomic,readonly) long long _orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) UITraitCollection * fakeBlurViewOverrideTraitCollection;                           //@synthesize fakeBlurViewOverrideTraitCollection=_fakeBlurViewOverrideTraitCollection - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> batterySaverAnimationAssertion;                                //@synthesize batterySaverAnimationAssertion=_batterySaverAnimationAssertion - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperStyleAnimationAssertion;                              //@synthesize wallpaperStyleAnimationAssertion=_wallpaperStyleAnimationAssertion - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                                               //@synthesize screen=_screen - In the implementation block
@property (nonatomic,copy,readonly) NSString * cachingIdentifier;                                               //@synthesize cachingIdentifier=_cachingIdentifier - In the implementation block
@property (nonatomic,readonly) id<SBWallpaperPresenting> presenter;                                             //@synthesize wallpaperPresenter=_wallpaperPresenter - In the implementation block
@property (nonatomic,readonly) id<SBWallpaperLegibilityProviding> legibilityProvider;                           //@synthesize wallpaperLegibilityProvider=_wallpaperLegibilityProvider - In the implementation block
@property (assign,nonatomic) double windowLevel; 
@property (nonatomic,readonly) UIGestureRecognizer * wallpaperGestureRecognizer; 
@property (nonatomic,readonly) long long activeOrientationSource; 
@property (nonatomic,readonly) SBFWallpaperConfigurationManager * wallpaperConfigurationManager;                //@synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double effectiveReachabilityYOffset; 
@property (assign,nonatomic,__weak) id<SBWallpaperPresentingDelegate> wallpaperPresentingDelegate;              //@synthesize wallpaperPresentingDelegate=_wallpaperPresentingDelegate - In the implementation block
@property (assign,nonatomic) long long variant; 
@property (nonatomic,readonly) double homescreenWallpaperScale; 
@property (nonatomic,readonly) double minimumHomescreenWallpaperScale; 
@property (assign,nonatomic) double lockscreenWallpaperScale; 
@property (nonatomic,readonly) double minimumLockscreenWallpaperScale; 
@property (nonatomic,readonly) id<SBFIrisWallpaperView> irisWallpaperView; 
@property (nonatomic,readonly) SCD_Struct_SB20 currentHomescreenStyleTransitionState; 
+(id)sharedInstance;
+(id)accessAuthenticator;
-(id)beginRequiringWithReason:(id)arg1 ;
-(double)minimumLockscreenWallpaperScale;
-(id)suspendColorSamplingForReason:(id)arg1 ;
-(double)contrastInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(void)setFakeBlurViewOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2 ;
-(NSString *)cachingIdentifier;
-(id)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2 ;
-(void)preheatWallpaperForVariant:(long long)arg1 ;
-(id)_wallpaperViewForVariant:(long long)arg1 ;
-(void)wallpaperViewDidInvalidateBlurs:(id)arg1 ;
-(id)averageColorForVariant:(long long)arg1 ;
-(double)contrastForVariant:(long long)arg1 ;
-(void)setLockscreenWallpaperScale:(double)arg1 ;
-(UITraitCollection *)fakeBlurViewOverrideTraitCollection;
-(void)wallpaperViewDidChangeWantsRasterization:(id)arg1 ;
-(void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(UIGestureRecognizer *)wallpaperGestureRecognizer;
-(BOOL)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(BOOL)setWallpaperStyleTransitionState:(SCD_Struct_SB20)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(id)newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3 ;
-(void)setAlpha:(double)arg1 forWallpaperVariant:(long long)arg2 ;
-(void)setDisallowsRasterization:(BOOL)arg1 forVariant:(long long)arg2 withReason:(id)arg3 ;
-(void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(void)setWallpaperStyleAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(double)lockscreenWallpaperScale;
-(id<SBFIrisWallpaperView>)irisWallpaperView;
-(void)setWallpaperHidden:(BOOL)arg1 variant:(long long)arg2 reason:(id)arg3 ;
-(void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setWindowLevel:(double)arg1 ;
-(id)legibilitySettingsForVariant:(long long)arg1 ;
-(id)succinctDescription;
-(double)minimumHomescreenWallpaperScale;
-(void)addObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)setWallpaperPresentingDelegate:(id<SBWallpaperPresentingDelegate>)arg1 ;
-(SBFWallpaperConfigurationManager *)wallpaperConfigurationManager;
-(void)cancelInProcessAnimations;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(void)updateWallpaperForLocations:(long long)arg1 wallpaperMode:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3 ;
-(void)updateWallpaperForLocations:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setLockscreenWallpaperContentsRect:(CGRect)arg1 ;
-(id<SBWallpaperPresentingDelegate>)wallpaperPresentingDelegate;
-(void)removeObserver:(id)arg1 forVariant:(long long)arg2 ;
-(id)suspendWallpaperAnimationForReason:(id)arg1 ;
-(id)wallpaperView:(id)arg1 wallpaperConfigurationIncludingValueTypes:(unsigned long long)arg2 ;
-(id<BSInvalidatable>)wallpaperStyleAnimationAssertion;
-(void)updateIrisWallpaperForInteractiveMode;
-(double)homescreenWallpaperScale;
-(BOOL)updateIrisWallpaperForStaticMode;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)startHostingWallpaperOverlay:(id)arg1 ;
-(double)effectiveReachabilityYOffset;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg1 ;
-(SCD_Struct_SB20)currentHomescreenStyleTransitionState;
-(long long)_WallpaperOrientationNotForYou;
-(id)init;
-(id)initWithWallpaperConfigurationManager:(id)arg1 ;
-(double)windowLevel;
-(void)_motionEffectsChanged;
-(void)setLockscreenOnlyWallpaperAlpha:(double)arg1 ;
-(void)_batterySaverModeChanged:(id)arg1 ;
-(void)setBatterySaverAnimationAssertion:(id<BSInvalidatable>)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)wallpaperServer:(id)arg1 setWallpaperColor:(id)arg2 darkColor:(id)arg3 forVariants:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)variant;
-(id)initWithScreen:(id)arg1 orientation:(long long)arg2 variant:(long long)arg3 wallpaperConfigurationManager:(id)arg4 cachingIdentifier:(id)arg5 ;
-(id<BSInvalidatable>)batterySaverAnimationAssertion;
-(void)wallpaperServer:(id)arg1 fetchOriginalVideoURLDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setWallpaperAggdLogger:(SBWallpaperAggdLogger *)arg1 ;
-(void)wallpaperServer:(id)arg1 restoreDefaultWallpaperWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)setVariant:(long long)arg1 ;
-(id)activeInterfaceOrientationSourcesDescriptions;
-(void)_reloadWallpaperAndFlushCaches:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<SBWallpaperPresenting>)presenter;
-(NSString *)description;
-(void)setOrientationProvider:(id)arg1 forSource:(long long)arg2 ;
-(void)wallpaperServer:(id)arg1 fetchOriginalImageDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)wallpaperServer:(id)arg1 setWallpaperColorName:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(SBWallpaperAggdLogger *)wallpaperAggdLogger;
-(void)updateOrientationAfterSourceChange;
-(BOOL)_isAcceptingOrientationChangesFromSource:(long long)arg1 ;
-(void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1 ;
-(void)orientationSource:(long long)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)wallpaperServer:(id)arg1 fetchContentCutoutBoundsForVariant:(long long)arg2 orientation:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)activeOrientationSource;
-(BOOL)isWindowIgnoredForReachability:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateScreenBlanked;
-(UIScreen *)screen;
-(long long)defaultInterfaceOrientationForSource:(long long)arg1 ;
-(void)addReachabilityObserver:(id)arg1 ;
-(void)_saveWallpaperAggdKeysForLocations:(long long)arg1 withConfiguration:(id)arg2 ;
-(void)wallpaperServer:(id)arg1 setWallpaperGradient:(id)arg2 forVariants:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<SBWallpaperLegibilityProviding>)legibilityProvider;
-(void)wallpaperPresenter:(id)arg1 didChangeWallpaperForLocations:(long long)arg2 withConfiguration:(id)arg3 ;
-(id)initWithWallpaperConfigurationManager:(id)arg1 cachingIdentifier:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(id)succinctDescriptionBuilder;
-(id)relinquishHostingOfWallpaperOverlay;
-(void)activateOrientationSource:(long long)arg1 ;
-(void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(long long)wallpaperPresenter:(id)arg1 requestsOrientationWithRefresh:(BOOL)arg2 ;
-(void)wallpaperServer:(id)arg1 setWallpaperVideoWithWallpaperMode:(id)arg2 cropRect:(CGRect)arg3 wallpaperMode:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)orientationSource:(long long)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)deactivateOrientationSource:(long long)arg1 ;
-(id)_window;
-(void)dealloc;
-(void)orientationSource:(long long)arg1 didRotateFromInterfaceOrientation:(long long)arg2 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)removeReachabilityObserver:(id)arg1 ;
@end

