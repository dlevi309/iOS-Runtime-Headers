/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)behavior;
-(unsigned long long)lifetimeType;
-(id)initWithScheduleIdentifier:(id)arg1 behavior:(unsigned long long)arg2 ;
-(NSString *)scheduleIdentifier;
@end

