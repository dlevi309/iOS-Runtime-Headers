/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBFWallpaperConfigurationManagerDelegate.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBFWallpaperViewInternalObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBFWallpaperViewDelegate.h>
#import <libobjc.A.dylib/SBWallpaperPresenting.h>
#import <libobjc.A.dylib/SBWallpaperLegibilityProviding.h>

@protocol BSDefaultObserver, SBWallpaperPresentingDelegate, SBWallpaperReachabilityCoordinating, BSInvalidatable;
@class UIView, NSHashTable, NSMutableSet, SBWallpaperDefaults, SBFWallpaperConfigurationManager, NSString, SBFWallpaperView, SBWallpaperStyleInfo, UITraitCollection;

@interface SBWallpaperViewController : UIViewController <SBFWallpaperConfigurationManagerDelegate, SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, PTSettingsKeyObserver, BSDescriptionProviding, SBFWallpaperViewDelegate, SBWallpaperPresenting, SBWallpaperLegibilityProviding> {

	UIView* _wallpaperContainerView;
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
	SBWallpaperDefaults* _wallpaperDefaults;
	id<BSDefaultObserver> _wallpaperEnableDimmingObserver;
	NSHashTable* _homescreenWallpaperScaleAssertions;
	BOOL _fixedOrientation;
	SBFWallpaperConfigurationManager* _wallpaperConfigurationManager;
	id<SBWallpaperPresentingDelegate> _wallpaperPresentingDelegate;
	double _lockscreenWallpaperScale;
	NSString* _cachingIdentifier;
	id<SBWallpaperReachabilityCoordinating> _reachabilityCoordinator;
	SBFWallpaperView* _lockscreenWallpaperView;
	SBFWallpaperView* _homescreenWallpaperView;
	SBFWallpaperView* _sharedWallpaperView;
	SBWallpaperStyleInfo* _homescreenStyleInfo;
	SBWallpaperStyleInfo* _lockscreenStyleInfo;
	id<BSInvalidatable> _wallpaperStyleAnimationAssertion;
	UITraitCollection* _fakeBlurViewOverrideTraitCollection;

}

