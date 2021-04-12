/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/

#import <RenderBox/RenderBox-Structs.h>
#import <RenderBox/RBDisplayList.h>

@interface RBXMLRecorder_DisplayList : RBDisplayList {

	Tree* _tree;

}
-(void)setCTM:(CGAffineTransform)arg1 ;
-(void)save;
-(void)restore;
-(void)concat:(CGAffineTransform)arg1 ;
-(void)rotateBy:(double)arg1 ;
-(void)addProjectionStyleWithArray:(float)arg1 ;
-(void)addShadowStyleWithRadius:(double)arg1 offset:(CGSize)arg2 color:(SCD_Struct_RB31)arg3 mode:(int)arg4 ;
-(void)drawDisplayList:(id)arg1 ;
-(void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2 ;
-(void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2 ;
-(void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4 ;
-(void)clipShape:(id)arg1 mode:(int)arg2 ;
-(void)translateByX:(double)arg1 Y:(double)arg2 ;
-(void)beginLayerWithColorSpace:(int)arg1 flags:(unsigned)arg2 ;
-(void)addBlurFilterWithRadius:(double)arg1 colorSpace:(int)arg2 flags:(unsigned)arg3 ;
-(void)addColorMatrixFilterWithArray:(float)arg1 colorSpace:(int)arg2 ;
-(void)addColorMultiplyFilterWithColor:(SCD_Struct_RB31)arg1 colorSpace:(int)arg2 ;
-(void)addHueRotationFilterWithAngle:(double)arg1 colorSpace:(int)arg2 ;
-(void)addSaturationFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addBrightnessFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addContrastFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addLuminanceToAlphaFilterWithColorSpace:(int)arg1 ;
-(void)addColorInvertFilterWithColorSpace:(int)arg1 ;
-(void)addGrayscaleFilterWithAmount:(float)arg1 colorSpace:(int)arg2 ;
-(void)addColorMonochromeFilterWithAmount:(float)arg1 color:(SCD_Struct_RB31)arg2 bias:(float)arg3 colorSpace:(int)arg4 ;
-(void)scaleByX:(double)arg1 Y:(double)arg2 ;
-(id)xmlDescription;
@end

