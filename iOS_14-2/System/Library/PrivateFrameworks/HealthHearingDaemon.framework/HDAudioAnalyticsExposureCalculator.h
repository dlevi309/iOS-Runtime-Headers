/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class NSDate, HDProfile;

@interface HDAudioAnalyticsExposureCalculator : NSObject {

	NSDate* _targetDate;
	HDProfile* _profile;
	long long _audioExposureType;

}

@property (nonatomic,retain) NSDate * targetDate;                      //@synthesize targetDate=_targetDate - In the implementation block
@property (nonatomic,retain) HDProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) long long audioExposureType;              //@synthesize audioExposureType=_audioExposureType - In the implementation block
-(void)setProfile:(HDProfile *)arg1 ;
-(HDProfile *)profile;
-(void)setTargetDate:(NSDate *)arg1 ;
-(void)setAudioExposureType:(long long)arg1 ;
-(NSDate *)targetDate;
-(long long)audioExposureType;
-(id)initWithTargetDate:(id)arg1 exposureType:(long long)arg2 profile:(id)arg3 ;
-(id)audioExposureResultWithError:(id*)arg1 ;
-(id)notificationCountForRollingDays:(long long)arg1 error:(id*)arg2 ;
-(id)sevenDayDoseForMostRecentNotificationWithError:(id*)arg1 ;
@end

