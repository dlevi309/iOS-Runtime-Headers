/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminderChangeItem, NSMutableSet, REMAssignment, NSSet;

@interface REMReminderAssignmentContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;
	NSMutableSet* _mutableAssignments;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableAssignments;                       //@synthesize mutableAssignments=_mutableAssignments - In the implementation block
@property (nonatomic,readonly) REMAssignment * currentAssignment; 
@property (nonatomic,readonly) NSSet * assignments; 
-(NSSet *)assignments;
-(void)addAssignment:(id)arg1 ;
-(REMReminderChangeItem *)reminderChangeItem;
-(REMAssignment *)currentAssignment;
-(id)addAssignmentWithAssigneeID:(id)arg1 originatorID:(id)arg2 status:(long long)arg3 ;
-(void)removeAllAssignments;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
-(id)addAssignmentWithAssignee:(id)arg1 originator:(id)arg2 status:(long long)arg3 ;
-(void)removeAssignment:(id)arg1 ;
-(NSMutableSet *)mutableAssignments;
-(void)setMutableAssignments:(NSMutableSet *)arg1 ;
@end