@property (nonatomic,retain) SBFWallpaperView * lockscreenWallpaperView;                                        //@synthesize lockscreenWallpaperView=_lockscreenWallpaperView - In the implementation block
@property (nonatomic,retain) SBFWallpaperView * homescreenWallpaperView;                                        //@synthesize homescreenWallpaperView=_homescreenWallpaperView - In the implementation block
@property (nonatomic,retain) SBFWallpaperView * sharedWallpaperView;                                            //@synthesize sharedWallpaperView=_sharedWallpaperView - In the implementation block
@property (nonatomic,readonly) SBWallpaperStyleInfo * homescreenStyleInfo;                                      //@synthesize homescreenStyleInfo=_homescreenStyleInfo - In the implementation block
@property (nonatomic,readonly) SBWallpaperStyleInfo * lockscreenStyleInfo;                                      //@synthesize lockscreenStyleInfo=_lockscreenStyleInfo - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> wallpaperStyleAnimationAssertion;                              //@synthesize wallpaperStyleAnimationAssertion=_wallpaperStyleAnimationAssertion - In the implementation block
@property (nonatomic,retain) UITraitCollection * fakeBlurViewOverrideTraitCollection;                           //@synthesize fakeBlurViewOverrideTraitCollection=_fakeBlurViewOverrideTraitCollection - In the implementation block
@property (nonatomic,retain) SBFWallpaperConfigurationManager * wallpaperConfigurationManager;                  //@synthesize wallpaperConfigurationManager=_wallpaperConfigurationManager - In the implementation block
@property (nonatomic,copy) NSString * cachingIdentifier;                                                        //@synthesize cachingIdentifier=_cachingIdentifier - In the implementation block
@property (nonatomic,retain) id<SBWallpaperReachabilityCoordinating> reachabilityCoordinator;                   //@synthesize reachabilityCoordinator=_reachabilityCoordinator - In the implementation block
@property (assign,nonatomic) BOOL fixedOrientation;                                                             //@synthesize fixedOrientation=_fixedOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBWallpaperPresentingDelegate> wallpaperPresentingDelegate;              //@synthesize wallpaperPresentingDelegate=_wallpaperPresentingDelegate - In the implementation block
@property (assign,nonatomic) long long variant; 
@property (nonatomic,readonly) double homescreenWallpaperScale; 
@property (nonatomic,readonly) double minimumHomescreenWallpaperScale; 
@property (assign,nonatomic) double lockscreenWallpaperScale;                                                   //@synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale - In the implementation block
@property (nonatomic,readonly) double minimumLockscreenWallpaperScale; 
@property (nonatomic,readonly) id<SBFIrisWallpaperView> irisWallpaperView; 
@property (nonatomic,readonly) SCD_Struct_SB20 currentHomescreenStyleTransitionState; 
+(id)substitutionFlatColorForWallpaperName:(id)arg1 ;
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
-(void)_beginDisallowRasterizationBlock;
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
-(void)setLockscreenWallpaperView:(SBFWallpaperView *)arg1 ;
-(id)legibilitySettingsForVariant:(long long)arg1 ;
-(id)wallpaperConfigurationForVariant:(long long)arg1 includingValuesForTypes:(unsigned long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)succinctDescription;
-(double)minimumHomescreenWallpaperScale;
-(void)addObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)setWallpaperPresentingDelegate:(id<SBWallpaperPresentingDelegate>)arg1 ;
-(SBFWallpaperConfigurationManager *)wallpaperConfigurationManager;
-(void)cancelInProcessAnimations;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2 ;
-(void)updateWallpaperForLocations:(long long)arg1 wallpaperMode:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3 ;
-(void)updateWallpaperForLocations:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setLockscreenWallpaperContentsRect:(CGRect)arg1 ;
-(id<SBWallpaperPresentingDelegate>)wallpaperPresentingDelegate;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(BOOL)fixedOrientation;
-(void)removeObserver:(id)arg1 forVariant:(long long)arg2 ;
-(id)suspendWallpaperAnimationForReason:(id)arg1 ;
-(id)wallpaperView:(id)arg1 wallpaperConfigurationIncludingValueTypes:(unsigned long long)arg2 ;
-(void)_unregisterFakeBlurView:(id)arg1 ;
-(id<BSInvalidatable>)wallpaperStyleAnimationAssertion;
-(void)updateIrisWallpaperForInteractiveMode;
-(BOOL)_isWallpaperHiddenForVariant:(long long)arg1 ;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 oldState:(SCD_Struct_SB20*)arg2 newState:(SCD_Struct_SB20*)arg3 oldEffectView:(id*)arg4 newEffectView:(id*)arg5 ;
-(double)homescreenWallpaperScale;
-(BOOL)updateIrisWallpaperForStaticMode;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)_handleWallpaperChangedForVariant:(long long)arg1 ;
-(void)setSharedWallpaperView:(SBFWallpaperView *)arg1 ;
-(void)setWallpaperConfigurationManager:(SBFWallpaperConfigurationManager *)arg1 ;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg1 ;
-(SCD_Struct_SB20)currentHomescreenStyleTransitionState;
-(void)_updateRasterizationState;
-(void)cleanupOldSharedWallpaper:(id)arg1 lockSreenWallpaper:(id)arg2 homeScreenWallpaper:(id)arg3 ;
-(void)_suspendOrResumeWallpaperAnimation;
-(id)_observersForVariant:(long long)arg1 ;
-(void)_removeColorSamplingAssertion:(id)arg1 ;
-(void)setLockscreenOnlyWallpaperAlpha:(double)arg1 ;
-(void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2 ;
-(void)_endDisallowRasterizationBlock;
-(SBFWallpaperView *)lockscreenWallpaperView;
-(void)_updateSeparateWallpaperForVariants:(long long)arg1 options:(unsigned long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)noteWillAnimateToInterfaceOrientation:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)variant;
-(void)_precacheStyles:(id)arg1 usingTraitCollection:(id)arg2 ;
-(void)_setWallpaperHidden:(BOOL)arg1 variant:(long long)arg2 reason:(id)arg3 ;
-(void)_clearWallpaperEffectView:(id)arg1 ;
-(void)setVariant:(long long)arg1 ;
-(void)removeWallpaperRequiredAssertion:(id)arg1 ;
-(id)_blurViewsForVariant:(long long)arg1 ;
-(id<SBWallpaperReachabilityCoordinating>)reachabilityCoordinator;
-(void)_reconfigureBlurViewsForVariant:(long long)arg1 ;
-(void)noteDidRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)substitutionWallpaperConfigurationForWallpaperConfiguration:(id)arg1 ;
-(void)_updateHomeScreenWallpaperScaleWithAnimationFactory:(id)arg1 ;
-(void)_updateMotionEffectsForState:(SCD_Struct_SB20)arg1 ;
-(SBWallpaperStyleInfo *)lockscreenStyleInfo;
-(void)_beginSuspendingMotionEffectsForStyleIfNeeded;
-(void)_endSuspendingMotionEffectsForStyleIfNeeded;
-(id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(SCD_Struct_SB20)arg2 ;
-(void)_updateWallpaperHidden;
-(void)_updateAndPrewarmWallpapers;
-(id)wallpaperStyleInfoForVariant:(long long)arg1 ;
-(NSString *)description;
-(id)wallpaperConfigurationForUpdatingWallpaperViewsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)shouldAutorotate;
-(unsigned long long)_bestWallpaperViewInitializationOptionsForVariant:(long long)arg1 shared:(BOOL)arg2 wallpaperOptions:(id)arg3 options:(unsigned long long)arg4 ;
-(void)_suspendOrResumeColorSampling;
-(void)_invalidateWallpaperAssertion:(id)arg1 ;
-(Class)_wallpaperViewClassForType:(long long)arg1 ;
-(SBWallpaperStyleInfo *)homescreenStyleInfo;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldDelayHomescreenStyleUpdates;
-(void)viewDidLoad;
-(void)_updateBlurGeneration;
-(BOOL)_setDisallowRasterization:(BOOL)arg1 withReason:(id)arg2 reasons:(id)arg3 ;
-(void)_updateWallpaperForWallpaperMode:(long long)arg1 ;
-(void)_updateWallpaperForWallpaperDimming:(BOOL)arg1 ;
-(id)_sourceForFakeBlurView:(id)arg1 ;
-(BOOL)_isWallpaperView:(id)arg1 displayingWallpaperWithConfiguration:(id)arg2 forVariant:(long long)arg3 ;
-(void)_registerFakeBlurView:(id)arg1 ;
-(void)_updateBlurImagesForVariant:(long long)arg1 ;
-(double)minimumWallpaperScaleForVariant:(long long)arg1 ;
-(void)setReachabilityCoordinator:(id<SBWallpaperReachabilityCoordinating>)arg1 ;
-(void)_removeWallpaperAnimationAssertion:(id)arg1 ;
-(SBFWallpaperView *)sharedWallpaperView;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)_makeWallpaperViewWithConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(id)_vendWallpaperViewForConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(BOOL)variantsShareWallpaper;
-(void)_removeWallpaperScaleAssertion:(id)arg1 withAnimationFactory:(id)arg2 ;
-(void)setHomescreenWallpaperView:(SBFWallpaperView *)arg1 ;
-(BOOL)_shouldSuspendMotionEffectsForState:(SCD_Struct_SB20)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(SBFWallpaperView *)homescreenWallpaperView;
-(void)setCachingIdentifier:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)_clearWallpaperView:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_updateSharedWallpaperWithOptions:(unsigned long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_activeWallpaperView;
-(void)setFixedOrientation:(BOOL)arg1 ;
-(BOOL)_isRasterizationDisallowedForCurrentVariant;
-(BOOL)_shouldSuspendMotionEffectsForStyle:(long long)arg1 ;
-(void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2 ;
-(void)_updateWallpaperParallax;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)wallpaperDataTypesToRequestForUpdatingWallpaperViews;
@end

