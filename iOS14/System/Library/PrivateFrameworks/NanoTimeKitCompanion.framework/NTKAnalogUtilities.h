/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface NTKAnalogUtilities : NSObject
+(CGSize)sceneSizeForDevice:(id)arg1 ;
+(CGSize)dialSizeForDevice:(id)arg1 ;
+(id)labelsForDevice:(id)arg1 faceStyle:(long long)arg2 count:(unsigned)arg3 start:(unsigned)arg4 multiple:(unsigned)arg5 repeat:(unsigned)arg6 fontSize:(double)arg7 radius:(double)arg8 paddedWithZeroes:(BOOL)arg9 ;
+(id)labelsForDevice:(id)arg1 withCount:(unsigned)arg2 start:(unsigned)arg3 multiple:(unsigned)arg4 repeat:(unsigned)arg5 font:(long long)arg6 modifier:(id)arg7 center:(CGPoint)arg8 radius:(double)arg9 paddedWithZeros:(BOOL)arg10 filter:(BOOL)arg11 ;
+(void)colorizeLabels:(id)arg1 color:(id)arg2 ;
+(id)circularMaskShader;
+(BOOL)shouldPreloadTextures;
+(void)preloadTexturesForDevice:(id)arg1 ;
+(void)fadeNodes:(id)arg1 alpha:(double)arg2 except:(id)arg3 ;
+(void)scaleNodes:(id)arg1 scale:(double)arg2 andResetNodesAtIndices:(id)arg3 ;
+(void)updateNodes:(id)arg1 forDevice:(id)arg2 offset:(unsigned long long)arg3 center:(CGPoint)arg4 radius:(double)arg5 angleMultiplier:(double)arg6 scale:(double)arg7 rotate:(BOOL)arg8 round:(BOOL)arg9 ;
@end

