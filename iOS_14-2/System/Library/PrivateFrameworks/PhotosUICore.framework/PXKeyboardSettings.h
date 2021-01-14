/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXKeyboardSettings : PXSettings {

	BOOL _enableTungstenKeyboardNavigation;
	BOOL _enableTungstenShiftClickSelection;
	BOOL _enableTungstenFocusEnvironmentSupport;
	BOOL _enableAssetSelectionShortcuts;
	BOOL _enableFocusRing;
	BOOL _enableShadow;
	double _animationDuration;
	double _dampingRatio;
	double _dimmingFactor;
	double _shadowYOffset;
	double _shadowBlurRadius;
	double _shadowOpacity;
	long long _yearsFocusAnimationStyle;
	double _yearsFocusPadding;
	long long _monthsFocusAnimationStyle;
	double _monthsFocusPadding;
	long long _daysFocusAnimationStyle;
	double _daysFocusPadding;
	long long _allPhotosAspectFitFocusAnimationStyle;
	double _allPhotosAspectFitFocusPadding;
	long long _allPhotosAspectFillFocusAnimationStyle;
	double _allPhotosAspectFillFocusPadding;
	double _detailsViewOverlayAlpha;

}

@property (assign,nonatomic) BOOL enableTungstenKeyboardNavigation;                         //@synthesize enableTungstenKeyboardNavigation=_enableTungstenKeyboardNavigation - In the implementation block
@property (assign,nonatomic) BOOL enableTungstenShiftClickSelection;                        //@synthesize enableTungstenShiftClickSelection=_enableTungstenShiftClickSelection - In the implementation block
@property (assign,nonatomic) BOOL enableTungstenFocusEnvironmentSupport;                    //@synthesize enableTungstenFocusEnvironmentSupport=_enableTungstenFocusEnvironmentSupport - In the implementation block
@property (assign,nonatomic) BOOL enableAssetSelectionShortcuts;                            //@synthesize enableAssetSelectionShortcuts=_enableAssetSelectionShortcuts - In the implementation block
@property (assign,nonatomic) double animationDuration;                                      //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double dampingRatio;                                           //@synthesize dampingRatio=_dampingRatio - In the implementation block
@property (assign,nonatomic) BOOL enableFocusRing;                                          //@synthesize enableFocusRing=_enableFocusRing - In the implementation block
@property (assign,nonatomic) BOOL enableShadow;                                             //@synthesize enableShadow=_enableShadow - In the implementation block
@property (assign,nonatomic) double dimmingFactor;                                          //@synthesize dimmingFactor=_dimmingFactor - In the implementation block
@property (assign,nonatomic) double shadowYOffset;                                          //@synthesize shadowYOffset=_shadowYOffset - In the implementation block
@property (assign,nonatomic) double shadowBlurRadius;                                       //@synthesize shadowBlurRadius=_shadowBlurRadius - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                          //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) long long yearsFocusAnimationStyle;                            //@synthesize yearsFocusAnimationStyle=_yearsFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double yearsFocusPadding;                                      //@synthesize yearsFocusPadding=_yearsFocusPadding - In the implementation block
@property (assign,nonatomic) long long monthsFocusAnimationStyle;                           //@synthesize monthsFocusAnimationStyle=_monthsFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double monthsFocusPadding;                                     //@synthesize monthsFocusPadding=_monthsFocusPadding - In the implementation block
@property (assign,nonatomic) long long daysFocusAnimationStyle;                             //@synthesize daysFocusAnimationStyle=_daysFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double daysFocusPadding;                                       //@synthesize daysFocusPadding=_daysFocusPadding - In the implementation block
@property (assign,nonatomic) long long allPhotosAspectFitFocusAnimationStyle;               //@synthesize allPhotosAspectFitFocusAnimationStyle=_allPhotosAspectFitFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double allPhotosAspectFitFocusPadding;                         //@synthesize allPhotosAspectFitFocusPadding=_allPhotosAspectFitFocusPadding - In the implementation block
@property (assign,nonatomic) long long allPhotosAspectFillFocusAnimationStyle;              //@synthesize allPhotosAspectFillFocusAnimationStyle=_allPhotosAspectFillFocusAnimationStyle - In the implementation block
@property (assign,nonatomic) double allPhotosAspectFillFocusPadding;                        //@synthesize allPhotosAspectFillFocusPadding=_allPhotosAspectFillFocusPadding - In the implementation block
@property (assign,nonatomic) double detailsViewOverlayAlpha;                                //@synthesize detailsViewOverlayAlpha=_detailsViewOverlayAlpha - In the implementation block
+(id)sharedInstance;
+(id)_makeAnimationStyleChoiceRowWithTitle:(id)arg1 valueKeyPath:(id)arg2 ;
+(id)_makeLocalFocusAnimationSection;
+(id)_makeGlobalFocusAnimationSection;
+(id)settingsControllerModule;
-(id)parentSettings;
-(id)archiveValueForKey:(id)arg1 ;
-(double)daysFocusPadding;
-(void)setDaysFocusAnimationStyle:(long long)arg1 ;
-(void)setDefaultValues;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(void)setAllPhotosAspectFillFocusAnimationStyle:(long long)arg1 ;
-(double)animationDuration;
-(void)setEnableTungstenKeyboardNavigation:(BOOL)arg1 ;
-(void)setDimmingFactor:(double)arg1 ;
-(void)setEnableFocusRing:(BOOL)arg1 ;
-(double)shadowOpacity;
-(double)monthsFocusPadding;
-(void)setAllPhotosAspectFitFocusAnimationStyle:(long long)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)allPhotosAspectFitFocusPadding;
-(void)setYearsFocusPadding:(double)arg1 ;
-(void)setDaysFocusPadding:(double)arg1 ;
-(BOOL)enableFocusRing;
-(double)dimmingFactor;
-(double)shadowBlurRadius;
-(void)setDetailsViewOverlayAlpha:(double)arg1 ;
-(long long)yearsFocusAnimationStyle;
-(void)setAllPhotosAspectFitFocusPadding:(double)arg1 ;
-(double)allPhotosAspectFillFocusPadding;
-(void)setMonthsFocusAnimationStyle:(long long)arg1 ;
-(BOOL)enableTungstenKeyboardNavigation;
-(void)setShadowYOffset:(double)arg1 ;
-(BOOL)enableTungstenShiftClickSelection;
-(void)setMonthsFocusPadding:(double)arg1 ;
-(BOOL)enableAssetSelectionShortcuts;
-(BOOL)enableShadow;
-(void)setShadowBlurRadius:(double)arg1 ;
-(void)setEnableTungstenFocusEnvironmentSupport:(BOOL)arg1 ;
-(BOOL)enableTungstenFocusEnvironmentSupport;
-(void)setEnableTungstenShiftClickSelection:(BOOL)arg1 ;
-(id)globalFocusAnimationShadow;
-(double)dampingRatio;
-(void)setYearsFocusAnimationStyle:(long long)arg1 ;
-(double)yearsFocusPadding;
-(long long)daysFocusAnimationStyle;
-(void)setEnableAssetSelectionShortcuts:(BOOL)arg1 ;
-(long long)allPhotosAspectFitFocusAnimationStyle;
-(double)detailsViewOverlayAlpha;
-(void)setEnableShadow:(BOOL)arg1 ;
-(void)setAllPhotosAspectFillFocusPadding:(double)arg1 ;
-(long long)monthsFocusAnimationStyle;
-(double)shadowYOffset;
-(void)setDampingRatio:(double)arg1 ;
-(long long)allPhotosAspectFillFocusAnimationStyle;
-(void)setAnimationDuration:(double)arg1 ;
@end

