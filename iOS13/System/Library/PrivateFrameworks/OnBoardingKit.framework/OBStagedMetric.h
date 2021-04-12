/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


@class PBCodable;

@interface OBStagedMetric : NSObject {

	unsigned _metricId;
	PBCodable* _metric;

}

@property (assign) unsigned metricId;               //@synthesize metricId=_metricId - In the implementation block
@property (retain) PBCodable * metric;              //@synthesize metric=_metric - In the implementation block
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricId;
-(void)commit;
-(void)setMetricId:(unsigned)arg1 ;
-(id)initWithMetricID:(unsigned)arg1 metric:(id)arg2 ;
@end

