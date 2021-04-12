/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAInterVisitMetricPerDevice;

@interface TASingleVisitDetectionMetrics : NSObject {

	TAInterVisitMetricPerDevice* _interVisitMetrics;
	unsigned long long _loiType;

}

@property (nonatomic,readonly) TAInterVisitMetricPerDevice * interVisitMetrics;              //@synthesize interVisitMetrics=_interVisitMetrics - In the implementation block
@property (nonatomic,readonly) unsigned long long loiType;                                   //@synthesize loiType=_loiType - In the implementation block
-(unsigned long long)loiType;
-(id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2 ;
-(TAInterVisitMetricPerDevice *)interVisitMetrics;
@end

