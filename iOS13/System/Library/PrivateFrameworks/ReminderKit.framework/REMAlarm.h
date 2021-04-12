/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(REMObjectID *)objectID;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(REMAlarmTrigger *)trigger;
-(void)setTrigger:(REMAlarmTrigger *)arg1 ;
-(BOOL)isOriginal;
-(void)setAlarmUID:(NSString *)arg1 ;
-(void)setAcknowledgedDate:(NSDate *)arg1 ;
-(void)setOriginalAlarmUID:(NSString *)arg1 ;
-(id)initWithAlarm:(id)arg1 objectID:(id)arg2 ;
-(NSString *)alarmUID;
-(NSString *)originalAlarmUID;
-(id)initWithTrigger:(id)arg1 ;
-(REMObjectID *)remObjectID;
-(BOOL)isContentEqual:(id)arg1 ;
-(id)initWithTrigger:(id)arg1 objectID:(id)arg2 ;
-(NSDate *)acknowledgedDate;
-(BOOL)isAcknowledged;
-(BOOL)isSnooze;
@end

