/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CKDPCSKeySyncManager : NSObject {

	NSMutableDictionary* _keySyncTrackerByServiceName;
	NSObject*<OS_dispatch_queue> _keySyncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * keySyncTrackerByServiceName;              //@synthesize keySyncTrackerByServiceName=_keySyncTrackerByServiceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> keySyncQueue;                      //@synthesize keySyncQueue=_keySyncQueue - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)syncUserKeysForService:(id)arg1 serviceIsManatee:(BOOL)arg2 account:(id)arg3 shouldThrottle:(BOOL)arg4 testOverrideProvider:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(NSObject*<OS_dispatch_queue>)keySyncQueue;
-(NSMutableDictionary *)keySyncTrackerByServiceName;
-(id)createSyncTrackerForService:(id)arg1 manatee:(BOOL)arg2 ;
-(id)syncTrackerForService:(id)arg1 manatee:(BOOL)arg2 shortThrottlePeriod:(BOOL)arg3 ;
-(void)performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setKeySyncTrackerByServiceName:(NSMutableDictionary *)arg1 ;
-(void)setKeySyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

