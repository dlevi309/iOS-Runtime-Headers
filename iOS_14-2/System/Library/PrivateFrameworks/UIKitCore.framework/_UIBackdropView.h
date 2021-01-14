/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIBackdropViewObserver, _UIBackdropViewGraphicsQualityChangeDelegate;
@class NSHashTable, _UIBackdropViewSettings, _UIBackdropEffectView, NSString, UIImage, UIView, CAFilter, NSMutableSet, NSMutableDictionary, UIColor;

@interface _UIBackdropView : UIView {

	double _cornerRadius;
	BOOL _cornerRadiusIsContinuous;
	BOOL _autosizesToFitSuperview;
	BOOL _computesColorSettings;
	BOOL _appliesOutputSettingsAutomatically;
	BOOL _applySaturationBeforeBlur;
	BOOL _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
	BOOL _applyingBackdropChanges;
	BOOL _applyingTransition;
	BOOL _requiresTintViews;
	BOOL _blursBackground;
	BOOL _allowsColorSettingsSuppression;
	BOOL _autoGroup;
	BOOL _contentViewAccessed;
	BOOL _contentViewAccessorGuard;
	BOOL _applySettingsAfterLayout;
	BOOL _updateMaskViewsForViewReentrancyGuard;
	BOOL _simulatesMasks;
	BOOL _backdropVisibilitySetOnce;
	BOOL _blurRadiusSetOnce;
	BOOL _transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack;
	BOOL __backdropVisible;
	long long _style;
	NSHashTable* _observers;
	id<_UIBackdropViewObserver> _observer;
	double _appliesOutputSettingsAnimationDuration;
	_UIBackdropViewSettings* _inputSettings;
	_UIBackdropViewSettings* _outputSettings;
	_UIBackdropViewSettings* _savedInputSettingsDuringRenderInContext;
	long long _configuration;
	_UIBackdropEffectView* _backdropEffectView;
	NSString* _groupName;
	UIImage* _filterMaskImage;
	UIView* _grayscaleTintView;
	UIImage* _grayscaleTintMaskImage;
	UIView* _colorTintView;
	UIImage* _colorTintMaskImage;
	UIView* _colorBurnTintView;
	UIImage* _colorBurnTintMaskImage;
	CAFilter* _gaussianBlurFilter;
	CAFilter* _colorSaturateFilter;
	CAFilter* _tintFilter;
	CAFilter* _colorOffsetFilter;
	UIView* _contentView;
	UIView* _darkeningTintView;
	UIImage* _darkeningTintMaskImage;
	long long _maskMode;
	NSMutableSet* _partialMaskViews;
	UIView* _grayscaleTintMaskViewContainer;
	NSMutableDictionary* _grayscaleTintMaskViewMap;
	UIView* _colorTintMaskViewContainer;
	NSMutableDictionary* _colorTintMaskViewMap;
	UIView* _colorBurnTintMaskViewContainer;
	NSMutableDictionary* _colorBurnTintMaskViewMap;
	UIView* _darkeningTintMaskViewContainer;
	NSMutableDictionary* _darkeningTintMaskViewMap;
	UIView* _filterMaskViewContainer;
	NSMutableDictionary* _filterMaskViewMap;
	id _computeAndApplySettingsNotificationObserver;
	double _colorMatrixGrayscaleTintLevel;
	double _colorMatrixGrayscaleTintAlpha;
	UIColor* _colorMatrixColorTint;
	double _colorMatrixColorTintAlpha;
	double _previousBackdropStatisticsRed;
	double _previousBackdropStatisticsGreen;
	double _previousBackdropStatisticsBlue;
	double _previousBackdropStatisticsContrast;
	id<_UIBackdropViewGraphicsQualityChangeDelegate> _graphicsQualityChangeDelegate;
	NSString* __blurQuality;
	double __blurRadius;
	double __saturationDeltaFactor;

}

