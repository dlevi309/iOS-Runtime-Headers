/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSSettingsRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (nonatomic,copy) DNDSBehaviorSettingsRecord * behaviorSettings; 
@property (nonatomic,copy) DNDSBypassSettingsRecord * phoneCallBypassSettings; 
@property (nonatomic,copy) DNDSScheduleSettingsRecord * scheduleSettings; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBehaviorSettings:(DNDSBehaviorSettingsRecord *)arg1 ;
-(void)setPhoneCallBypassSettings:(DNDSBypassSettingsRecord *)arg1 ;
-(void)setScheduleSettings:(DNDSScheduleSettingsRecord *)arg1 ;
@end

