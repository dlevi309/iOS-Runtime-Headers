/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ATXBBNotificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _debugOutput;
	NSMutableDictionary* _recentNotifications;

}
+(id)sharedInstance;
-(id)init;
-(id)initWithDebugOutput:(BOOL)arg1 ;
-(void)addNotificationForBundleId:(id)arg1 withPublicationDate:(id)arg2 ;
-(BOOL)_purgeNotificationsWithMinDate:(id)arg1 ;
-(id)recentNotifications;
@end

