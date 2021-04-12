/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDScheduleTime;

@interface DNDScheduleTimePeriod : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	DNDScheduleTime* _startTime;
	DNDScheduleTime* _endTime;

}

@property (nonatomic,copy,readonly) DNDScheduleTime * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) DNDScheduleTime * endTime;                //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)_initWithStartTime:(id)arg1 endTime:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(DNDScheduleTime *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DNDScheduleTime *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithPeriod:(id)arg1 ;
@end

