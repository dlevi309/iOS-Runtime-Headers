/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _hour;
	unsigned long long _minute;

}

@property (nonatomic,readonly) unsigned long long hour;                //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) unsigned long long minute;              //@synthesize minute=_minute - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultStartTime;
+(id)defaultEndTime;
-(unsigned long long)hour;
-(id)init;
-(unsigned long long)minute;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dateComponents;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(id)_initWithTime:(id)arg1 ;
@end

