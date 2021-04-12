/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hour;
-(unsigned long long)minute;
-(id)dateComponents;
-(id)_initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(id)_initWithTime:(id)arg1 ;
@end

