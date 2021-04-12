/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PIAdjustmentController.h>

@interface PIWhiteBalanceAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) long long colorType; 
@property (assign,nonatomic) double faceStrength; 
@property (assign,nonatomic) double faceWarmth; 
@property (assign,nonatomic) double faceI; 
@property (assign,nonatomic) double faceQ; 
@property (assign,nonatomic) double grayStrength; 
@property (assign,nonatomic) double grayWarmth; 
@property (assign,nonatomic) double grayY; 
@property (assign,nonatomic) double grayI; 
@property (assign,nonatomic) double grayQ; 
@property (assign,nonatomic) double temperature; 
@property (assign,nonatomic) double tint; 
@property (assign,nonatomic) double warmTemp; 
@property (assign,nonatomic) double warmTint; 
@property (assign,nonatomic) BOOL warmFace; 
+(long long)colorTypeForString:(id)arg1 ;
+(id)warmTintKey;
+(id)warmTempKey;
+(id)tintKey;
+(id)warmFaceKey;
+(id)temperatureKey;
+(id)grayQKey;
+(id)grayIKey;
+(id)grayYKey;
+(id)grayWarmthKey;
+(id)grayStrengthKey;
+(id)faceQKey;
+(id)faceIKey;
+(id)faceWarmthKey;
+(id)faceStrengthKey;
+(id)colorTypeKey;
+(id)stringForColorType:(long long)arg1 ;
-(double)temperature;
-(BOOL)warmFace;
-(double)grayQ;
-(double)warmTint;
-(double)grayI;
-(double)grayY;
-(void)setGrayQ:(double)arg1 ;
-(double)faceQ;
-(double)faceI;
-(void)setColorType:(long long)arg1 ;
-(double)warmTemp;
-(void)setGrayI:(double)arg1 ;
-(void)setGrayY:(double)arg1 ;
-(BOOL)canHaveAuto;
-(void)setWarmFace:(BOOL)arg1 ;
-(void)setWarmTemp:(double)arg1 ;
-(double)grayWarmth;
-(void)setWarmTint:(double)arg1 ;
-(void)setGrayWarmth:(double)arg1 ;
-(void)setGrayStrength:(double)arg1 ;
-(double)grayStrength;
-(void)setFaceWarmth:(double)arg1 ;
-(void)setFaceStrength:(double)arg1 ;
-(double)faceStrength;
-(void)setTemperature:(double)arg1 ;
-(void)setTint:(double)arg1 ;
-(void)setFaceQ:(double)arg1 ;
-(double)tint;
-(void)setFaceI:(double)arg1 ;
-(long long)colorType;
-(double)faceWarmth;
@end

