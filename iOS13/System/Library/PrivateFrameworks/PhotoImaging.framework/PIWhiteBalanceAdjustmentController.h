/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)warmFaceKey;
+(id)tintKey;
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
-(void)setTemperature:(double)arg1 ;
-(double)tint;
-(void)setTint:(double)arg1 ;
-(long long)colorType;
-(void)setColorType:(long long)arg1 ;
-(BOOL)warmFace;
-(void)setWarmFace:(BOOL)arg1 ;
-(void)setWarmTint:(double)arg1 ;
-(double)warmTint;
-(void)setWarmTemp:(double)arg1 ;
-(double)warmTemp;
-(void)setGrayQ:(double)arg1 ;
-(double)grayQ;
-(void)setGrayI:(double)arg1 ;
-(double)grayI;
-(void)setGrayY:(double)arg1 ;
-(double)grayY;
-(void)setGrayWarmth:(double)arg1 ;
-(double)grayWarmth;
-(void)setGrayStrength:(double)arg1 ;
-(double)grayStrength;
-(void)setFaceQ:(double)arg1 ;
-(double)faceQ;
-(void)setFaceI:(double)arg1 ;
-(double)faceI;
-(void)setFaceWarmth:(double)arg1 ;
-(double)faceWarmth;
-(void)setFaceStrength:(double)arg1 ;
-(double)faceStrength;
-(BOOL)canHaveAuto;
@end

