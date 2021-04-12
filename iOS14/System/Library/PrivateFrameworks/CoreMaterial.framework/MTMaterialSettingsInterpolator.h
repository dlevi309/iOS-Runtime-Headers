/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isZoomEnabled;
-(double)zoom;
-(double)weighting;
-(void)setWeighting:(double)arg1 ;
-(BOOL)isBlurEnabled;
-(id)_colorMatrixColorWithSettings:(id)arg1 configuration:(id)arg2 alpha:(double)arg3 ;
-(BOOL)_isBackdropRequiredWithSettings:(id)arg1 configuration:(id)arg2 ;
-(void)setFinalSettings:(id<MTRecipeMaterialSettingsProviding>)arg1 ;
-(BOOL)isColorMatrixEnabled;
-(double)brightness;
-(id)_filteringProperty:(id)arg1 withSettings:(id)arg2 configuration:(id)arg3 ;
-(void)setInitialConfiguration:(NSString *)arg1 ;
-(id)_tintAlphaWithSettings:(id)arg1 configuration:(id)arg2 ;
-(double)blurRadius;
-(NSArray *)luminanceValues;
-(BOOL)isBackdropRequiredEver;
-(BOOL)_isBackdropRequiredWithSubSettings:(id)arg1 ;
-(void)setFinalConfiguration:(NSString *)arg1 ;
-(BOOL)isBrightnessEnabled;
-(id)_colorWithGetterBlock:(/*^block*/id)arg1 ;
-(id)_luminanceAmountWithSettings:(id)arg1 configuration:(id)arg2 ;
-(BOOL)isTintEnabled;
-(id)_backdropScaleWithSettings:(id)arg1 configuration:(id)arg2 ;
-(CAColorMatrix)colorMatrix;
-(void)setInitialSettings:(id<MTRecipeMaterialSettingsProviding>)arg1 ;
-(id)_blurRadiusWithSettings:(id)arg1 configuration:(id)arg2 ;
-(CGImageRef)variableBlurInputMask;
-(NSString *)finalConfiguration;
-(BOOL)isOverlay;
-(BOOL)isBackdropRequiredFinally;
-(id)description;
-(id)initWithSettings:(id)arg1 configuration:(id)arg2 ;
-(BOOL)isLuminanceEnabled;
-(BOOL)_isTintEnabledWithSettings:(id)arg1 configuration:(id)arg2 ;
-(double)saturation;
-(id)_brightnessWithSettings:(id)arg1 configuration:(id)arg2 ;
-(double)_floatPropertyValueForProperty:(id)arg1 withTransformer:(/*^block*/id)arg2 ;
-(double)backdropScale;
-(double)_floatPropertyValueForProperty:(id)arg1 ;
-(id<MTRecipeMaterialSettingsProviding>)initialSettings;
-(id)_zoomWithSettings:(id)arg1 configuration:(id)arg2 ;
-(double)tintAlpha;
-(void)finalizeWeighting;
-(BOOL)isBlurAtEnd;
-(NSString *)blurInputQuality;
-(id<MTRecipeMaterialSettingsProviding>)finalSettings;
-(id)_luminanceInputValues;
-(BOOL)isSaturationEnabled;
-(id)blurRadiusTransformer;
-(double)luminanceAmount;
-(BOOL)_isPropertyEnabled:(id)arg1 consideringWeighting:(BOOL)arg2 ;
-(id)_saturationWithSettings:(id)arg1 configuration:(id)arg2 ;
-(id)_colorMatrixWithSettings:(id)arg1 configuration:(id)arg2 ;
-(void)setBlurRadiusTransformer:(id)arg1 ;
-(NSString *)initialConfiguration;
-(MTColor *)tintColor;
-(BOOL)isWeightingChanging;
-(id)_propertyValueForProperty:(id)arg1 withTransformer:(/*^block*/id)arg2 ;
-(id)_subSettingsForRecipeSettings:(id)arg1 configuration:(id)arg2 ;
-(BOOL)isBackdropRequiredInitially;
@end

