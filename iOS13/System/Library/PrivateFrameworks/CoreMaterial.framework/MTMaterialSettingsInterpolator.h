/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
*/


@protocol MTRecipeMaterialSettingsProviding;
#import <CoreMaterial/CoreMaterial-Structs.h>
@class NSString, NSArray, MTColor;

@interface MTMaterialSettingsInterpolator : NSObject {

	double _previousWeighting;
	double _weighting;
	id<MTRecipeMaterialSettingsProviding> _finalSettings;
	NSString* _finalConfiguration;
	id<MTRecipeMaterialSettingsProviding> _initialSettings;
	NSString* _initialConfiguration;
	/*^block*/id _blurRadiusTransformer;

}

@property (assign,nonatomic) double weighting;                                                                 //@synthesize weighting=_weighting - In the implementation block
@property (getter=isWeightingChanging,nonatomic,readonly) BOOL weightingChanging; 
@property (nonatomic,retain) id<MTRecipeMaterialSettingsProviding> finalSettings;                              //@synthesize finalSettings=_finalSettings - In the implementation block
@property (nonatomic,copy) NSString * finalConfiguration;                                                      //@synthesize finalConfiguration=_finalConfiguration - In the implementation block
@property (nonatomic,retain) id<MTRecipeMaterialSettingsProviding> initialSettings;                            //@synthesize initialSettings=_initialSettings - In the implementation block
@property (nonatomic,copy) NSString * initialConfiguration;                                                    //@synthesize initialConfiguration=_initialConfiguration - In the implementation block
@property (getter=isBackdropRequiredEver,nonatomic,readonly) BOOL backdropRequiredEver; 
@property (getter=isBackdropRequiredInitially,nonatomic,readonly) BOOL backdropRequiredInitially; 
@property (getter=isBackdropRequiredFinally,nonatomic,readonly) BOOL backdropRequiredFinally; 
@property (getter=isOverlay,nonatomic,readonly) BOOL overlay; 
@property (getter=isBlurEnabled,nonatomic,readonly) BOOL blurEnabled; 
@property (getter=isLuminanceEnabled,nonatomic,readonly) BOOL luminanceEnabled; 
@property (getter=isSaturationEnabled,nonatomic,readonly) BOOL saturationEnabled; 
@property (getter=isBrightnessEnabled,nonatomic,readonly) BOOL brightnessEnabled; 
@property (getter=isColorMatrixEnabled,nonatomic,readonly) BOOL colorMatrixEnabled; 
@property (getter=isTintEnabled,nonatomic,readonly) BOOL tintEnabled; 
@property (getter=isZoomEnabled,nonatomic,readonly) BOOL zoomEnabled; 
@property (nonatomic,readonly) double blurRadius; 
@property (nonatomic,readonly) double luminanceAmount; 
@property (nonatomic,copy,readonly) NSArray * luminanceValues; 
@property (nonatomic,readonly) double saturation; 
@property (nonatomic,readonly) double brightness; 
@property (nonatomic,readonly) CAColorMatrix colorMatrix; 
@property (nonatomic,readonly) double tintAlpha; 
@property (nonatomic,readonly) double zoom; 
@property (nonatomic,readonly) double backdropScale; 
@property (nonatomic,copy,readonly) NSString * blurInputQuality; 
@property (getter=isBlurAtEnd,nonatomic,readonly) BOOL blurAtEnd; 
@property (nonatomic,copy,readonly) MTColor * tintColor; 
@property (nonatomic,copy) id blurRadiusTransformer;                                                           //@synthesize blurRadiusTransformer=_blurRadiusTransformer - In the implementation block
+(id)_filteringProtocolGetterNames;
-(id)description;
-(double)saturation;
-(double)brightness;
-(MTColor *)tintColor;
-(double)zoom;
-(double)blurRadius;
-(void)setWeighting:(double)arg1 ;
-(double)weighting;
-(BOOL)isZoomEnabled;
-(NSString *)finalConfiguration;
-(void)setFinalConfiguration:(NSString *)arg1 ;
-(BOOL)isOverlay;
-(void)setInitialSettings:(id<MTRecipeMaterialSettingsProviding>)arg1 ;
-(void)setInitialConfiguration:(NSString *)arg1 ;
-(void)finalizeWeighting;
-(id<MTRecipeMaterialSettingsProviding>)finalSettings;
-(void)setFinalSettings:(id<MTRecipeMaterialSettingsProviding>)arg1 ;
-(id)initWithSettings:(id)arg1 configuration:(id)arg2 ;
-(BOOL)isBackdropRequiredEver;
-(BOOL)isWeightingChanging;
-(id<MTRecipeMaterialSettingsProviding>)initialSettings;
-(BOOL)isBlurEnabled;
-(NSString *)blurInputQuality;
-(BOOL)isLuminanceEnabled;
-(double)luminanceAmount;
-(NSArray *)luminanceValues;
-(BOOL)isSaturationEnabled;
-(BOOL)isBrightnessEnabled;
-(BOOL)isColorMatrixEnabled;
-(CAColorMatrix)colorMatrix;
-(BOOL)isTintEnabled;
-(BOOL)isBlurAtEnd;
-(double)backdropScale;
-(NSString *)initialConfiguration;
-(id)blurRadiusTransformer;
-(void)setBlurRadiusTransformer:(id)arg1 ;
-(double)tintAlpha;
-(BOOL)_isBackdropRequiredWithSettings:(id)arg1 configuration:(id)arg2 ;
-(BOOL)isBackdropRequiredFinally;
-(BOOL)isBackdropRequiredInitially;
-(BOOL)_isPropertyEnabled:(id)arg1 consideringWeighting:(BOOL)arg2 ;
-(BOOL)_isTintEnabledWithSettings:(id)arg1 configuration:(id)arg2 ;
-(double)_floatPropertyValueForProperty:(id)arg1 withTransformer:(/*^block*/id)arg2 ;
-(double)_floatPropertyValueForProperty:(id)arg1 ;
-(id)_luminanceInputValues;
-(id)_propertyValueForProperty:(id)arg1 withTransformer:(/*^block*/id)arg2 ;
-(id)_subSettingsForRecipeSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_colorMatrixColorWithSettings:(id)arg1 configuration:(id)arg2 alpha:(double)arg3 ;
-(id)_colorWithGetterBlock:(/*^block*/id)arg1 ;
-(id)_tintAlphaWithSettings:(id)arg1 configuration:(id)arg2 ;
-(BOOL)_isBackdropRequiredWithSubSettings:(id)arg1 ;
-(id)_filteringProperty:(id)arg1 withSettings:(id)arg2 configuration:(id)arg3 ;
-(id)_blurRadiusWithSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_luminanceAmountWithSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_saturationWithSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_brightnessWithSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_colorMatrixWithSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_zoomWithSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_backdropScaleWithSettings:(id)arg1 configuration:(id)arg2 ;
@end

