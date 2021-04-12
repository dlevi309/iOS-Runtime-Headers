/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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
-(void)dealloc;
-(unsigned long long)count;
-(void)clear;
-(double)max;
-(double)min;
-(double)average;
-(id)initWithWindowSize:(unsigned long long)arg1 ;
-(unsigned long long)windowSize;
-(double)variance;
-(double)sum;
-(void)appendNumber:(double)arg1 ;
@end

