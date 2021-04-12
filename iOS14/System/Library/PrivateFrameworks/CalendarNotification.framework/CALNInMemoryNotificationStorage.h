/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNNotificationStorage.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage> {

	NSMutableDictionary* _recordMap;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * recordMap;                     //@synthesize recordMap=_recordMap - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)notificationRecords;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(NSMutableDictionary *)recordMap;
-(void)addNotificationRecords:(id)arg1 ;
-(void)_addNotificationRecord:(id)arg1 ;
-(void)_removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(id)_notificationRecords;
-(void)addNotificationRecord:(id)arg1 ;
-(void)removeNotificationRecordsPassingTest:(/*^block*/id)arg1 ;
-(void)removeAllNotificationRecords;
@end

