/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMReminder, REMAssignment, NSSet;

@interface REMReminderAssignmentContext : NSObject {

	REMReminder* _reminder;

}

@property (assign,nonatomic,__weak) REMReminder * reminder;                    //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) REMAssignment * currentAssignment; 
@property (nonatomic,readonly) NSSet * assignments; 
-(id)initWithReminder:(id)arg1 ;
-(void)setReminder:(REMReminder *)arg1 ;
-(NSSet *)assignments;
-(REMReminder *)reminder;
-(REMAssignment *)currentAssignment;
@end

