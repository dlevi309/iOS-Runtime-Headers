/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageConfiguration.h>

@protocol UIImageSymbolConfigurationProvider;
@class NSString;

@interface UIImageSymbolConfiguration : UIImageConfiguration {

	double _pointSize;
	SCD_Struct_UI62 _configFlags;
	long long _scale;
	long long _weight;
	NSString* _textStyle;
	id<UIImageSymbolConfigurationProvider> _provider;
	double _customFontPointSizeMultiplier;

}

@property (nonatomic,readonly) long long scale;                                                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) long long weight;                                                    //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy,readonly) NSString * textStyle;                                           //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,__weak,readonly) id<UIImageSymbolConfigurationProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) double customFontPointSizeMultiplier;                                //@synthesize customFontPointSizeMultiplier=_customFontPointSizeMultiplier - In the implementation block
@property (nonatomic,readonly) double pointSizeForScalingWithTextStyle; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)configurationWithScale:(long long)arg1 ;
+(id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 scale:(long long)arg3 ;
+(id)configurationWithPointSize:(double)arg1 ;
+(id)configurationWithTextStyle:(id)arg1 scale:(long long)arg2 ;
+(id)_defaultConfiguration;
+(id)configurationWithFont:(id)arg1 scale:(long long)arg2 ;
+(id)configurationWithTextStyle:(id)arg1 ;
+(id)configurationWithFont:(id)arg1 ;
+(id)configurationWithWeight:(long long)arg1 ;
+(id)unspecifiedConfiguration;
+(id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 ;
-(id)configurationWithoutTextStyle;
-(BOOL)_hasSpecifiedScale;
-(id<UIImageSymbolConfigurationProvider>)provider;
-(long long)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(long long)weight;
-(id)_initWithTraitCollection:(id)arg1 ;
-(id)configurationWithoutWeight;
-(id)description;
-(NSString *)textStyle;
-(BOOL)isEquivalentToConfiguration:(id)arg1 ;
-(void)_applyConfigurationValuesTo:(id)arg1 ;
-(double)customFontPointSizeMultiplier;
-(id)configurationWithoutPointSizeAndWeight;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_deriveGlyphSize:(long long*)arg1 weight:(long long*)arg2 pointSize:(double*)arg3 ;
-(BOOL)_shouldApplyConfiguration:(id)arg1 ;
-(BOOL)_isUnspecified;
-(double)pointSizeForScalingWithTextStyle;
-(BOOL)isSimilarToConfiguration:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(id)configurationWithoutScale;
@end

