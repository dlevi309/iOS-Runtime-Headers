/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/ATXNotificationsDatabase.h>

@protocol OS_dispatch_source;
@class NSObject, ATXNotificationRecorder, ATXLockscreenTracker, ATXNotificationsDedupeTracker, NSDate;

@interface ATXNotificationsRecorderPermanentStore : ATXNotificationsDatabase {

	NSObject*<OS_dispatch_source> _timer;
	ATXNotificationRecorder* _internalRecorder;
	ATXLockscreenTracker* _lockscreenTracker;
	ATXNotificationsDedupeTracker* _dedupeTracker;
	NSDate* _lastUpdate;

}

@property (retain) NSDate * lastUpdate;              //@synthesize lastUpdate=_lastUpdate - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(NSDate *)lastUpdate;
-(long long)latestVersion;
-(BOOL)migrate;
-(void)replay;
-(void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4 ;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(id)createCustomSchema;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2 ;
-(void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3 ;
-(void)resetNotificationsHistory;
-(void)addNotificationsRecordWithMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)addNotificationsRecordWithSerializedMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)addNotificationRecordInRecentStore:(id)arg1 timestamp:(id)arg2 ;
-(id)getLockscreenBundleIds;
-(void)replayWithCallback:(/*^block*/id)arg1 ;
@end

