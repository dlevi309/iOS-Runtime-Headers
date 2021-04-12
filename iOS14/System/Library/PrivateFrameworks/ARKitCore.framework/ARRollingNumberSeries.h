/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@interface ARRollingNumberSeries : NSObject {

	double* _series;
	unsigned long long _currentIndex;
	double _sumVariance;
	unsigned long long _windowSize;
	unsigned long long _count;
	double _sum;
	double _average;
	double _variance;

}

@property (nonatomic,readonly) unsigned long long windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double sum;                                 //@synthesize sum=_sum - In the implementation block
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) double min; 
@property (nonatomic,readonly) double average;                             //@synthesize average=_average - In the implementation block
@property (nonatomic,readonly) double variance;                            //@synthesize variance=_variance - In the implementation block
-(double)sum;
-(void)clear;
-(double)average;
-(unsigned long long)windowSize;
-(unsigned long long)count;
-(double)min;
-(id)initWithWindowSize:(unsigned long long)arg1 ;
-(double)variance;
-(double)max;
-(void)dealloc;
-(void)appendNumber:(double)arg1 ;
@end

