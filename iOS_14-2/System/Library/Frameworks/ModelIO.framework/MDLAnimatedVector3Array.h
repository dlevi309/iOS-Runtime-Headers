/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector3Array : MDLAnimatedValue {

	unsigned long long _elementCount;

}

@property (assign,nonatomic) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
-(unsigned long long)precision;
-(unsigned long long)elementCount;
-(void)setElementCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(void)setFloat3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setDouble3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getFloat3Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getDouble3Array:(1*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithFloat3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(void)resetWithDouble3Array:(const 1*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(unsigned long long)getFloat3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDouble3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
@end

