/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCNetworkEventStats : NSObject {

	unsigned long long _count;
	unsigned long long _mean;
	unsigned long long _median;
	unsigned long long _percentile95;
	unsigned long long _min;
	unsigned long long _max;

}

@property (assign,nonatomic) unsigned long long count;                     //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) unsigned long long median;                    //@synthesize median=_median - In the implementation block
@property (assign,nonatomic) unsigned long long percentile95;              //@synthesize percentile95=_percentile95 - In the implementation block
@property (assign,nonatomic) unsigned long long min;                       //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) unsigned long long max;                       //@synthesize max=_max - In the implementation block
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)max;
-(void)setMin:(unsigned long long)arg1 ;
-(unsigned long long)min;
-(id)initWithValues:(id)arg1 ;
-(unsigned long long)mean;
-(void)setMean:(unsigned long long)arg1 ;
-(unsigned long long)median;
-(void)setMedian:(unsigned long long)arg1 ;
-(unsigned long long)percentile95;
-(void)setPercentile95:(unsigned long long)arg1 ;
@end

