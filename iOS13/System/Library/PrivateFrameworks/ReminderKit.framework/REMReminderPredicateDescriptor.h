/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID, NSArray, NSDate;

@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding> {

	BOOL _completed;
	long long _type;
	REMObjectID* _listID;
	REMObjectID* _parentReminderID;
	NSArray* _objectIDs;
	NSDate* _startingDueDate;
	NSDate* _endingDueDate;
	NSArray* _descriptors;

}

@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) REMObjectID * listID;                        //@synthesize listID=_listID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentReminderID;              //@synthesize parentReminderID=_parentReminderID - In the implementation block
@property (nonatomic,retain) NSArray * objectIDs;                         //@synthesize objectIDs=_objectIDs - In the implementation block
@property (nonatomic,retain) NSDate * startingDueDate;                    //@synthesize startingDueDate=_startingDueDate - In the implementation block
@property (nonatomic,retain) NSDate * endingDueDate;                      //@synthesize endingDueDate=_endingDueDate - In the implementation block
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSArray * descriptors;                       //@synthesize descriptors=_descriptors - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)andPredicateDescriptorWithDescriptors:(id)arg1 ;
+(id)orPredicateDescriptorWithDescriptors:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithListID:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithParentReminderID:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithObjectIDs:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithDueDateBetween:(id)arg1 and:(id)arg2 ;
+(id)predicateDescriptorForRemindersWithCompleted:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(NSArray *)descriptors;
-(void)setDescriptors:(NSArray *)arg1 ;
-(NSArray *)objectIDs;
-(REMObjectID *)listID;
-(void)setParentReminderID:(REMObjectID *)arg1 ;
-(REMObjectID *)parentReminderID;
-(void)setListID:(REMObjectID *)arg1 ;
-(void)setObjectIDs:(NSArray *)arg1 ;
-(void)setStartingDueDate:(NSDate *)arg1 ;
-(void)setEndingDueDate:(NSDate *)arg1 ;
-(NSDate *)startingDueDate;
-(NSDate *)endingDueDate;
@end

