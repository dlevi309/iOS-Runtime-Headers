/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)getKeySyncEligibilityForService:(id)arg1 isManatee:(BOOL)arg2 zonePCSModificationDate:(id)arg3 testOverrideProvider:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)syncUserKeysForService:(id)arg1 context:(id)arg2 bundleID:(id)arg3 serviceIsManatee:(BOOL)arg4 account:(id)arg5 shouldThrottle:(BOOL)arg6 testOverrideProvider:(id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(NSObject*<OS_dispatch_queue>)keySyncQueue;
-(NSMutableDictionary *)keySyncTrackerByServiceName;
-(id)createSyncTrackerForService:(id)arg1 manatee:(BOOL)arg2 ;
-(id)syncTrackerForService:(id)arg1 manatee:(BOOL)arg2 shortThrottlePeriod:(BOOL)arg3 ;
-(void)performKeySyncWithSyncTracker:(id)arg1 testableSyncConfig:(unsigned long long)arg2 shouldThrottle:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setKeySyncTrackerByServiceName:(NSMutableDictionary *)arg1 ;
-(void)setKeySyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

