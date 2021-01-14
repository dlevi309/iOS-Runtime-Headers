/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMAlarmTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding> {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,copy) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDateComponents *)dateComponents;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(id)initWithObjectID:(id)arg1 dateComponents:(id)arg2 ;
-(id)initWithDateComponents:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDateComponents:(NSDateComponents *)arg1 ;
@end

