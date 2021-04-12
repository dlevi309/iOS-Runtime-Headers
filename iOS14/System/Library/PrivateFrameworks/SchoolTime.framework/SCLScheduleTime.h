/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents;

@interface SCLScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _hour;
	unsigned long long _minute;

}

@property (nonatomic,readonly) unsigned long long hour;                             //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) unsigned long long minute;                           //@synthesize minute=_minute - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * dateComponents; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)hour;
-(long long)compare:(id)arg1 ;
-(id)init;
-(unsigned long long)minute;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDateComponents *)dateComponents;
-(id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithScheduleTime:(id)arg1 ;
@end

