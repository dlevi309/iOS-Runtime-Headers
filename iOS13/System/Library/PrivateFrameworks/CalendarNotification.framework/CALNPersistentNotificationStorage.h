/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationStorage.h>

@protocol OS_dispatch_queue;
@class NSString, CALNInMemoryNotificationStorage, NSObject;

@interface CALNPersistentNotificationStorage : NSObject <CALNNotificationStorage> {

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
+(id)persistentNotificationStorageWithPath:(id)arg1 error:(id*)arg2 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)addNotificationRecord:(id)arg1 ;
-(id)notificationRecords;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(void)addNotificationRecords:(id)arg1 ;
-(void)removeAllNotificationRecords;
-(BOOL)_loadNotificationsWithError:(id*)arg1 ;
-(BOOL)_saveNotificationsWithError:(id*)arg1 ;
-(CALNInMemoryNotificationStorage *)inMemoryStorage;
@end

