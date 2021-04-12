/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIColorKernel.h>

@interface CIBlendKernel : CIColorKernel
+(id)clear;
+(id)source;
+(id)kernelWithString:(id)arg1 ;
+(id)kernelWithString:(id)arg1 extentType:(int)arg2 ;
+(id)componentAdd;
+(id)componentMultiply;
+(id)componentMin;
+(id)componentMax;
+(id)destination;
+(id)sourceOver;
+(id)destinationOver;
+(id)sourceIn;
+(id)destinationIn;
+(id)sourceOut;
+(id)destinationOut;
+(id)sourceAtop;
+(id)destinationAtop;
+(id)exclusiveOr;
+(id)multiply;
+(id)screen;
+(id)overlay;
+(id)darken;
+(id)lighten;
+(id)colorDodge;
+(id)colorBurn;
+(id)hardLight;
+(id)softLight;
+(id)difference;
+(id)exclusion;
+(id)hue;
+(id)saturation;
+(id)color;
+(id)luminosity;
+(id)subtract;
+(id)divide;
+(id)linearBurn;
+(id)linearDodge;
+(id)vividLight;
+(id)linearLight;
+(id)pinLight;
+(id)hardMix;
+(id)darkerColor;
+(id)lighterColor;
+(id)plusDarker;
+(id)plusLighter;
-(id)initWithString:(id)arg1 ;
-(void)setIsForeIfBackIsClear:(BOOL)arg1 ;
-(void)setIsClearIfForeIsClear:(BOOL)arg1 ;
-(void)setIsClearIfBackIsClear:(BOOL)arg1 ;
-(void)setIsBackIfForeIsClear:(BOOL)arg1 ;
-(id)applyWithForeground:(id)arg1 background:(id)arg2 ;
-(id)initWithString:(id)arg1 extentType:(int)arg2 ;
-(BOOL)getBlendBehaviorBit:(int)arg1 ;
-(void)setBlendBehaviorBit:(int)arg1 value:(BOOL)arg2 ;
-(BOOL)isBackIfForeIsClear;
-(BOOL)isForeIfBackIsClear;
-(BOOL)isClearIfForeIsClear;
-(BOOL)isClearIfBackIsClear;
-(id)applyWithForeground:(id)arg1 background:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
@end

