/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
*/


@interface AWDHistogram : NSObject {

	unsigned* histogram;
	unsigned* buckets;
	float* floatBuckets;
	unsigned size;

}
-(void)addValue:(unsigned)arg1 ;
-(id)array;
-(void)reset;
-(void)print;
-(void)dealloc;
-(void)addValue:(unsigned)arg1 withIncrements:(unsigned)arg2 ;
-(id)initWithBuckets:(unsigned*)arg1 size:(unsigned)arg2 ;
-(id)initWithFloatBuckets:(float*)arg1 size:(unsigned)arg2 ;
-(void)addFloatValue:(float)arg1 ;
-(void)reduceFrequencyByFactor:(unsigned)arg1 ;
-(id)newArray;
@end

