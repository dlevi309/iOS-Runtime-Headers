/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings {

	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultScheduleSettings;
+(id)settingsForRecord:(id)arg1 ;
+(id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)description;
-(NSDate *)creationDate;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)makeRecord;
-(id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4 ;
@end

