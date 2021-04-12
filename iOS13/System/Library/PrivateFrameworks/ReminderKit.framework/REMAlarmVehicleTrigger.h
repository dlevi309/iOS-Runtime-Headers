/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMAlarmTrigger.h>

@interface REMAlarmVehicleTrigger : REMAlarmTrigger {

	long long _event;

}

@property (assign,nonatomic) long long event;              //@synthesize event=_event - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)event;
-(void)setEvent:(long long)arg1 ;
-(id)initWithEvent:(long long)arg1 ;
-(id)_deepCopy;
-(BOOL)isTemporal;
-(id)initWithObjectID:(id)arg1 event:(long long)arg2 ;
@end

