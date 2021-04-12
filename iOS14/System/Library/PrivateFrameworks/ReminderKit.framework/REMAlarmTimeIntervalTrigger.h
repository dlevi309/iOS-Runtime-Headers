/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMAlarmTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding> {

	double _timeInterval;

}

@property (assign,nonatomic) double timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(void)setTimeInterval:(double)arg1 ;
-(double)timeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(id)initWithTimeInterval:(double)arg1 ;
-(id)initWithObjectID:(id)arg1 timeInterval:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

