/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime {

	NSString* _scheduleIdentifier;
	unsigned long long _behavior;

}

@property (nonatomic,copy,readonly) NSString * scheduleIdentifier;              //@synthesize scheduleIdentifier=_scheduleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior;                     //@synthesize behavior=_behavior - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)behavior;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)scheduleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)lifetimeType;
-(id)initWithScheduleIdentifier:(id)arg1 behavior:(unsigned long long)arg2 ;
@end

