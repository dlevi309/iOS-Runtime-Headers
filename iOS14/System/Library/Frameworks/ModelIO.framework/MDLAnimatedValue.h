/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MDLAnimatedValue : NSObject <NSCopying> {

	vector<(anonymous namespace)::TimeSampledVtValue, std::__1::allocator<(anonymous namespace)::TimeSampledVtValue> >* _timeSampledData;
	unsigned long long _interpolation;

}

@property (nonatomic,readonly) unsigned long long precision; 
@property (nonatomic,readonly) unsigned long long timeSampleCount; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (assign,nonatomic) unsigned long long interpolation;                  //@synthesize interpolation=_interpolation - In the implementation block
@property (nonatomic,readonly) NSArray * keyTimes; 
-(unsigned long long)precision;
-(void)clear;
-(BOOL)isAnimated;
-(id)init;
-(NSArray *)keyTimes;
-(double)minimumTime;
-(double)maximumTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)interpolation;
-(void)resetWithAnimatedValue:(id)arg1 ;
-(unsigned long long)timeSampleCount;
-(unsigned long long)getTimes:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(void)setInterpolation:(unsigned long long)arg1 ;
@end

