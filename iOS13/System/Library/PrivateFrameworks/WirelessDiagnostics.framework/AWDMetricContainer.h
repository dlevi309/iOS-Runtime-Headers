/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
*/


@class PBCodable;

@interface AWDMetricContainer : NSObject {

	PBCodable* _metric;
	unsigned _metricId;

}

@property (nonatomic,retain) PBCodable * metric;               //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) unsigned metricId;              //@synthesize metricId=_metricId - In the implementation block
-(id)initWithMetricId:(unsigned)arg1 ;
-(PBCodable *)metric;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricId;
@end

