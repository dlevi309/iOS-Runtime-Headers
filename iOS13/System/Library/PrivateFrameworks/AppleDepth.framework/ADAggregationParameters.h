/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@interface ADAggregationParameters : NSObject {

	unsigned _aggregationSize;
	double _maxPointCloudAge;

}

@property (assign,nonatomic) unsigned aggregationSize;              //@synthesize aggregationSize=_aggregationSize - In the implementation block
@property (assign,nonatomic) double maxPointCloudAge;               //@synthesize maxPointCloudAge=_maxPointCloudAge - In the implementation block
-(void)setAggregationSize:(unsigned)arg1 ;
-(void)setMaxPointCloudAge:(double)arg1 ;
-(unsigned)aggregationSize;
-(double)maxPointCloudAge;
@end

