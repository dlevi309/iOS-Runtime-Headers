/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIBlurEffect.h>

@class UIColor;

@interface _UICustomBlurEffect : UIBlurEffect

@property (assign,nonatomic) double grayscaleTintLevel; 
@property (assign,nonatomic) double grayscaleTintAlpha; 
@property (assign,nonatomic) BOOL lightenGrayscaleWithSourceOver; 
@property (nonatomic,retain) UIColor * colorTint; 
@property (assign,nonatomic) double colorTintAlpha; 
@property (assign,nonatomic) double colorBurnTintLevel; 
@property (assign,nonatomic) double colorBurnTintAlpha; 
@property (assign,nonatomic) double darkeningTintAlpha; 
@property (assign,nonatomic) double darkeningTintHue; 
@property (assign,nonatomic) double darkeningTintSaturation; 
@property (assign,nonatomic) BOOL darkenWithSourceOver; 
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double saturationDeltaFactor; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double zoom; 
+(id)effectWithStyle:(long long)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(double)blurRadius;
-(double)scale;
-(double)saturationDeltaFactor;
-(UIColor *)colorTint;
-(void)setLightenGrayscaleWithSourceOver:(BOOL)arg1 ;
-(void)setScale:(double)arg1 ;
-(BOOL)lightenGrayscaleWithSourceOver;
-(void)setColorTint:(UIColor *)arg1 ;
-(double)colorTintAlpha;
-(void)setDarkeningTintSaturation:(double)arg1 ;
-(id)effectSettings;
-(double)darkeningTintHue;
-(void)setDarkenWithSourceOver:(BOOL)arg1 ;
-(void)setDarkeningTintHue:(double)arg1 ;
-(double)grayscaleTintLevel;
-(double)colorBurnTintLevel;
-(BOOL)darkenWithSourceOver;
-(double)darkeningTintSaturation;
-(void)setGrayscaleTintLevel:(double)arg1 ;
-(void)setGrayscaleTintAlpha:(double)arg1 ;
-(void)setDarkeningTintAlpha:(double)arg1 ;
-(void)setColorBurnTintLevel:(double)arg1 ;
-(void)setColorBurnTintAlpha:(double)arg1 ;
-(void)setColorTintAlpha:(double)arg1 ;
-(double)colorBurnTintAlpha;
-(double)darkeningTintAlpha;
-(double)grayscaleTintAlpha;
@end

