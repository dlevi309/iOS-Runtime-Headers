/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NRReadWriteConcurrentQueue, NRMutableDeviceCollection, NRSecureDevicePropertyStore, NSObject;

@interface NRRegistry : NSObject <NRMutableStateParentDelegate> {

	NSMutableDictionary* _registryDiffObservers;
	NSMutableDictionary* _registrySecurePropertyObservers;
	os_unfair_lock_s _collectionLock;
	NRReadWriteConcurrentQueue* _readerWriterDispatch;
	BOOL _queueRunning;
	BOOL _supportsWatch;
	NRMutableDeviceCollection* _collection;
	NRSecureDevicePropertyStore* _secureProperties;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NRMutableDeviceCollection* _queueCollection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> managementQueue;              //@synthesize managementQueue=_managementQueue - In the implementation block
@property (nonatomic,retain) NRMutableDeviceCollection * collection;                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) NRMutableDeviceCollection * queueCollection;                 //@synthesize queueCollection=_queueCollection - In the implementation block
@property (nonatomic,retain) NRSecureDevicePropertyStore * secureProperties;              //@synthesize secureProperties=_secureProperties - In the implementation block
+(id)_nextToken;
+(int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(unsigned long long)readNotifyToken:(int)arg1 ;
+(id)getReferencedSecureProperties:(id)arg1 fromDiff:(id)arg2 ;
+(BOOL)_supportsWatch;
+(id)getReferencedSecurePropertyIDsFromDiff:(id)arg1 ;
+(void)fixSecurePropertiesWithCollection:(id)arg1 secureProperties:(id)arg2 insecurePropertyNames:(id)arg3 ;
-(id)init;
-(void)invalidate;
-(NRMutableDeviceCollection *)collection;
-(id)initWithParameters:(id)arg1 ;
-(void)_startQueue;
-(void)setCollection:(NRMutableDeviceCollection *)arg1 ;
-(void)grabRegistryWithReadBlockAsync:(/*^block*/id)arg1 ;
-(void)grabRegistryWithWriteBlockAsync:(/*^block*/id)arg1 ;
-(void)syncGrabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(void)syncGrabRegistryWithWriteBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)managementQueue;
-(BOOL)supportsWatch;
-(void)performUnderCollectionLock:(/*^block*/id)arg1 ;
-(void)grabRegistryWithReadBlock:(/*^block*/id)arg1 ;
-(NRSecureDevicePropertyStore *)secureProperties;
-(BOOL)enqueueForReadUnlessSuspended:(/*^block*/id)arg1 ;
-(void)enqueueForRead:(/*^block*/id)arg1 ;
-(void)enqueueForWriteAsync:(/*^block*/id)arg1 ;
-(void)setSecureProperties:(NRSecureDevicePropertyStore *)arg1 ;
-(void)enqueueForWriteAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)setQueueCollection:(NRMutableDeviceCollection *)arg1 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)_notifyDiffObserversWithDiff:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 ;
-(void)enqueueForReadAsync:(/*^block*/id)arg1 ;
-(void)enqueueForRead:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueForReadAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(id)addDiffObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(void)removeDiffObserver:(id)arg1 ;
-(id)addSecurePropertiesObserverWithReadBlock:(/*^block*/id)arg1 ;
-(void)removeSecurePropertiesObserver:(id)arg1 ;
-(NRMutableDeviceCollection *)queueCollection;
@end

