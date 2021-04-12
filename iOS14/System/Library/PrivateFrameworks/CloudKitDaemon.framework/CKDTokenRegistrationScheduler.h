/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedSchedulerWithUnitTestingContextInfoProvider:(id)arg1 accountInfoProvider:(id)arg2 ;
+(id)sharedScheduler;
-(void)setOperations:(NSMutableSet *)arg1 ;
-(NSMutableSet *)operations;
-(void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)init;
-(void)setUnitTestingAccountInfoProvider:(id<CKDAccountInfoProvider>)arg1 ;
-(NSMutableDictionary *)callbackTimers;
-(void)_refreshApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_handlePushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 applicationMetadata:(id)arg3 appContainerIntersectionMetadata:(id)arg4 ;
-(void)setSchedulerIsAvailable:(BOOL)arg1 ;
-(void)forceTokenRefreshForAllClients;
-(NSMutableDictionary *)callbackBlocks;
-(void)setUnitTestingPushTokens:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)unitTestingPushTokens;
-(void)handlePublicPushTokenDidUpdate:(id)arg1 ;
-(void)unregisterTokenForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 ;
-(void)refreshAllClientsNow:(BOOL)arg1 ;
-(BOOL)systemAvailabilityChanged:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)schedulerIsAvailable;
-(void)tokenRefreshChanged;
-(void)registerTokenRefreshActivity;
-(void)setCallbackTimers:(NSMutableDictionary *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 ;
-(BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1 ;
-(void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSchedulerAvailable:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CKDAccountInfoProvider>)unitTestingAccountInfoProvider;
-(void)registerTokenForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 accountInfoProvider:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setCallbackBlocks:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

