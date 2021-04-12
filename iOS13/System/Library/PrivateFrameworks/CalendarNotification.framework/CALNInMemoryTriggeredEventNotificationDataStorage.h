/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNTriggeredEventNotificationDataStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage> {

	NSMutableDictionary* _notificationDataMap;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * notificationDataMap;              //@synthesize notificationDataMap=_notificationDataMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)notificationData;
-(NSMutableDictionary *)notificationDataMap;
-(id)notificationDataWithIdentifier:(id)arg1 ;
-(void)addNotificationData:(id)arg1 withIdentifier:(id)arg2 ;
-(void)removeNotificationDataWithIdentifier:(id)arg1 ;
-(void)removeNotificationData;
@end

