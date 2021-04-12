/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TAMetricsProtocol.h>

@class TAGeneralDetectionMetrics, TAVisitDetectionMetrics, TASingleVisitDetectionMetrics, TASPAdvertisement, NSString;

@interface TAMetricsDetection : NSObject <TAMetricsProtocol> {

	unsigned long long _detectionType;
	TAGeneralDetectionMetrics* _generalDetectionMetrics;
	TAVisitDetectionMetrics* _visitDetectionMetrics;
	TASingleVisitDetectionMetrics* _singleVisitDetectionMetrics;
	TASPAdvertisement* _latestAdvertisement;

}

@property (nonatomic,readonly) unsigned long long detectionType;                                         //@synthesize detectionType=_detectionType - In the implementation block
@property (nonatomic,readonly) TAGeneralDetectionMetrics * generalDetectionMetrics;                      //@synthesize generalDetectionMetrics=_generalDetectionMetrics - In the implementation block
@property (nonatomic,readonly) TAVisitDetectionMetrics * visitDetectionMetrics;                          //@synthesize visitDetectionMetrics=_visitDetectionMetrics - In the implementation block
@property (nonatomic,readonly) TASingleVisitDetectionMetrics * singleVisitDetectionMetrics;              //@synthesize singleVisitDetectionMetrics=_singleVisitDetectionMetrics - In the implementation block
@property (nonatomic,readonly) TASPAdvertisement * latestAdvertisement;                                  //@synthesize latestAdvertisement=_latestAdvertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned long long)getMetricsCollectionType;
-(TASPAdvertisement *)latestAdvertisement;
-(id)initWithDetectionType:(unsigned long long)arg1 visitDetectionMetrics:(id)arg2 generalDetectionMetrics:(id)arg3 singleVisitDetectionMetrics:(id)arg4 latestAdvertisement:(id)arg5 ;
-(unsigned long long)detectionType;
-(TAGeneralDetectionMetrics *)generalDetectionMetrics;
-(TAVisitDetectionMetrics *)visitDetectionMetrics;
-(TASingleVisitDetectionMetrics *)singleVisitDetectionMetrics;
@end

