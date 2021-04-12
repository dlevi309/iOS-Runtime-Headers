/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface ATXNotificationsDedupeTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _recordsTable;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)addNotificationId:(id)arg1 ;
-(void)insertEvent:(long long)arg1 notificationID:(id)arg2 ;
@end

