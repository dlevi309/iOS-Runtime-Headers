/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
*/


@interface AWDHistogram : NSObject {

	unsigned* histogram;
	unsigned* buckets;
	float* floatBuckets;
	unsigned size;

}
-(void)dealloc;
-(id)array;
-(void)reset;
-(void)addValue:(unsigned)arg1 ;
-(void)print;
-(void)addValue:(unsigned)arg1 withIncrements:(unsigned)arg2 ;
-(id)initWithBuckets:(unsigned*)arg1 size:(unsigned)arg2 ;
-(id)initWithFloatBuckets:(float*)arg1 size:(unsigned)arg2 ;
-(void)addFloatValue:(float)arg1 ;
-(void)reduceFrequencyByFactor:(unsigned)arg1 ;
-(id)newArray;
@end

