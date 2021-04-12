/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKFrozenReminderObject.h>

@interface EKFrozenReminderReminder : EKFrozenReminderObject
+(Class)meltedClass;
-(id)notes;
-(id)alarms;
-(BOOL)hasRecurrences;
-(id)recurrenceRules;
-(id)timeZone;
-(id)UUID;
-(id)uniqueID;
-(id)clientLocation;
-(id)attachments;
-(id)remObjectID;
-(BOOL)_applyChanges:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasNotes;
-(id)selfAttendee;
-(id)ekExceptionDates;
-(id)structuredLocationWithoutPrediction;
-(id)attendeesRaw;
-(BOOL)hasAttendees;
-(id)lastModifiedDate;
-(id)organizer;
-(id)detachedItems;
-(id)calendar;
-(id)allAlarms;
-(BOOL)defaultAlarmWasDeleted;
-(id)originalItem;
-(id)appLinkData;
-(id)uniqueIdentifier;
-(id)travelStartLocation;
-(id)action;
-(id)creationDate;
-(id)calendarItemIdentifier;
-(id)dueDateComponents;
-(id)calendarItemExternalIdentifier;
-(void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2 ;
-(id)structuredLocation;
-(id)initNewReminderInStore:(id)arg1 ;
-(id)_copyToNewList:(id)arg1 error:(id*)arg2 ;
-(BOOL)defaultAlarmRemoved;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)startDateComponents;
-(id)URL;
-(id)_reminder;
-(unsigned long long)priority;
-(id)title;
-(id)completionDate;
@end

