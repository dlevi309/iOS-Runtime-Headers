/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedScalarArray : MDLAnimatedValue {

	unsigned long long _elementCount;

}

@property (assign,nonatomic) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
-(unsigned long long)precision;
-(unsigned long long)elementCount;
-(void)setElementCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloatArray:(const float*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setDoubleArray:(const double*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getFloatArray:(float*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithFloatArray:(const float*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(void)resetWithDoubleArray:(const double*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(unsigned long long)getDoubleArray:(double*)arg1 maxCount:(unsigned long long)arg2 ;
@end

