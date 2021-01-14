/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, NSLock;

@interface RELocationAuthorizationStatusCache : RESingleton {

	NSMutableDictionary* _bundleToStatusCache;
	NSMutableDictionary* _bundleToCallbackBlocks;
	NSMutableSet* _bundlesAwaitingQuery;
	NSObject*<OS_dispatch_queue> _schedulingQueue;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSLock* _bundleToStatusCacheLock;

}
-(id)_init;
-(int)cachedAuthorizationStatusForBundleIdentifier:(id)arg1 invalidationUpdateQueue:(id)arg2 withCallback:(/*^block*/id)arg3 ;
-(int)_cachedStatusForBundleIdentifier:(id)arg1 ;
-(void)_s_queue_addCallbackInfo:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_s_queue_scheduleUpdatedStatusForBundleIdentifier:(id)arg1 ;
-(void)_q_queue_queryStatusFromCLForBundleIdentifier:(id)arg1 ;
-(void)_s_queue_updateCacheFromCLWithStatus:(int)arg1 forBundleIdentifier:(id)arg2 ;
@end

