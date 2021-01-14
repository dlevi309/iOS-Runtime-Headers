/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCLScheduleTime;

@interface SCLTimeInterval : NSObject <NSCopying, NSSecureCoding> {

	SCLScheduleTime* _startTime;
	SCLScheduleTime* _endTime;

}

@property (nonatomic,copy,readonly) SCLScheduleTime * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) SCLScheduleTime * endTime;                //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)crossesDayBoundary;
-(id)initWithStartTime:(id)arg1 endTime:(id)arg2 ;
-(SCLScheduleTime *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCLScheduleTime *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)intersectsTimeInterval:(id)arg1 ;
-(BOOL)containsScheduleTime:(id)arg1 ;
@end

