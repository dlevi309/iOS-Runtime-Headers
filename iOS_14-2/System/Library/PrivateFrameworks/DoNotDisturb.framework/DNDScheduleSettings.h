/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _scheduleEnabledSetting;
	DNDScheduleTimePeriod* _timePeriod;
	unsigned long long _bedtimeBehaviorEnabledSetting;

}

@property (nonatomic,readonly) unsigned long long scheduleEnabledSetting;                     //@synthesize scheduleEnabledSetting=_scheduleEnabledSetting - In the implementation block
@property (nonatomic,copy,readonly) DNDScheduleTimePeriod * timePeriod;                       //@synthesize timePeriod=_timePeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long bedtimeBehaviorEnabledSetting;              //@synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(DNDScheduleTimePeriod *)timePeriod;
-(id)_initWithSettings:(id)arg1 ;
-(unsigned long long)scheduleEnabledSetting;
-(unsigned long long)bedtimeBehaviorEnabledSetting;
-(id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 ;
@end

