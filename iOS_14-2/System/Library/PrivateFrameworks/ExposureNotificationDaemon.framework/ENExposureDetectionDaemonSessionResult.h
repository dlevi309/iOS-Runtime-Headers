/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class ENExposureDetectionDaemonSessionStatistics, ENExposureDetectionSummary, ENRegion, NSData, ENExposureClassification;

@interface ENExposureDetectionDaemonSessionResult : NSObject {

	ENExposureDetectionDaemonSessionStatistics* _statistics;
	ENExposureDetectionSummary* _summary;
	ENRegion* _region;
	NSData* _differentialPrivacyRiskParameters;
	NSData* _differentialPrivacyBeaconCount;
	ENExposureClassification* _exposureClassification;
	long long _exposureClassificationStatus;

}

@property (nonatomic,copy) ENExposureDetectionDaemonSessionStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,retain) ENExposureDetectionSummary * summary;                               //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) ENRegion * region;                                                    //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) ENExposureClassification * exposureClassification;                  //@synthesize exposureClassification=_exposureClassification - In the implementation block
@property (assign,nonatomic) long long exposureClassificationStatus;                             //@synthesize exposureClassificationStatus=_exposureClassificationStatus - In the implementation block
@property (nonatomic,copy) NSData * differentialPrivacyRiskParameters;                           //@synthesize differentialPrivacyRiskParameters=_differentialPrivacyRiskParameters - In the implementation block
@property (nonatomic,copy) NSData * differentialPrivacyBeaconCount;                              //@synthesize differentialPrivacyBeaconCount=_differentialPrivacyBeaconCount - In the implementation block
-(ENRegion *)region;
-(void)setRegion:(ENRegion *)arg1 ;
-(ENExposureDetectionDaemonSessionStatistics *)statistics;
-(void)setStatistics:(ENExposureDetectionDaemonSessionStatistics *)arg1 ;
-(ENExposureDetectionSummary *)summary;
-(void)setSummary:(ENExposureDetectionSummary *)arg1 ;
-(void)setDifferentialPrivacyRiskParameters:(NSData *)arg1 ;
-(void)setDifferentialPrivacyBeaconCount:(NSData *)arg1 ;
-(ENExposureClassification *)exposureClassification;
-(void)setExposureClassification:(ENExposureClassification *)arg1 ;
-(void)setExposureClassificationStatus:(long long)arg1 ;
-(NSData *)differentialPrivacyRiskParameters;
-(NSData *)differentialPrivacyBeaconCount;
-(long long)exposureClassificationStatus;
@end

