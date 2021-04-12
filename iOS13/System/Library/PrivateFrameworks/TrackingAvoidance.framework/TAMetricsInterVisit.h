/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TAMetricsProtocol.h>

@class TAInterVisitMetricPerDevice, TASPAdvertisement, NSString;

@interface TAMetricsInterVisit : NSObject <TAMetricsProtocol> {

	TAInterVisitMetricPerDevice* _currentInterVisitMetric;
	TAInterVisitMetricPerDevice* _totalInterVisitMetric;

}

@property (nonatomic,readonly) TAInterVisitMetricPerDevice * currentInterVisitMetric;              //@synthesize currentInterVisitMetric=_currentInterVisitMetric - In the implementation block
@property (nonatomic,readonly) TAInterVisitMetricPerDevice * totalInterVisitMetric;                //@synthesize totalInterVisitMetric=_totalInterVisitMetric - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)descriptionDictionary;
-(unsigned long long)getMetricsCollectionType;
-(TASPAdvertisement *)latestAdvertisement;
-(TAInterVisitMetricPerDevice *)currentInterVisitMetric;
-(TAInterVisitMetricPerDevice *)totalInterVisitMetric;
@end

