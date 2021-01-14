/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class _HMContext, NSUUID, NSNotificationCenter, HMFUnfairLock, NSHashTable, NSString;

@interface HMCameraRecordingReachabilityEventManager : NSObject <HMFMessageReceiver, HMFLogging> {

	_HMContext* _context;
	NSUUID* _uniqueIdentifier;
	NSNotificationCenter* _notificationCenter;
	HMFUnfairLock* _lock;
	NSHashTable* _observers;

}

@property (readonly) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (copy,readonly) NSUUID * uniqueIdentifier;                                          //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (readonly) NSHashTable * observers;                                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)subscribe;
-(void)unsubscribe;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)addObserver:(id)arg1 ;
-(void)configure;
-(NSHashTable *)observers;
-(NSNotificationCenter *)notificationCenter;
-(NSUUID *)uniqueIdentifier;
-(HMFUnfairLock *)lock;
-(id)logIdentifier;
-(_HMContext *)context;
-(id)initWithContext:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg1 ;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 uniqueIdentifier:(id)arg2 notificationCenter:(id)arg3 ;
-(void)handleDidChangeEventsMessage:(id)arg1 ;
-(void)fetchEventsBeforeDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchEventsAfterDate:(id)arg1 withLimit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchCountOfEventsWithDateInterval:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchAllEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCountOfAllEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

