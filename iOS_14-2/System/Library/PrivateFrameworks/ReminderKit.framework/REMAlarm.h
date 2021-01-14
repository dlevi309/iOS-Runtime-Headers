/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMAlarmTrigger, REMObjectID, NSDate, NSString;

@interface REMAlarm : NSObject <REMObjectIDProviding, NSSecureCoding> {

	REMAlarmTrigger* _trigger;
	REMObjectID* _objectID;
	NSDate* _acknowledgedDate;
	NSString* _alarmUID;
	NSString* _originalAlarmUID;

}

@property (nonatomic,retain) REMObjectID * objectID;                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) REMAlarmTrigger * trigger;                //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,retain) NSDate * acknowledgedDate;                //@synthesize acknowledgedDate=_acknowledgedDate - In the implementation block
@property (nonatomic,retain) NSString * alarmUID;                      //@synthesize alarmUID=_alarmUID - In the implementation block
@property (nonatomic,retain) NSString * originalAlarmUID;              //@synthesize originalAlarmUID=_originalAlarmUID - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
-(REMAlarmTrigger *)trigger;
-(REMObjectID *)remObjectID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTrigger:(REMAlarmTrigger *)arg1 ;
-(REMObjectID *)objectID;
-(NSString *)alarmUID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(BOOL)isSnooze;
-(id)description;
-(void)setAlarmUID:(NSString *)arg1 ;
-(NSString *)originalAlarmUID;
-(void)setOriginalAlarmUID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAlarm:(id)arg1 objectID:(id)arg2 ;
-(void)setAcknowledgedDate:(NSDate *)arg1 ;
-(NSDate *)acknowledgedDate;
-(id)initWithTrigger:(id)arg1 ;
-(BOOL)isContentEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTrigger:(id)arg1 objectID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isAcknowledged;
-(BOOL)isOriginal;
@end

