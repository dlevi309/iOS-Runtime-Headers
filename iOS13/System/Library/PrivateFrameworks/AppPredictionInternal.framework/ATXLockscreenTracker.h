/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, ATXNotificationsActionPredictionRecord;

@interface ATXLockscreenTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _recordsTable;
	ATXNotificationsActionPredictionRecord* _current;

}
-(id)init;
-(BOOL)isEmpty;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(id)getBundleIds;
-(BOOL)addNotificationRecord:(id)arg1 timestamp:(id)arg2 ;
-(BOOL)addNotificationId:(id)arg1 withBundle:(id)arg2 timestamp:(id)arg3 ;
@end

