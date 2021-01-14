/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMAlarmTrigger.h>

@interface REMAlarmVehicleTrigger : REMAlarmTrigger {

	long long _event;

}

@property (assign,nonatomic) long long event;              //@synthesize event=_event - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(id)initWithEvent:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(id)initWithObjectID:(id)arg1 event:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

