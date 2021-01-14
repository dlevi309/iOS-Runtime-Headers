/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


#import <CoreChart/CoreChart-Structs.h>
@interface CCVegaJSFont : NSObject {

	CTFontRef _font;

}
+(id)parseCSSFontFamilyList:(id)arg1 ;
+(double)numericWeightFromFontWeight:(id)arg1 ;
+(id)nativeTextStyleFromTextStyle:(id)arg1 ;
+(id)stringWithTextStyleOptions:(id)arg1 ;
+(id)fontMetricsForFont:(CTFontRef)arg1 fontNameOverride:(id)arg2 lineHeightOverride:(double)arg3 ;
+(double)defaultLineHeightForNativeFont:(id)arg1 ;
+(id)cssFontWeightFromNumericWeight:(double)arg1 ;
+(id)fontMetricsForTextStyle:(id)arg1 options:(id)arg2 ;
-(CTFontRef)CTFont;
-(id)fontMetrics;
-(void)dealloc;
-(id)initWithFontFamily:(id)arg1 fontSize:(double)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 fontVariant:(id)arg5 options:(id)arg6 ;
-(SCD_Struct_CC2)measureText:(id)arg1 ;
-(SCD_Struct_CC3)extendedMeasureText:(id)arg1 ;
-(void)drawText:(id)arg1 x:(double)arg2 y:(double)arg3 align:(id)arg4 color:(CGColorRef)arg5 drawingMode:(int)arg6 inContext:(CGContextRef)arg7 ;
-(id)initWithCSSFontString:(id)arg1 options:(id)arg2 ;
-(double)defaultLineHeight;
@end

