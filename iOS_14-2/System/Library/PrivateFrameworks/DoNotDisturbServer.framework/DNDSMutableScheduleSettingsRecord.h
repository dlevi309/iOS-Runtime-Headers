/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSScheduleSettingsRecord.h>

@class NSNumber;

@interface DNDSMutableScheduleSettingsRecord : DNDSScheduleSettingsRecord

@property (nonatomic,copy) NSNumber * lastUpdatedTimestamp; 
@property (nonatomic,copy) NSNumber * scheduleEnabledSetting; 
@property (nonatomic,copy) NSNumber * timePeriodStartTimeHour; 
@property (nonatomic,copy) NSNumber * timePeriodStartTimeMinute; 
@property (nonatomic,copy) NSNumber * timePeriodEndTimeHour; 
@property (nonatomic,copy) NSNumber * timePeriodEndTimeMinute; 
@property (nonatomic,copy) NSNumber * bedtimeBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScheduleEnabledSetting:(NSNumber *)arg1 ;
-(void)setBedtimeBehaviorEnabledSetting:(NSNumber *)arg1 ;
-(void)setLastUpdatedTimestamp:(NSNumber *)arg1 ;
-(void)setTimePeriodStartTimeHour:(NSNumber *)arg1 ;
-(void)setTimePeriodStartTimeMinute:(NSNumber *)arg1 ;
-(void)setTimePeriodEndTimeHour:(NSNumber *)arg1 ;
-(void)setTimePeriodEndTimeMinute:(NSNumber *)arg1 ;
@end

