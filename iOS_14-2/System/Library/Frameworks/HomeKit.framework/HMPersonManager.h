/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@class NSUUID, NSNotificationCenter, HMFUnfairLock, _HMContext, NSHashTable, NSString;

@interface HMPersonManager : NSObject <HMFMessageReceiver> {

	NSUUID* _UUID;
	NSNotificationCenter* _notificationCenter;
	/*^block*/id _fetchClientFactory;
	HMFUnfairLock* _lock;
	_HMContext* _context;
	NSHashTable* _observers;

}

@property (readonly) NSNotificationCenter * notificationCenter;                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (copy) id fetchClientFactory;                                                       //@synthesize fetchClientFactory=_fetchClientFactory - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                                    //@synthesize lock=_lock - In the implementation block
@property (readonly) _HMContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (readonly) NSHashTable * observers;                                                 //@synthesize observers=_observers - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)subscribe;
-(void)unsubscribe;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)addObserver:(id)arg1 ;
-(void)configure;
-(NSUUID *)UUID;
-(NSHashTable *)observers;
-(NSNotificationCenter *)notificationCenter;
-(HMFUnfairLock *)lock;
-(_HMContext *)context;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(id)fetchClientFactory;
-(void)handleDidChangePersonDataMessage:(id)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg1 ;
-(void)setFetchClientFactory:(id)arg1 ;
-(id)initWithContext:(id)arg1 UUID:(id)arg2 notificationCenter:(id)arg3 ;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAllUnassociatedFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllFaceprintsWithCompletion:(/*^block*/id)arg1 ;
-(void)addOrUpdatePersons:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addOrUpdateFaceCrops:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addOrUpdateFaceprints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)disassociateFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removePersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFaceprintsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

