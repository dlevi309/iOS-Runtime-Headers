/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface CFPrefsDaemon : NSObject {

	NSObject*<OS_xpc_object> _listener;
	const char* _name;
	int _role;
	CFSetRef _sourceCache;
	os_unfair_lock_s _sourceCacheLock;
	BOOL _testMode;
	AI* _shmem;

}
-(A*)shmem:(SEL)arg1 ;
-(void)synchronousWithSourceCache:(/*^block*/id)arg1 ;
-(void)withSources:(/*^block*/id)arg1 ;
-(void)withSourceForDomain:(CFStringRef)arg1 inContainer:(CFStringRef)arg2 user:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 managedUsesContainer:(BOOL)arg6 cloudStoreEntitlement:(id)arg7 cloudConfigurationPath:(CFStringRef)arg8 performWithSourceLock:(/*^block*/id)arg9 afterReleasingSourceLock:(/*^block*/id)arg10 ;
-(void)getShmemName:(char*)arg1 bufLen:(unsigned long long)arg2 ;
-(void)handleError:(id)arg1 ;
-(void)handleSourceMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleFlushManagedMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleAgentCheckInMessage:(id)arg1 ;
-(void)handleFlushSourceForDomainMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleMultiMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleUserDeletedMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)handleSimulateTimerSynchronizeForTesting;
-(void)logDomainInconsistencyForProcess:(int)arg1 message:(id)arg2 source:(id)arg3 ;
-(void)handleMessage:(id)arg1 fromPeer:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)_initializeShmemPage:(A*)arg1 :(unsigned)arg2 ;
-(unsigned)userID;
-(void)flushDomain:(const char*)arg1 inAgentForUser:(CFStringRef)arg2 ;
-(void)flushDomainInDaemon:(const char*)arg1 ;
-(id)initWithRole:(int)arg1 testMode:(BOOL)arg2 ;
-(int)role;
-(BOOL)isInTestMode;
-(void)checkIn;
-(id)listener;
@end

