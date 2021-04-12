/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/CalContactsProviderDelegate.h>

@protocol OS_dispatch_queue;
@class CalLimitingQueue, NSObject;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {

	CalLimitingQueue* _updateQueue;
	NSObject*<OS_dispatch_queue> _updateJobQueue;
	BOOL _needsReset;

}
+(id)sharedListener;
+(id)eventStoreProvider;
-(void)reset;
-(id)initSingleton;
-(id)eventStore;
-(void)_localeChanged;
-(void)contactsReset;
-(void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3 ;
-(BOOL)areBirthdaysEnabled;
-(id)birthdayCalendarsInStore:(id)arg1 ;
-(void)resetAllBirthdaysInStore:(id)arg1 ;
-(void)disableBirthdayCalendarsInStore:(id)arg1 ;
-(void)checkForFailures;
-(void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4 ;
-(id)birthdayCalendarsCreateIfNeeded:(BOOL)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(BOOL)arg5 ;
-(id)allContactsWithBirthdays;
-(void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3 ;
-(void)addBirthdayCalendars;
-(void)disableBirthdayCalendars;
@end

