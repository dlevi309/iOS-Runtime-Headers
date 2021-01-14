/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(id)notificationDataWithIdentifier:(id)arg1 ;
-(void)addNotificationData:(id)arg1 withIdentifier:(id)arg2 ;
-(id)notificationData;
-(NSMutableDictionary *)notificationDataMap;
-(void)removeNotificationDataWithIdentifier:(id)arg1 ;
-(void)removeNotificationData;
@end

