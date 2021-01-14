/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationStorage.h>

@protocol OS_dispatch_queue;
@class NSString, CALNInMemoryNotificationStorage, NSObject;

@interface CALNPersistentNotificationStorage : NSObject <CALNNotificationStorage> {

	BOOL _protected;
	NSString* _path;
	CALNInMemoryNotificationStorage* _inMemoryStorage;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,copy,readonly) NSString * path;                                           //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) CALNInMemoryNotificationStorage * inMemoryStorage;              //@synthesize inMemoryStorage=_inMemoryStorage - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationRecordsFromPersistentNotificationStorageWithPath:(id)arg1 error:(id*)arg2 ;
+(id)persistentNotificationStorageWithPath:(id)arg1 isProtectedStorage:(BOOL)arg2 ;
-(id)notificationRecords;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)_saveNotificationsWithError:(id*)arg1 ;
-(NSString *)path;
-(void)addNotificationRecords:(id)arg1 ;
-(CALNInMemoryNotificationStorage *)inMemoryStorage;
-(BOOL)_loadNotificationsWithError:(id*)arg1 ;
-(void)addNotificationRecord:(id)arg1 ;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(id)initWithPath:(id)arg1 isProtectedStorage:(BOOL)arg2 ;
-(void)removeAllNotificationRecords;
@end

