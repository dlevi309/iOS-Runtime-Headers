/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(id)_deepCopy;
-(id)initWithTimeInterval:(double)arg1 ;
-(BOOL)isTemporal;
-(id)initWithObjectID:(id)arg1 timeInterval:(double)arg2 ;
@end

