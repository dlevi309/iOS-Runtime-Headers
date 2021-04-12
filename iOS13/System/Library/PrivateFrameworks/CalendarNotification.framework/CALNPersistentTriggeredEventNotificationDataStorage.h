/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationDataStorage.h>

@protocol OS_dispatch_queue;
@class NSString, CALNInMemoryTriggeredEventNotificationDataStorage, NSObject;

@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage> {

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
+(id)persistentStorageWithPath:(id)arg1 error:(id*)arg2 ;
+(id)notificationDataFromPersistentStorageWithPath:(id)arg1 error:(id*)arg2 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)notificationData;
-(CALNInMemoryTriggeredEventNotificationDataStorage *)inMemoryStorage;
-(id)notificationDataWithIdentifier:(id)arg1 ;
-(void)addNotificationData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeNotificationDataWithIdentifier:(id)arg1 ;
-(void)removeNotificationData;
-(BOOL)_loadDataWithError:(id*)arg1 ;
-(BOOL)_saveDataWithError:(id*)arg1 ;
-(void)_removeData;
-(void)_addNotificationData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_removeNotificationDataWithIdentifier:(id)arg1 ;
@end

