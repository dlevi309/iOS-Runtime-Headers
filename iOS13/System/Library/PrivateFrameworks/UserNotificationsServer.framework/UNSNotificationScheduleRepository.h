/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSNotificationScheduleRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_dateFormatter;
-(void)performMigration;
-(id)allBundleIdentifiers;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)scheduleForBundleIdentifier:(id)arg1 ;
-(void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_scheduleForBundleIdentifier:(id)arg1 ;
-(void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_queue_removeScheduleForBundleIdentifier:(id)arg1 ;
-(void)removeScheduleForBundleIdentifier:(id)arg1 ;
@end