@property (assign,nonatomic) long long style;                                                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                     //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewObserver> observer;                                                        //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL computesColorSettings;                                                                  //@synthesize computesColorSettings=_computesColorSettings - In the implementation block
@property (assign,nonatomic) BOOL appliesOutputSettingsAutomatically;                                                     //@synthesize appliesOutputSettingsAutomatically=_appliesOutputSettingsAutomatically - In the implementation block
@property (assign,nonatomic) double appliesOutputSettingsAnimationDuration;                                               //@synthesize appliesOutputSettingsAnimationDuration=_appliesOutputSettingsAnimationDuration - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettings;                                                     //@synthesize inputSettings=_inputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettings;                                                    //@synthesize outputSettings=_outputSettings - In the implementation block
@property (assign,nonatomic) BOOL applySaturationBeforeBlur;                                                              //@synthesize applySaturationBeforeBlur=_applySaturationBeforeBlur - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * savedInputSettingsDuringRenderInContext;                           //@synthesize savedInputSettingsDuringRenderInContext=_savedInputSettingsDuringRenderInContext - In the implementation block
@property (nonatomic,readonly) UIView * effectView; 
@property (assign,nonatomic) long long configuration;                                                                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL autosizesToFitSuperview;                                                                //@synthesize autosizesToFitSuperview=_autosizesToFitSuperview - In the implementation block
@property (assign,nonatomic) BOOL appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;                         //@synthesize appliesOutputSettingsAutomaticallyEnabledComputesColorSettings=_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings - In the implementation block
@property (assign,nonatomic) BOOL applyingBackdropChanges;                                                                //@synthesize applyingBackdropChanges=_applyingBackdropChanges - In the implementation block
@property (assign,nonatomic) BOOL applyingTransition;                                                                     //@synthesize applyingTransition=_applyingTransition - In the implementation block
@property (assign,nonatomic) BOOL requiresTintViews;                                                                      //@synthesize requiresTintViews=_requiresTintViews - In the implementation block
@property (assign,nonatomic) BOOL blursBackground;                                                                        //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) BOOL allowsColorSettingsSuppression;                                                         //@synthesize allowsColorSettingsSuppression=_allowsColorSettingsSuppression - In the implementation block
@property (nonatomic,retain) _UIBackdropEffectView * backdropEffectView;                                                  //@synthesize backdropEffectView=_backdropEffectView - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                                          //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL autoGroup;                                                                              //@synthesize autoGroup=_autoGroup - In the implementation block
@property (nonatomic,retain) UIImage * filterMaskImage;                                                                   //@synthesize filterMaskImage=_filterMaskImage - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                                                                  //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIImage * grayscaleTintMaskImage;                                                            //@synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                                                                      //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorTintMaskImage;                                                                //@synthesize colorTintMaskImage=_colorTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintView;                                                                  //@synthesize colorBurnTintView=_colorBurnTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorBurnTintMaskImage;                                                            //@synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage - In the implementation block
@property (nonatomic,retain) CAFilter * gaussianBlurFilter;                                                               //@synthesize gaussianBlurFilter=_gaussianBlurFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorSaturateFilter;                                                              //@synthesize colorSaturateFilter=_colorSaturateFilter - In the implementation block
@property (nonatomic,retain) CAFilter * tintFilter;                                                                       //@synthesize tintFilter=_tintFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorOffsetFilter;                                                                //@synthesize colorOffsetFilter=_colorOffsetFilter - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintView;                                                                  //@synthesize darkeningTintView=_darkeningTintView - In the implementation block
@property (nonatomic,retain) UIImage * darkeningTintMaskImage;                                                            //@synthesize darkeningTintMaskImage=_darkeningTintMaskImage - In the implementation block
@property (assign,nonatomic) BOOL contentViewAccessed;                                                                    //@synthesize contentViewAccessed=_contentViewAccessed - In the implementation block
@property (assign,nonatomic) BOOL contentViewAccessorGuard;                                                               //@synthesize contentViewAccessorGuard=_contentViewAccessorGuard - In the implementation block
@property (assign,nonatomic) long long maskMode;                                                                          //@synthesize maskMode=_maskMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * partialMaskViews;                                                             //@synthesize partialMaskViews=_partialMaskViews - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintMaskViewContainer;                                                     //@synthesize grayscaleTintMaskViewContainer=_grayscaleTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * grayscaleTintMaskViewMap;                                              //@synthesize grayscaleTintMaskViewMap=_grayscaleTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorTintMaskViewContainer;                                                         //@synthesize colorTintMaskViewContainer=_colorTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorTintMaskViewMap;                                                  //@synthesize colorTintMaskViewMap=_colorTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintMaskViewContainer;                                                     //@synthesize colorBurnTintMaskViewContainer=_colorBurnTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorBurnTintMaskViewMap;                                              //@synthesize colorBurnTintMaskViewMap=_colorBurnTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintMaskViewContainer;                                                     //@synthesize darkeningTintMaskViewContainer=_darkeningTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * darkeningTintMaskViewMap;                                              //@synthesize darkeningTintMaskViewMap=_darkeningTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * filterMaskViewContainer;                                                            //@synthesize filterMaskViewContainer=_filterMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterMaskViewMap;                                                     //@synthesize filterMaskViewMap=_filterMaskViewMap - In the implementation block
@property (assign,nonatomic) BOOL applySettingsAfterLayout;                                                               //@synthesize applySettingsAfterLayout=_applySettingsAfterLayout - In the implementation block
@property (nonatomic,retain) id computeAndApplySettingsNotificationObserver;                                              //@synthesize computeAndApplySettingsNotificationObserver=_computeAndApplySettingsNotificationObserver - In the implementation block
@property (assign,nonatomic) BOOL updateMaskViewsForViewReentrancyGuard;                                                  //@synthesize updateMaskViewsForViewReentrancyGuard=_updateMaskViewsForViewReentrancyGuard - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintLevel;                                                        //@synthesize colorMatrixGrayscaleTintLevel=_colorMatrixGrayscaleTintLevel - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintAlpha;                                                        //@synthesize colorMatrixGrayscaleTintAlpha=_colorMatrixGrayscaleTintAlpha - In the implementation block
@property (nonatomic,retain) UIColor * colorMatrixColorTint;                                                              //@synthesize colorMatrixColorTint=_colorMatrixColorTint - In the implementation block
@property (assign,nonatomic) double colorMatrixColorTintAlpha;                                                            //@synthesize colorMatrixColorTintAlpha=_colorMatrixColorTintAlpha - In the implementation block
@property (assign,nonatomic) BOOL simulatesMasks;                                                                         //@synthesize simulatesMasks=_simulatesMasks - In the implementation block
@property (assign,nonatomic) BOOL backdropVisibilitySetOnce;                                                              //@synthesize backdropVisibilitySetOnce=_backdropVisibilitySetOnce - In the implementation block
@property (assign,nonatomic) BOOL blurRadiusSetOnce;                                                                      //@synthesize blurRadiusSetOnce=_blurRadiusSetOnce - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsRed;                                                        //@synthesize previousBackdropStatisticsRed=_previousBackdropStatisticsRed - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsGreen;                                                      //@synthesize previousBackdropStatisticsGreen=_previousBackdropStatisticsGreen - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsBlue;                                                       //@synthesize previousBackdropStatisticsBlue=_previousBackdropStatisticsBlue - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsContrast;                                                   //@synthesize previousBackdropStatisticsContrast=_previousBackdropStatisticsContrast - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewGraphicsQualityChangeDelegate> graphicsQualityChangeDelegate;              //@synthesize graphicsQualityChangeDelegate=_graphicsQualityChangeDelegate - In the implementation block
@property (assign,nonatomic) BOOL transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack;                        //@synthesize transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack=_transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack - In the implementation block
@property (nonatomic,copy) NSString * _blurQuality;                                                                       //@synthesize _blurQuality=__blurQuality - In the implementation block
@property (assign,nonatomic) double _blurRadius;                                                                          //@synthesize _blurRadius=__blurRadius - In the implementation block
@property (assign,nonatomic) double _saturationDeltaFactor;                                                               //@synthesize _saturationDeltaFactor=__saturationDeltaFactor - In the implementation block
@property (assign,nonatomic) BOOL _backdropVisible;                                                                       //@synthesize _backdropVisible=__backdropVisible - In the implementation block
+(void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1 ;
+(id)allBackdropViews;
+(void)setAllBackdropViewsToGraphicsQuality:(long long)arg1 ;
+(void)restoreColorSettingsForRequester:(id)arg1 ;
+(void)suppressColorSettingsForRequester:(id)arg1 ;
+(Class)defaultSettingsClass;
+(Class)layerClass;
-(UIView *)colorBurnTintView;
-(void)setBlurRadius:(double)arg1 ;
-(id)computeAndApplySettingsNotificationObserver;
-(void)setDarkeningTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(id<_UIBackdropViewGraphicsQualityChangeDelegate>)graphicsQualityChangeDelegate;
-(void)prepareForTransitionToSettings:(id)arg1 ;
-(BOOL)isBackdropVisible;
-(void)setBlurQuality:(id)arg1 ;
-(void)updateMaskViewForView:(id)arg1 flag:(long long)arg2 ;
-(void)setAppliesOutputSettingsAnimationDuration:(double)arg1 ;
-(id)blurQuality;
-(void)set_blurRadius:(double)arg1 ;
-(void)addDarkeningTintViewIfNeededForSettings:(id)arg1 ;
-(NSMutableDictionary *)darkeningTintMaskViewMap;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(NSMutableSet *)partialMaskViews;
-(void)addObserver:(id)arg1 ;
-(void)addColorTintViewIfNeededForSettings:(id)arg1 ;
-(void)applySettingsWithBuiltInAnimation:(id)arg1 ;
-(void)setShouldRasterizeEffectsView:(BOOL)arg1 ;
-(UIImage *)filterMaskImage;
-(UIView *)effectView;
-(void)setApplySettingsAfterLayout:(BOOL)arg1 ;
-(void)applyOverlayBlendMode:(long long)arg1 toView:(id)arg2 ;
-(void)setColorTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)transitionToStyle:(long long)arg1 ;
-(void)setMaskMode:(long long)arg1 ;
-(void)adjustTintImplementationIfNeeded:(id)arg1 ;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg1 ;
-(void)addGrayscaleTintViewIfNeededForSettings:(id)arg1 ;
-(void)_setBlursBackground:(BOOL)arg1 ;
-(void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2 ;
-(void)setColorOffsetFilter:(CAFilter *)arg1 ;
-(void)setBackdropVisibilitySetOnce:(BOOL)arg1 ;
-(NSMutableDictionary *)grayscaleTintMaskViewMap;
-(void)setPreviousBackdropStatisticsRed:(double)arg1 ;
-(double)previousBackdropStatisticsBlue;
-(void)setPreviousBackdropStatisticsGreen:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 autosizesToFitSuperview:(BOOL)arg2 settings:(id)arg3 ;
-(BOOL)blurRadiusSetOnce;
-(void)setColorBurnTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(double)_continuousCornerRadius;
-(void)setPreviousBackdropStatisticsContrast:(double)arg1 ;
-(BOOL)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
-(UIImage *)colorTintMaskImage;
-(id)initWithSettings:(id)arg1 ;
-(void)setColorMatrixGrayscaleTintLevel:(double)arg1 ;
-(void)transitionToPrivateStyle:(long long)arg1 ;
-(void)updateSubviewHierarchyIfNeededForSettings:(id)arg1 ;
-(void)setColorBurnTintMaskViewContainer:(UIView *)arg1 ;
-(BOOL)blursBackground;
-(void)setApplyingTransition:(BOOL)arg1 ;
-(BOOL)contentViewAccessed;
-(id)backdropViewLayer;
-(NSHashTable *)observers;
-(void)transitionToColor:(id)arg1 ;
-(BOOL)applyingBackdropChanges;
-(void)removeMaskViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)_saturationDeltaFactor;
-(CAFilter *)tintFilter;
-(BOOL)appliesOutputSettingsAutomatically;
-(double)colorMatrixGrayscaleTintLevel;
-(double)_blurRadius;
-(void)setColorTintMaskImage:(UIImage *)arg1 ;
-(void)setContentViewAccessorGuard:(BOOL)arg1 ;
-(void)setObserver:(id<_UIBackdropViewObserver>)arg1 ;
-(void)setDarkeningTintView:(UIView *)arg1 ;
-(void)applyOverlayBlendModeToView:(id)arg1 ;
-(void)setComputesColorSettings:(BOOL)arg1 ;
-(void)addColorBurnTintViewIfNeededForSettings:(id)arg1 ;
-(id)init;
-(_UIBackdropViewSettings *)savedInputSettingsDuringRenderInContext;
-(void)setFilterMaskViewMap:(NSMutableDictionary *)arg1 ;
-(id<_UIBackdropViewObserver>)observer;
-(void)_updateFilters;
-(void)setGrayscaleTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)setPreviousBackdropStatisticsBlue:(double)arg1 ;
-(UIView *)filterMaskViewContainer;
-(void)updateMaskViewsForView:(id)arg1 ;
-(BOOL)applyingTransition;
-(void)setGraphicsQualityChangeDelegate:(id<_UIBackdropViewGraphicsQualityChangeDelegate>)arg1 ;
-(CAFilter *)colorSaturateFilter;
-(void)setBlursBackground:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setAutosizesToFitSuperview:(BOOL)arg1 ;
-(void)setGrayscaleTintView:(UIView *)arg1 ;
-(void)_transitionToGraphicsQuality:(long long)arg1 ;
-(void)setAutoGroup:(BOOL)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(void)addContentViewIfNeededForSettings:(id)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(UIImage *)colorBurnTintMaskImage;
-(UIView *)grayscaleTintView;
-(void)removeOverlayBlendModeFromView:(id)arg1 ;
-(NSMutableDictionary *)colorBurnTintMaskViewMap;
-(BOOL)simulatesMasks;
-(UIView *)grayscaleTintMaskViewContainer;
-(void)setColorSaturateFilter:(CAFilter *)arg1 ;
-(void)setOutputSettings:(_UIBackdropViewSettings *)arg1 ;
-(UIImage *)darkeningTintMaskImage;
-(void)setGroupName:(NSString *)arg1 ;
-(double)previousBackdropStatisticsRed;
-(void)setComputeAndApplySettingsNotificationObserver:(id)arg1 ;
-(id)initWithPrivateStyle:(long long)arg1 ;
-(void)setGrayscaleTintMaskViewContainer:(UIView *)arg1 ;
-(CAFilter *)gaussianBlurFilter;
-(void)setDarkeningTintMaskViewContainer:(UIView *)arg1 ;
-(void)set_backdropVisible:(BOOL)arg1 ;
-(void)setApplyingBackdropChanges:(BOOL)arg1 ;
-(BOOL)transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack;
-(NSString *)groupName;
-(BOOL)contentViewAccessorGuard;
-(void)setBackdropEffectView:(_UIBackdropEffectView *)arg1 ;
-(void)setUpdateMaskViewsForViewReentrancyGuard:(BOOL)arg1 ;
-(double)_cornerRadius;
-(UIColor *)colorMatrixColorTint;
-(double)previousBackdropStatisticsContrast;
-(void)setMaskImage:(id)arg1 onLayer:(id)arg2 ;
-(BOOL)requiresTintViews;
-(BOOL)computesColorSettings;
-(id)initWithStyle:(long long)arg1 ;
-(void)settingsDidChange:(id)arg1 ;
-(void)setColorMatrixGrayscaleTintAlpha:(double)arg1 ;
-(BOOL)applySaturationBeforeBlur;
-(_UIBackdropViewSettings *)inputSettings;
-(UIImage *)grayscaleTintMaskImage;
-(BOOL)_backdropVisible;
-(void)_updateBackdropGroupName;
-(void)setTransitioningBetweenMaterialsRequiringRasterizationAndAlphaHack:(BOOL)arg1 ;
-(void)setBlurRadiusSetOnce:(BOOL)arg1 ;
-(void)setDarkeningTintMaskImage:(UIImage *)arg1 ;
-(void)computeAndApplySettingsForTransition;
-(void)setColorMatrixColorTint:(UIColor *)arg1 ;
-(BOOL)backdropVisibilitySetOnce;
-(void)setTintFilter:(CAFilter *)arg1 ;
-(void)setFilterMaskViewContainer:(UIView *)arg1 ;
-(UIView *)colorTintView;
-(double)previousBackdropStatisticsGreen;
-(void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(BOOL)arg1 ;
-(double)colorMatrixGrayscaleTintAlpha;
-(void)setPartialMaskViews:(NSMutableSet *)arg1 ;
-(void)setContentViewAccessed:(BOOL)arg1 ;
-(void)set_saturationDeltaFactor:(double)arg1 ;
-(void)setApplySaturationBeforeBlur:(BOOL)arg1 ;
-(void)setColorOffsetFilterForSettings:(id)arg1 ;
-(void)setColorTintMaskViewContainer:(UIView *)arg1 ;
-(void)setTintOpacity:(double)arg1 ;
-(void)set_blurQuality:(NSString *)arg1 ;
-(void)setSimulatesMasks:(BOOL)arg1 ;
-(UIView *)darkeningTintView;
-(BOOL)updateMaskViewsForViewReentrancyGuard;
-(BOOL)disablesOccludedBackdropBlurs;
-(NSMutableDictionary *)colorTintMaskViewMap;
-(_UIBackdropEffectView *)backdropEffectView;
-(id)filters;
-(void)setUsesZoom;
-(BOOL)applySettingsAfterLayout;
-(double)appliesOutputSettingsAnimationDuration;
-(long long)maskMode;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(void)setRequiresTintViews:(BOOL)arg1 ;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(double)blurRadius;
-(UIView *)colorTintMaskViewContainer;
-(void)transitionToSettings:(id)arg1 ;
-(void)setColorBurnTintMaskImage:(UIImage *)arg1 ;
-(void)setGrayscaleTintMaskImage:(UIImage *)arg1 ;
-(BOOL)allowsColorSettingsSuppression;
-(void)setAppliesOutputSettingsAutomatically:(BOOL)arg1 ;
-(CAFilter *)colorOffsetFilter;
-(void)_applyCornerRadiusToSubviews;
-(void)setTintFilterForSettings:(id)arg1 ;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(double)saturationDeltaFactor;
-(UIView *)colorBurnTintMaskViewContainer;
-(NSString *)_blurQuality;
-(void)setGaussianBlurFilter:(CAFilter *)arg1 ;
-(void)setFilterMaskImage:(UIImage *)arg1 ;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)addBackdropEffectViewIfNeededForSettings:(id)arg1 ;
-(void)transitionComplete;
-(BOOL)autosizesToFitSuperview;
-(void)transitionIncrementallyToStyle:(long long)arg1 weighting:(double)arg2 ;
-(void)setAllowsColorSettingsSuppression:(BOOL)arg1 ;
-(void)setColorBurnTintView:(UIView *)arg1 ;
-(BOOL)autoGroup;
-(void)setColorMatrixColorTintAlpha:(double)arg1 ;
-(UIView *)darkeningTintMaskViewContainer;
-(double)colorMatrixColorTintAlpha;
-(void)didMoveToSuperview;
-(void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2 ;
-(void)setSavedInputSettingsDuringRenderInContext:(_UIBackdropViewSettings *)arg1 ;
-(void)ensureProperSubviewOrdering;
-(NSMutableDictionary *)filterMaskViewMap;
-(void)setInputSettings:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)outputSettings;
-(void)layoutSubviews;
-(long long)configuration;
-(void)didMoveToWindow;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)applySettings:(id)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(UIView *)contentView;
-(long long)style;
-(void)dealloc;
-(void)setConfiguration:(long long)arg1 ;
@end

