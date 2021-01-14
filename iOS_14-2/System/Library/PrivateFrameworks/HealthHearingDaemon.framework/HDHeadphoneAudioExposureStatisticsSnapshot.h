/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class HKStatistics, NSDate;

@interface HDHeadphoneAudioExposureStatisticsSnapshot : NSObject {

	BOOL _includesPrunableData;
	HKStatistics* _statistics;
	NSDate* _previousNotificationDate;

}

@property (nonatomic,readonly) HKStatistics * statistics;                      //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,readonly) BOOL includesPrunableData;                      //@synthesize includesPrunableData=_includesPrunableData - In the implementation block
@property (nonatomic,readonly) NSDate * previousNotificationDate;              //@synthesize previousNotificationDate=_previousNotificationDate - In the implementation block
-(HKStatistics *)statistics;
-(NSDate *)previousNotificationDate;
-(id)initWithStatistics:(id)arg1 includesPrunableData:(BOOL)arg2 previousNotificationDate:(id)arg3 ;
-(BOOL)includesPrunableData;
-(id)unitTesting_hearingSevenDayDoseCategorySampleWithNow:(id)arg1 error:(id*)arg2 ;
@end

