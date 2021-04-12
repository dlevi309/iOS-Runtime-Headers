/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings {

	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)settingsForRecord:(id)arg1 ;
+(id)defaultScheduleSettings;
+(id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)replacementObjectForCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(id)makeRecord;
-(id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4 ;
@end

