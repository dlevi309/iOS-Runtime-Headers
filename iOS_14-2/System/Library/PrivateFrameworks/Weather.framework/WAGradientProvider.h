/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


#import <Weather/Weather-Structs.h>
@interface WAGradientProvider : NSObject
-(void)getTopColor:(id*)arg1 middleColor:(id*)arg2 bottomColor:(id*)arg3 gradientStopPoint:(double*)arg4 forCity:(id)arg5 date:(id)arg6 ;
-(SCD_Struct_WA8)mixedGradientForSunheight:(double)arg1 hourAngle:(double)arg2 condition:(long long)arg3 latitude:(float)arg4 ;
-(SCD_Struct_WA7)mixedColorsForIndex:(long long)arg1 solarHeight:(float)arg2 condition:(long long)arg3 latitude:(float)arg4 ;
-(id)gradientForConditionCode:(long long)arg1 isDay:(BOOL)arg2 ;
@end

