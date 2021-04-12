/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface OITSUColor : NSObject <NSCopying> {

	CGColorRef mCGColor;
	unsigned long long mColorRGBSpace;

}

@property (readonly) double whiteComponent; 
@property (readonly) double cyanComponent; 
@property (readonly) double magentaComponent; 
@property (readonly) double yellowComponent; 
@property (readonly) double blackComponent; 
@property (readonly) CGColorSpaceRef CGColorSpace; 
@property (readonly) int CGColorSpaceModel; 
@property (readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long colorRGBSpace; 
@property (nonatomic,readonly) double blueComponent; 
@property (nonatomic,readonly) double redComponent; 
@property (nonatomic,readonly) double greenComponent; 
@property (nonatomic,readonly) double alphaComponent; 
@property (nonatomic,readonly) UIColor * UIColor; 
+(id)colorWithHexString:(id)arg1 ;
+(id)redColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)grayColor;
+(id)colorWithCalibratedWhite:(double)arg1 alpha:(double)arg2 ;
+(id)cyanColor;
+(id)blueColor;
+(id)greenColor;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)yellowColor;
+(id)blackColor;
+(id)brownColor;
+(id)purpleColor;
+(id)magentaColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)lightGrayColor;
+(id)clearColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)orangeColor;
+(id)whiteColor;
+(id)stringForColor:(id)arg1 ;
+(id)randomColor;
+(id)colorWithUIColor:(id)arg1 ;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4 ;
+(id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 ;
+(id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithDeviceWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithDeviceHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithDeviceRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithDeviceCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5 ;
+(id)colorWithCatalogName:(id)arg1 colorName:(id)arg2 ;
+(id)colorWithBGR:(unsigned)arg1 ;
+(id)colorWithSystemColorID:(int)arg1 ;
+(id)stringForSystemColorID:(int)arg1 ;
+(id)colorWithCsColour:(const CsColour*)arg1 ;
+(id)colorWithEshColor:(const EshColor*)arg1 ;
+(id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
+(id)colorWithBGRValue:(long long)arg1 ;
+(id)colorWithRGBValue:(long long)arg1 ;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(double)alphaComponent;
-(BOOL)isOpaque;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)luminance;
-(unsigned)toBGR;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(UIColor *)UIColor;
-(void)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(double)whiteComponent;
-(double)greenComponent;
-(id)hexString;
-(id)copy;
-(id)initWithHexString:(id)arg1 ;
-(unsigned long long)colorRGBSpace;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 ;
-(unsigned long long)hash;
-(id)initWithPatternImage:(id)arg1 ;
-(void)set;
-(id)initWithUIColor:(id)arg1 ;
-(double)hueComponent;
-(double)saturationComponent;
-(double)brightnessComponent;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(double)redComponent;
-(BOOL)isBlack;
-(SCD_Struct_OI62)ttColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)blueComponent;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(CGColorSpaceRef)CGColorSpace;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5 ;
-(id)initWithCGColor:(CGColorRef)arg1 colorSpace:(unsigned long long)arg2 ;
-(BOOL)isEqualWithTolerance:(id)arg1 ;
-(BOOL)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2 ;
-(double)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(BOOL)isAlmostEqualToColor:(id)arg1 ;
-(void)getRGBAComponents:(double*)arg1 ;
-(id)grayscaleColor;
-(id)invertedColor;
-(BOOL)isNearlyWhite;
-(BOOL)wantsHighContrastBackgroundForDarkMode:(id)arg1 ;
-(id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(double)p_cmykComponentWithIndex:(unsigned char)arg1 ;
-(double)cyanComponent;
-(double)magentaComponent;
-(double)yellowComponent;
-(double)blackComponent;
-(id)newSolidColoredBitmap:(CGSize)arg1 ;
-(id)solidColoredPngImage;
-(void)getCyan:(double*)arg1 magenta:(double*)arg2 yellow:(double*)arg3 black:(double*)arg4 alpha:(double*)arg5 ;
-(int)CGColorSpaceModel;
-(id)colorWithTintValue:(double)arg1 ;
-(id)colorWithShadeValue:(double)arg1 ;
-(CsColour)csColour;
-(EshColor)eshColor;
-(void)getRGBBytes:(char*)arg1 green:(char*)arg2 blue:(char*)arg3 ;
@end

