/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DNDScheduleTime *)startTime;
-(DNDScheduleTime *)endTime;
-(id)_initWithPeriod:(id)arg1 ;
-(id)_initWithStartTime:(id)arg1 endTime:(id)arg2 ;
@end

