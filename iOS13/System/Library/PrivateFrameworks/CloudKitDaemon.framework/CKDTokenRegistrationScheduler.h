/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKDSystemAvailabilityWatcher.h>

@protocol OS_dispatch_queue, CKDAccountInfoProvider;
@class NSObject, NSMutableDictionary, NSMutableSet, NSString;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher> {

	BOOL _schedulerIsAvailable;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _callbackBlocks;
	NSMutableDictionary* _callbackTimers;
	NSMutableSet* _operations;
	id<CKDAccountInfoProvider> _unitTestingAccountInfoProvider;
	NSMutableDictionary* _unitTestingPushTokens;

}

@property (assign,nonatomic) BOOL schedulerIsAvailable;                                              //@synthesize schedulerIsAvailable=_schedulerIsAvailable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callbackBlocks;                                   //@synthesize callbackBlocks=_callbackBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callbackTimers;                                   //@synthesize callbackTimers=_callbackTimers - In the implementation block
@property (nonatomic,retain) NSMutableSet * operations;                                              //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) id<CKDAccountInfoProvider> unitTestingAccountInfoProvider;              //@synthesize unitTestingAccountInfoProvider=_unitTestingAccountInfoProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unitTestingPushTokens;                            //@synthesize unitTestingPushTokens=_unitTestingPushTokens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedScheduler;
+(id)sharedSchedulerWithUnitTestingContextInfoProvider:(id)arg1 accountInfoProvider:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableSet *)operations;
-(void)setOperations:(NSMutableSet *)arg1 ;
-(BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1 ;
-(void)unregisterTokenForAppContainerAccountTuple:(id)arg1 ;
-(void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)systemAvailabilityChanged:(unsigned long long)arg1 ;
-(void)forceTokenRefreshForAllClients;
-(void)ensureTokenRefreshForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithAccountInfoProvider:(id)arg1 ;
-(void)handlePublicPushTokenDidUpdate:(id)arg1 ;
-(void)setSchedulerAvailable:(BOOL)arg1 ;
-(BOOL)schedulerIsAvailable;
-(void)setSchedulerIsAvailable:(BOOL)arg1 ;
-(id<CKDAccountInfoProvider>)unitTestingAccountInfoProvider;
-(void)refreshAllClientsNow:(BOOL)arg1 ;
-(void)registerTokenRefreshActivity;
-(void)_handlePushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 applicationMetadata:(id)arg3 appContainerIntersectionMetadata:(id)arg4 ;
-(NSMutableDictionary *)callbackTimers;
-(NSMutableDictionary *)unitTestingPushTokens;
-(NSMutableDictionary *)callbackBlocks;
-(void)_refreshApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)tokenRefreshChanged;
-(void)setCallbackBlocks:(NSMutableDictionary *)arg1 ;
-(void)setCallbackTimers:(NSMutableDictionary *)arg1 ;
-(void)setUnitTestingAccountInfoProvider:(id<CKDAccountInfoProvider>)arg1 ;
-(void)setUnitTestingPushTokens:(NSMutableDictionary *)arg1 ;
@end

