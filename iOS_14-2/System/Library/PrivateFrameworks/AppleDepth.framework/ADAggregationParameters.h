/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


@interface ADAggregationParameters : NSObject {

	unsigned _aggregationSize;
	double _maxPointCloudAge;

}

@property (assign,nonatomic) unsigned aggregationSize;              //@synthesize aggregationSize=_aggregationSize - In the implementation block
@property (assign,nonatomic) double maxPointCloudAge;               //@synthesize maxPointCloudAge=_maxPointCloudAge - In the implementation block
-(BOOL)ar_isEqualToParameters:(id)arg1 ;
-(void)setAggregationSize:(unsigned)arg1 ;
-(void)setMaxPointCloudAge:(double)arg1 ;
-(unsigned)aggregationSize;
-(double)maxPointCloudAge;
@end

