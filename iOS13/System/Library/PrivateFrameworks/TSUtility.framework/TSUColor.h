/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)blackColor;
+(id)whiteColor;
+(id)grayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)clearColor;
+(id)colorWithPatternImage:(id)arg1 ;
+(id)brownColor;
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
+(id)lightGrayColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)colorWithUIColor:(id)arg1 ;
+(id)randomColor;
+(id)colorWithRGBAComponents:(const double*)arg1 ;
+(id)colorWithPlatformColor:(id)arg1 ;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(NSString *)presetKind;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorRef)CGColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(BOOL)isOpaque;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(double)alphaComponent;
-(id)initWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(double)redComponent;
-(double)greenComponent;
-(double)blueComponent;
-(id)initWithPatternImage:(id)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(double)luminance;
-(double)hueComponent;
-(double)saturationComponent;
-(double)brightnessComponent;
-(id)UIColor;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)grayscaleColor;
-(id)invertedColor;
-(id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2 ;
-(BOOL)isNearlyWhite;
-(BOOL)isAlmostEqualToColor:(id)arg1 ;
-(void)getRGBAComponents:(double*)arg1 ;
-(id)platformColor;
-(id)initWithPlatformColor:(id)arg1 ;
-(double)p_rgbComponentWithIndex:(unsigned char)arg1 ;
-(BOOL)isGrayscaleColor;
-(id)lightenedColorByFactor:(double)arg1 ;
-(id)darkenedColorByFactor:(double)arg1 ;
@end

