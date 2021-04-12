/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternionArray : MDLAnimatedValue {

	unsigned long long _elementCount;

}

@property (assign,nonatomic) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(unsigned long long)elementCount;
-(void)setElementCount:(unsigned long long)arg1 ;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setFloatQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setDoubleQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithFloatQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(void)resetWithDoubleQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
@end

