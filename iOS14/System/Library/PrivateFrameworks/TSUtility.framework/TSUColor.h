/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSSPreset.h>
#import <TSUtility/TSSPresetSource.h>
#import <TSUtility/TSSThemeAsset.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSUColor : NSObject <TSSPreset, TSSPresetSource, TSSThemeAsset, NSCopying> {

	CGColorRef mCGColor;

}

@property (nonatomic,readonly) NSString * presetKind; 
@property (readonly) CGColorRef CGColor; 
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 ;
+(id)p_defaultPresetColors:(int)arg1 ;
+(id)highContrastBackgroundColorForPreset:(id)arg1 ;
+(id)redColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)grayColor;
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
+(id)orangeColor;
+(id)whiteColor;
+(id)randomColor;
+(id)colorWithUIColor:(id)arg1 ;
+(id)colorWithRGBAComponents:(const double*)arg1 ;
+(id)colorWithPlatformColor:(id)arg1 ;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(NSString *)presetKind;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(double)alphaComponent;
-(BOOL)isOpaque;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)luminance;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(id)UIColor;
-(double)greenComponent;
-(unsigned long long)hash;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(double)hueComponent;
-(double)saturationComponent;
-(double)brightnessComponent;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(double)redComponent;
-(id)initWithPlatformColor:(id)arg1 ;
-(id)platformColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)blueComponent;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(double)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(BOOL)isAlmostEqualToColor:(id)arg1 ;
-(void)getRGBAComponents:(double*)arg1 ;
-(id)grayscaleColor;
-(id)invertedColor;
-(BOOL)isNearlyWhite;
-(id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)isGrayscaleColor;
-(id)lightenedColorByFactor:(double)arg1 ;
-(id)darkenedColorByFactor:(double)arg1 ;
@end

