/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(unsigned long long)precision;
-(BOOL)isAnimated;
-(NSArray *)keyTimes;
-(double)minimumTime;
-(double)maximumTime;
-(void)resetWithAnimatedValue:(id)arg1 ;
-(unsigned long long)timeSampleCount;
-(unsigned long long)getTimes:(double*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)interpolation;
-(void)setInterpolation:(unsigned long long)arg1 ;
@end

