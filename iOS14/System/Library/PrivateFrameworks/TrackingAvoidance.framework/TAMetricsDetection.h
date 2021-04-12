/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/TAMetricsProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TAGeneralDetectionMetrics, TAVisitDetectionMetrics, TASingleVisitDetectionMetrics, TASPAdvertisement, NSString;

@interface TAMetricsDetection : NSObject <TAMetricsProtocol, NSSecureCoding> {

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
+(BOOL)supportsSecureCoding;
+(id)convertTADetectionTypeToString:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TASPAdvertisement *)latestAdvertisement;
-(unsigned long long)detectionType;
-(id)initWithDetectionType:(unsigned long long)arg1 visitDetectionMetrics:(id)arg2 generalDetectionMetrics:(id)arg3 singleVisitDetectionMetrics:(id)arg4 latestAdvertisement:(id)arg5 ;
-(unsigned long long)getMetricsCollectionType;
-(TAVisitDetectionMetrics *)visitDetectionMetrics;
-(TAGeneralDetectionMetrics *)generalDetectionMetrics;
-(TASingleVisitDetectionMetrics *)singleVisitDetectionMetrics;
@end

