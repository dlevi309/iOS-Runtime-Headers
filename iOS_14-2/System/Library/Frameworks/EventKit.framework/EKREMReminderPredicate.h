/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

