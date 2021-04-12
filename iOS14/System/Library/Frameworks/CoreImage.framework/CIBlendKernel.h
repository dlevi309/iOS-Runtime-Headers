/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIColorKernel.h>

@interface CIBlendKernel : CIColorKernel
+(id)hue;
+(id)clear;
+(id)darken;
+(id)divide;
+(id)color;
+(id)lighten;
+(id)hardMix;
+(id)sourceIn;
+(id)multiply;
+(id)subtract;
+(id)saturation;
+(id)overlay;
+(id)sourceOut;
+(id)pinLight;
+(id)colorBurn;
+(id)kernelWithString:(id)arg1 ;
+(id)componentAdd;
+(id)componentMultiply;
+(id)sourceOver;
+(id)kernelWithString:(id)arg1 extentType:(int)arg2 ;
+(id)componentMin;
+(id)componentMax;
+(id)destinationOver;
+(id)destinationIn;
+(id)destinationOut;
+(id)sourceAtop;
+(id)destinationAtop;
+(id)exclusiveOr;
+(id)colorDodge;
+(id)luminosity;
+(id)linearBurn;
+(id)linearDodge;
+(id)vividLight;
+(id)linearLight;
+(id)darkerColor;
+(id)lighterColor;
+(id)plusDarker;
+(id)plusLighter;
+(id)screen;
+(id)hardLight;
+(id)softLight;
+(id)difference;
+(id)exclusion;
+(id)destination;
+(id)source;
-(BOOL)isClearIfForeIsClear;
-(id)initWithString:(id)arg1 ;
-(void)setBlendBehaviorBit:(int)arg1 value:(BOOL)arg2 ;
-(BOOL)isBackIfForeIsClear;
-(BOOL)getBlendBehaviorBit:(int)arg1 ;
-(void)setIsClearIfBackIsClear:(BOOL)arg1 ;
-(BOOL)isForeIfBackIsClear;
-(id)initWithString:(id)arg1 extentType:(int)arg2 ;
-(void)setIsForeIfBackIsClear:(BOOL)arg1 ;
-(void)setIsBackIfForeIsClear:(BOOL)arg1 ;
-(id)applyWithForeground:(id)arg1 background:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)setIsClearIfForeIsClear:(BOOL)arg1 ;
-(BOOL)isClearIfBackIsClear;
-(id)applyWithForeground:(id)arg1 background:(id)arg2 ;
@end

