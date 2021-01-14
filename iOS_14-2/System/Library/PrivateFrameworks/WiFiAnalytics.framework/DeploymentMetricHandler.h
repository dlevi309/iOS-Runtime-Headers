/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class AnalyticsStoreMOHandler;

@interface DeploymentMetricHandler : NSObject {

	BOOL _isInternalInstall;
	AnalyticsStoreMOHandler* _storeMOHandler;

}

@property (nonatomic,retain) AnalyticsStoreMOHandler * storeMOHandler;              //@synthesize storeMOHandler=_storeMOHandler - In the implementation block
@property (assign,nonatomic) BOOL isInternalInstall;                                //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
-(void)setIsInternalInstall:(BOOL)arg1 ;
-(void)setStoreMOHandler:(AnalyticsStoreMOHandler *)arg1 ;
-(AnalyticsStoreMOHandler *)storeMOHandler;
-(id)initWithAnalyticsStore:(id)arg1 ;
-(BOOL)isInternalInstall;
-(void)networkDeploymentMetricCheckAndSubmit:(id)arg1 deploymentUuid:(id)arg2 interval:(unsigned long long)arg3 ;
-(BOOL)metricNeedsSubmission:(id)arg1 deploymentUuid:(id)arg2 interval:(unsigned long long)arg3 ;
-(BOOL)appendNetworkAnalyticsToMetric:(id)arg1 ssid:(id)arg2 deploymentUuid:(id)arg3 maxAgeInDays:(unsigned long long)arg4 ;
-(void)submitBssAnalyticsMetrics:(id)arg1 deploymentUuid:(id)arg2 stitchIndex:(long long)arg3 ;
-(id)copyBssidsForDeployment:(id)arg1 deploymentUuid:(id)arg2 ;
-(BOOL)appendBssAnalyticsToMetric:(id)arg1 bssMo:(id)arg2 maxAgeInDays:(unsigned long long)arg3 ;
-(unsigned long long)dwellTimeInBand:(id)arg1 bandIs24:(BOOL)arg2 bssid:(id)arg3 maxAgeInDays:(unsigned long long)arg4 ;
-(unsigned long long)numBssInBand:(id)arg1 bandIs24:(BOOL)arg2 ;
-(void)appendJoinsSummaryToMetric:(id)arg1 ssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3 ;
-(id)roamsSummary:(id)arg1 bssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3 ;
-(id)leavesSummary:(id)arg1 bssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3 ;
@end

