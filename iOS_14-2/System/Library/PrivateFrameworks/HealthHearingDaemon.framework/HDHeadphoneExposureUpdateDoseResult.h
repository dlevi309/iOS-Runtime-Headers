/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class HDHeadphoneExposureStatisticsResult;

@interface HDHeadphoneExposureUpdateDoseResult : NSObject {

	HDHeadphoneExposureStatisticsResult* _statistics;

}

@property (nonatomic,retain) HDHeadphoneExposureStatisticsResult * statistics;              //@synthesize statistics=_statistics - In the implementation block
+(id)resultForNoChange;
+(id)resultForUpdate:(id)arg1 ;
-(HDHeadphoneExposureStatisticsResult *)statistics;
-(void)setStatistics:(HDHeadphoneExposureStatisticsResult *)arg1 ;
-(id)_initWithStatistics:(id)arg1 ;
@end

