/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@protocol OS_dispatch_queue;
@class UNSKeyedDictionaryRepository, NSObject;

@interface UNSNotificationScheduleRepository : NSObject {

	UNSKeyedDictionaryRepository* _repository;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)_dateFormatter;
-(void)performMigration;
-(void)_queue_performMigration;
-(id)allBundleIdentifiers;
-(void)_queue_setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_queue_scheduleForBundleIdentifier:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 ;
-(void)_queue_removeScheduleForBundleIdentifier:(id)arg1 ;
-(id)scheduleForBundleIdentifier:(id)arg1 ;
-(void)removeScheduleForBundleIdentifier:(id)arg1 ;
-(void)setSchedule:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

