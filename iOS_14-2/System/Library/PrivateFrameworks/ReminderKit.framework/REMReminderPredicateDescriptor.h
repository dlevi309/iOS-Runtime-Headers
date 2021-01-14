/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID, NSArray, NSDate, NSString;

@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding> {

	BOOL _completed;
	long long _type;
	REMObjectID* _listID;
	REMObjectID* _parentReminderID;
	NSArray* _objectIDs;
	NSDate* _startingDueDate;
	NSDate* _endingDueDate;
	NSArray* _descriptors;
	NSString* _text;
	long long _textMatching;

}

@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) REMObjectID * listID;                        //@synthesize listID=_listID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentReminderID;              //@synthesize parentReminderID=_parentReminderID - In the implementation block
@property (nonatomic,retain) NSArray * objectIDs;                         //@synthesize objectIDs=_objectIDs - In the implementation block
@property (nonatomic,retain) NSDate * startingDueDate;                    //@synthesize startingDueDate=_startingDueDate - In the implementation block
@property (nonatomic,retain) NSDate * endingDueDate;                      //@synthesize endingDueDate=_endingDueDate - In the implementation block
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSArray * descriptors;                       //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,retain) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long textMatching;                      //@synthesize textMatching=_textMatching - In the implementation block
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
+(id)predicateDescriptorForRemindersWithTitleEquals:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithTitleContains:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithTitleBeginsWith:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithTitleEndsWith:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setDescriptors:(NSArray *)arg1 ;
-(NSArray *)descriptors;
-(void)setObjectIDs:(NSArray *)arg1 ;
-(BOOL)completed;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)objectIDs;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)text;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setParentReminderID:(REMObjectID *)arg1 ;
-(REMObjectID *)parentReminderID;
-(REMObjectID *)listID;
-(void)setListID:(REMObjectID *)arg1 ;
-(NSDate *)endingDueDate;
-(void)setStartingDueDate:(NSDate *)arg1 ;
-(void)setEndingDueDate:(NSDate *)arg1 ;
-(void)setTextMatching:(long long)arg1 ;
-(NSDate *)startingDueDate;
-(long long)textMatching;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

