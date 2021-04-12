/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <CameraEditKit/CEKLightingCubeAppearance.h>

@interface CEKLightingCubeMutableAppearance : CEKLightingCubeAppearance

@property (assign,nonatomic) CGGradientRef background; 
@property (assign,nonatomic) CGColorRef topFill; 
@property (assign,nonatomic) CGGradientRef topGlow; 
@property (assign,nonatomic) CGGradientRef topMask; 
@property (assign,nonatomic) CGColorRef bottomFill; 
@property (assign,nonatomic) CGGradientRef bottomInnerGlow; 
@property (assign,nonatomic) CGGradientRef bottomOuterGlow; 
@property (assign,nonatomic) CGGradientRef bottomMask; 
@property (assign,nonatomic) CGColorRef verticalFillColor; 
@property (assign,nonatomic) double verticalFillBackIntensity; 
@property (assign,nonatomic) double verticalFillFrontIntensity; 
@property (assign,nonatomic) CGGradientRef topOver; 
@property (assign,nonatomic) CGColorRef stroke; 
-(CGGradientRef)background;
-(CGColorRef)stroke;
-(void)setBackground:(CGGradientRef)arg1 ;
-(void)setStroke:(CGColorRef)arg1 ;
-(void)setTopFill:(CGColorRef)arg1 ;
-(void)setTopGlow:(CGGradientRef)arg1 ;
-(void)setTopMask:(CGGradientRef)arg1 ;
-(void)setBottomFill:(CGColorRef)arg1 ;
-(void)setBottomOuterGlow:(CGGradientRef)arg1 ;
-(void)setBottomMask:(CGGradientRef)arg1 ;
-(void)setVerticalFillColor:(CGColorRef)arg1 ;
-(void)setBottomInnerGlow:(CGGradientRef)arg1 ;
-(void)setVerticalFillFrontIntensity:(double)arg1 ;
-(void)setVerticalFillBackIntensity:(double)arg1 ;
-(CGColorRef)verticalFillColor;
-(CGGradientRef)topGlow;
-(CGColorRef)bottomFill;
-(CGGradientRef)bottomOuterGlow;
-(double)verticalFillFrontIntensity;
-(double)verticalFillBackIntensity;
-(CGGradientRef)topMask;
-(CGColorRef)topFill;
-(CGGradientRef)bottomMask;
-(CGGradientRef)bottomInnerGlow;
-(CGGradientRef)topOver;
-(void)setTopOver:(CGGradientRef)arg1 ;
@end

