/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@interface EKFrozenReminderReminder : EKFrozenReminderObject
+(Class)meltedClass;
-(id)calendar;
-(id)timeZone;
-(id)attachments;
-(id)UUID;
-(id)URL;
-(id)title;
-(id)uniqueIdentifier;
-(unsigned long long)priority;
-(id)uniqueID;
-(id)action;
-(id)creationDate;
-(id)clientLocation;
-(id)appLink;
-(id)lastModifiedDate;
-(id)organizer;
-(id)originalItem;
-(id)notes;
-(id)startDateComponents;
-(id)calendarItemIdentifier;
-(id)alarms;
-(id)attendees;
-(BOOL)hasAttendees;
-(id)calendarItemExternalIdentifier;
-(BOOL)hasRecurrenceRules;
-(id)selfAttendee;
-(id)structuredLocation;
-(id)travelStartLocation;
-(id)structuredLocationWithoutPrediction;
-(id)recurrenceRules;
-(id)detachedItems;
-(id)completionDate;
-(id)_reminder;
-(id)dueDateComponents;
-(id)remObjectID;
-(id)initNewReminderInStore:(id)arg1 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)_copyToNewList:(id)arg1 error:(id*)arg2 ;
-(BOOL)_applyChanges:(id)arg1 error:(id*)arg2 ;
-(id)ekExceptionDates;
-(BOOL)hasNotes;
-(void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2 ;
-(BOOL)defaultAlarmRemoved;
@end

