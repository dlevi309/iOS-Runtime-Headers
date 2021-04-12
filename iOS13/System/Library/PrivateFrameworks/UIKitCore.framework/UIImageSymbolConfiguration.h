/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageConfiguration.h>

@protocol UIImageSymbolConfigurationProvider;
@class NSString;

@interface UIImageSymbolConfiguration : UIImageConfiguration {

	double _pointSize;
	SCD_Struct_UI78 _configFlags;
	long long _scale;
	double _customFontPointSizeMultiplier;
	long long _weight;
	NSString* _textStyle;
	id<UIImageSymbolConfigurationProvider> _provider;

}

@property (assign,setter=_setScale:,nonatomic) long long scale;                                                                 //@synthesize scale=_scale - In the implementation block
@property (assign,setter=_setFixedPointSize:,nonatomic) double fixedPointSize; 
@property (assign,setter=_setPointSizeForScalingWithTextStyle:,nonatomic) double pointSizeForScalingWithTextStyle; 
@property (assign,setter=_setPointSizeScaleFactor:,nonatomic) double customFontPointSizeMultiplier;                             //@synthesize customFontPointSizeMultiplier=_customFontPointSizeMultiplier - In the implementation block
@property (assign,setter=_setWeight:,nonatomic) long long weight;                                                               //@synthesize weight=_weight - In the implementation block
@property (setter=_setTextStyle:,nonatomic,copy) NSString * textStyle;                                                          //@synthesize textStyle=_textStyle - In the implementation block
@property (assign,setter=_setProvider:,nonatomic,__weak) id<UIImageSymbolConfigurationProvider> provider;                       //@synthesize provider=_provider - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)configurationWithFont:(id)arg1 ;
+(id)unspecifiedConfiguration;
+(id)configurationWithTextStyle:(id)arg1 scale:(long long)arg2 ;
+(id)configurationWithScale:(long long)arg1 ;
+(id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 scale:(long long)arg3 ;
+(id)configurationWithTextStyle:(id)arg1 ;
+(id)configurationWithFont:(id)arg1 scale:(long long)arg2 ;
+(id)_defaultConfiguration;
+(id)configurationWithWeight:(long long)arg1 ;
+(id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 ;
+(id)configurationWithPointSize:(double)arg1 ;
+(id)configurationFromProvider:(id)arg1 ;
+(id)updatingConfigurationFromProvider:(id)arg1 ;
+(id)configurationFromProvider:(id)arg1 scale:(long long)arg2 ;
+(id)updatingConfigurationFromProvider:(id)arg1 scale:(long long)arg2 ;
+(id)configurationWithConfiguration:(id)arg1 and:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)scale;
-(long long)weight;
-(id<UIImageSymbolConfigurationProvider>)provider;
-(NSString *)textStyle;
-(BOOL)_isUnspecified;
-(BOOL)isEquivalentToConfiguration:(id)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(void)_setScale:(long long)arg1 ;
-(id)_initWithTraitCollection:(id)arg1 ;
-(BOOL)_shouldApplyConfiguration:(id)arg1 ;
-(void)_applyConfigurationValuesTo:(id)arg1 ;
-(BOOL)_hasFixedPointSize;
-(double)fixedPointSize;
-(BOOL)_hasSpecifiedTextStyle;
-(void)_deriveGlyphSize:(long long*)arg1 weight:(long long*)arg2 pointSize:(double*)arg3 ;
-(void)_setFixedPointSize:(double)arg1 ;
-(void)_setWeight:(long long)arg1 ;
-(void)_setTextStyle:(id)arg1 ;
-(void)_setPointSizeForScalingWithTextStyle:(double)arg1 ;
-(void)_setPointSizeScaleFactor:(double)arg1 ;
-(void)_setProvider:(id)arg1 updating:(BOOL)arg2 ;
-(void)_clearSpecificsExceptScale;
-(BOOL)_hasSpecifiedScale;
-(BOOL)_hasSpecifiedWeight;
-(BOOL)_hasSpecifiedProvider;
-(double)pointSizeForScalingWithTextStyle;
-(BOOL)_isUpdatingProvider;
-(id)configurationWithUnspecifiedTextStyle;
-(id)configurationWithUnspecifiedScale;
-(id)configurationWithUnspecifiedWeight;
-(id)configurationWithUnspecifiedPointSizeAndWeight;
-(double)customFontPointSizeMultiplier;
-(void)_setProvider:(id)arg1 ;
-(id)configurationWithoutTextStyle;
-(id)configurationWithoutScale;
-(id)configurationWithoutWeight;
-(id)configurationWithoutPointSizeAndWeight;
-(BOOL)isSimilarToConfiguration:(id)arg1 ;
@end

