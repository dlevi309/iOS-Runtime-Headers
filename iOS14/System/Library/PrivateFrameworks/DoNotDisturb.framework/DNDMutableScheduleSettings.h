/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDScheduleSettings.h>

@class DNDScheduleTimePeriod;

@interface DNDMutableScheduleSettings : DNDScheduleSettings

@property (assign,nonatomic) unsigned long long scheduleEnabledSetting; 
@property (nonatomic,copy) DNDScheduleTimePeriod * timePeriod; 
@property (assign,nonatomic) unsigned long long bedtimeBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimePeriod:(DNDScheduleTimePeriod *)arg1 ;
-(void)setScheduleEnabledSetting:(unsigned long long)arg1 ;
-(void)setBedtimeBehaviorEnabledSetting:(unsigned long long)arg1 ;
@end

