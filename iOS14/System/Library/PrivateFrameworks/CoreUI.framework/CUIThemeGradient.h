/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/CUIThemeGradientDrawing.h>

@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {

	id gradientEvaluator;
	CGFunctionRef colorShader;
	CGColorSpaceRef colorSpace;
	CGImageRef _gradientImage;

}
-(int)blendMode;
-(id)_initWithGradientEvaluator:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 dither:(BOOL)arg10 ;
-(id)colorLocations;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 options:(unsigned long long)arg3 withContext:(CGContextRef)arg4 ;
-(void)drawFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 options:(unsigned long long)arg3 withContext:(CGContextRef)arg4 ;
-(CGImageRef)_createRadialGradientImageWithWidth:(double)arg1 height:(double)arg2 ;
-(id)interpolatedColorAtLocation:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 ;
-(id)initWithColors:(id)arg1 colorlocations:(id)arg2 colorMidpoints:(id)arg3 opacities:(id)arg4 opacityLocations:(id)arg5 opacityMidpoints:(id)arg6 smoothingCoefficient:(double)arg7 fillColor:(id)arg8 colorSpace:(CGColorSpaceRef)arg9 ;
-(id)opacityLocations;
-(id)colorStops;
-(id)opacityStops;
-(double)smoothingCoefficient;
-(id)fillColor;
-(id)gradientByApplyingEffects:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 angle:(double)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawRadialGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(void)drawAngleGradientInRect:(CGRect)arg1 relativeCenterPosition:(CGPoint)arg2 withContext:(CGContextRef)arg3 ;
-(BOOL)isDithered;
-(void)dealloc;
@end

