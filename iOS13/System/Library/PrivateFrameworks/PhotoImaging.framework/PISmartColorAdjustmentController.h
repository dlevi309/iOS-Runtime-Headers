/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartColorAdjustmentController : PIAdjustmentController {

	SCD_Struct_PI17 _stats;
	SCD_Struct_PI18 _smartSettings;

}

@property (assign,nonatomic) double inputColor; 
@property (assign,nonatomic) double offsetSaturation; 
@property (assign,nonatomic) double offsetContrast; 
@property (assign,nonatomic) double offsetCast; 
@property (nonatomic,copy) NSDictionary * statistics; 
+(id)offsetCastKey;
+(id)attributeCastKey;
+(id)offsetSaturationKey;
+(id)attributeVibrancyKey;
+(id)offsetContrastKey;
+(id)attributeContrastKey;
+(id)inputColorKey;
+(id)statisticsKey;
+(id)inputContrastKey;
+(id)inputCastKey;
+(id)inputSaturationKey;
-(double)inputColor;
-(void)setInputColor:(double)arg1 ;
-(double)inputSaturation;
-(void)setInputSaturation:(double)arg1 ;
-(double)inputContrast;
-(void)setInputContrast:(double)arg1 ;
-(double)inputCast;
-(void)setInputCast:(double)arg1 ;
-(NSDictionary *)statistics;
-(void)setStatistics:(NSDictionary *)arg1 ;
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

