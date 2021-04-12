/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKREMReminderPredicate.h>

@class NSDate;

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {

	NSDate* _start;
	NSDate* _end;
	BOOL _completed;

}
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)initForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3 ;
-(id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id*)arg3 ;
@end

