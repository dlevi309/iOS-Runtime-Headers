/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)descriptionDictionary;
-(id)init;
-(NSString *)description;
-(TASPAdvertisement *)latestAdvertisement;
-(unsigned long long)getMetricsCollectionType;
-(TAInterVisitMetricPerDevice *)currentInterVisitMetric;
-(TAInterVisitMetricPerDevice *)totalInterVisitMetric;
@end

