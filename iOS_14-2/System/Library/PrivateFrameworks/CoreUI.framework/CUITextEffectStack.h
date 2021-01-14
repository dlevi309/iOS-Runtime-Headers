/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIShapeEffectStack.h>

@interface CUITextEffectStack : CUIShapeEffectStack {

	BOOL _renderHighQuality;

}
-(id)initWithEffectPreset:(id)arg1 ;
-(BOOL)useCoreImageRendering;
-(CGContextRef)newGlyphMaskContextForBounds:(CGRect)arg1 fromContext:(CGContextRef)arg2 withScale:(double)arg3 ;
-(void)drawProcessedMask:(CGContextRef)arg1 atBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 withScale:(double)arg4 ;
-(CGColorRef)newBackgroundPatternColorWithSize:(CGSize)arg1 contentScale:(double)arg2 forContext:(CGContextRef)arg3 ;
-(void)_drawShadow:(SCD_Struct_CU37)arg1 forGlyphs:(const unsigned short*)arg2 inContext:(CGContextRef)arg3 usingFont:(CTFontRef)arg4 withAdvances:(const CGSize*)arg5 count:(unsigned long long)arg6 ;
-(void)_drawShadow:(SCD_Struct_CU37)arg1 usingQuartz:(/*^block*/id)arg2 inContext:(CGContextRef)arg3 ;
-(void)_drawShadow:(SCD_Struct_CU37)arg1 forGlyphs:(const unsigned short*)arg2 inContext:(CGContextRef)arg3 usingFont:(CTFontRef)arg4 atPositions:(const CGPoint*)arg5 count:(unsigned long long)arg6 ;
-(double)effectiveInteriorFillOpacity;
-(void)drawUsingQuartz:(/*^block*/id)arg1 inContext:(CGContextRef)arg2 inBounds:(CGRect)arg3 atScale:(double)arg4 ;
-(void)drawGlyphs:(const unsigned short*)arg1 inContext:(CGContextRef)arg2 usingFont:(CTFontRef)arg3 withAdvances:(const CGSize*)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(CGRect)arg7 atScale:(double)arg8 ;
-(void)drawGlyphs:(const unsigned short*)arg1 inContext:(CGContextRef)arg2 usingFont:(CTFontRef)arg3 atPositions:(const CGPoint*)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(CGRect)arg7 atScale:(double)arg8 ;
@end

