/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartColorAdjustmentController : PIAdjustmentController {

	SCD_Struct_PI18 _stats;
	SCD_Struct_PI19 _smartSettings;

}

@property (assign,nonatomic) double inputColor; 
@property (assign,nonatomic) double offsetSaturation; 
@property (assign,nonatomic) double offsetContrast; 
@property (assign,nonatomic) double offsetCast; 
@property (nonatomic,copy) NSDictionary * statistics; 
+(id)inputColorKey;
+(id)offsetCastKey;
+(id)attributeCastKey;
+(id)offsetSaturationKey;
+(id)attributeVibrancyKey;
+(id)offsetContrastKey;
+(id)attributeContrastKey;
+(id)statisticsKey;
+(id)inputContrastKey;
+(id)inputCastKey;
+(id)inputSaturationKey;
-(NSDictionary *)statistics;
-(double)inputCast;
-(void)setInputCast:(double)arg1 ;
-(void)setStatistics:(NSDictionary *)arg1 ;
-(double)inputColor;
-(void)setInputColor:(double)arg1 ;
-(double)inputSaturation;
-(void)setInputSaturation:(double)arg1 ;
-(double)inputContrast;
-(void)setInputContrast:(double)arg1 ;
-(id)initWithAdjustment:(id)arg1 ;
-(id)computedSettings;
-(double)offsetContrast;
-(void)setOffsetContrast:(double)arg1 ;
-(void)_updateSettingsWithInputColor:(double)arg1 ;
-(void)setOffsetCast:(double)arg1 ;
-(double)offsetCast;
-(void)setOffsetSaturation:(double)arg1 ;
-(double)offsetSaturation;
@end

