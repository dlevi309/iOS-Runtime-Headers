/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationDataStorage.h>

@protocol OS_dispatch_queue;
@class NSString, CALNInMemoryTriggeredEventNotificationDataStorage, NSObject;

@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage> {

	BOOL _protected;
	NSString* _path;
	CALNInMemoryTriggeredEventNotificationDataStorage* _inMemoryStorage;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,copy,readonly) NSString * path;                                                             //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) CALNInMemoryTriggeredEventNotificationDataStorage * inMemoryStorage;              //@synthesize inMemoryStorage=_inMemoryStorage - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)notificationDataFromPersistentStorageWithPath:(id)arg1 error:(id*)arg2 ;
+(id)persistentStorageWithPath:(id)arg1 isProtectedStorage:(BOOL)arg2 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)notificationDataWithIdentifier:(id)arg1 ;
-(void)addNotificationData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_removeNotificationDataWithIdentifier:(id)arg1 ;
-(NSString *)path;
-(id)notificationData;
-(void)_removeData;
-(CALNInMemoryTriggeredEventNotificationDataStorage *)inMemoryStorage;
-(id)initWithPath:(id)arg1 isProtectedStorage:(BOOL)arg2 ;
-(BOOL)_saveDataWithError:(id*)arg1 ;
-(BOOL)_loadDataWithError:(id*)arg1 ;
-(void)_addNotificationData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeNotificationDataWithIdentifier:(id)arg1 ;
-(void)removeNotificationData;
@end

