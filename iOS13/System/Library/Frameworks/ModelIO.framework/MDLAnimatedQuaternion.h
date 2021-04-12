/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternion : MDLAnimatedValue
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(SCD_Struct_MD20)floatQuaternionAtTime:(double)arg1 ;
-(SCD_Struct_MD20)doubleQuaternionAtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloatQuaternion:(SCD_Struct_MD20)arg1 atTime:(double)arg2 ;
-(void)setDoubleQuaternion:(SCD_Struct_MD20)arg1 atTime:(double)arg2 ;
-(void)resetWithFloatQuaternionArray:(const SCD_Struct_MD20*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDoubleQuaternionArray:(const SCD_Struct_MD20*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end

