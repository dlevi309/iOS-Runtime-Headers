/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)eventStoreProvider;
+(BOOL)areBirthdaysEnabled;
+(id)sharedListener;
-(id)eventStore;
-(void)addBirthdayCalendars;
-(void)_localeChanged;
-(void)disableBirthdayCalendars;
-(void)contactsReset;
-(void)_insertEventsForContact:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3 ;
-(void)checkForFailures;
-(void)resetAllBirthdaysInStore:(id)arg1 ;
-(void)contactsInserted:(id)arg1 updated:(id)arg2 deleted:(id)arg3 ;
-(id)birthdayCalendarsCreateIfNeeded:(BOOL)arg1 inStore:(id)arg2 originalIdentifier:(id)arg3 originalAlarms:(id)arg4 ignoreAlarms:(BOOL)arg5 ;
-(void)insertEventWithContact:(id)arg1 forDateComponents:(id)arg2 intoCalendar:(id)arg3 inStore:(id)arg4 ;
-(void)reset;
-(id)birthdayCalendarsInStore:(id)arg1 ;
-(id)initSingleton;
-(id)allContactsWithBirthdays;
-(void)disableBirthdayCalendarsInStore:(id)arg1 ;
@end

