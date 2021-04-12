/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <Foundation/NSPredicate.h>

@class NSArray, NSSet;

@interface EKREMReminderPredicate : NSPredicate {

	NSArray* _calendars;
	NSSet* _calendarIdentifierSet;

}
-(id)predicateFormat;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id*)arg3 ;
-(id)remListIDsWithAllLists:(id)arg1 ;
@end

