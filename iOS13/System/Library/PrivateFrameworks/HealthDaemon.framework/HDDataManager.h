/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSNumber, HDQuantitySeriesManager, HDProfile, NSString;

@interface HDDataManager : NSObject <HDDiagnosticObject> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableDictionary* _observersByDataType;
	os_unfair_lock_s _synchronousObserverLock;
	NSMutableDictionary* _synchronousObserversBySampleType;
	BOOL _needsSynchronousNotification;
	unsigned long long _openTransactions;
	NSMutableDictionary* _pendingObjectsBySampleType;
	NSNumber* _lastAnchor;
	double _lastNotifyLogTime;
	long long _notifyCount;
	long long _samplesAddedCount;
	long long _samplesJournaledCount;
	HDQuantitySeriesManager* _quantitySeriesManager;
	HDProfile* _profile;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDQuantitySeriesManager * quantitySeriesManager;              //@synthesize quantitySeriesManager=_quantitySeriesManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(id)diagnosticDescription;
-(void)addObserver:(id)arg1 forDataType:(id)arg2 ;
-(BOOL)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)deleteObjectsWithUUIDCollection:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(void)removeObserver:(id)arg1 forDataType:(id)arg2 ;
-(BOOL)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 error:(id*)arg4 ;
-(HDQuantitySeriesManager *)quantitySeriesManager;
-(BOOL)insertDataObjects:(id)arg1 sourceEntity:(id)arg2 deviceEntity:(id)arg3 sourceVersion:(id)arg4 creationDate:(double)arg5 error:(id*)arg6 ;
-(BOOL)deleteSamplesWithTypes:(id)arg1 sourceEntities:(id)arg2 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(BOOL)arg3 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(BOOL)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(BOOL)arg4 updateSourceOrder:(BOOL)arg5 error:(id*)arg6 ;
-(void)shouldNotifyForDataObjects:(id)arg1 provenance:(id)arg2 database:(id)arg3 anchor:(id)arg4 ;
-(BOOL)deleteSamplesWithSourceEntities:(id)arg1 error:(id*)arg2 ;
-(long long)hasSampleWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)containsDataObject:(id)arg1 ;
-(void)openObserverTransaction;
-(void)closeObserverTransaction;
-(BOOL)_insertDataObjects:(id)arg1 transaction:(id)arg2 insertionContext:(id)arg3 updateSourceOrder:(BOOL)arg4 error:(id*)arg5 ;
-(void)_notifySynchronousObserversIfPossible;
-(void)_callObserversIfPossible;
-(void)_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)shouldNotifyForDeletedSamplesOfTypes:(id)arg1 transaction:(id)arg2 anchor:(id)arg3 ;
-(void)_notifySynchronousObserversForDeletedObjectTypes:(id)arg1 anchor:(id)arg2 ;
-(void)_notifyObserversWithAddedObjectsBySampleType:(id)arg1 lastAnchor:(id)arg2 ;
-(id)_observersForDataType:(id)arg1 ;
-(void)_callObservers:(id)arg1 samples:(id)arg2 type:(id)arg3 anchor:(id)arg4 ;
-(id)_observersForAllTypes;
-(id)_deleteDataObjectsByUUIDSQLStringForConfiguration:(id)arg1 entityType:(long long)arg2 error:(id*)arg3 ;
-(void)_shouldNotifyForDeletedSamplesOfTypes:(id)arg1 anchor:(id)arg2 ;
-(BOOL)_deleteObjectsWithTypes:(id)arg1 sourceEntities:(id)arg2 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)deleteDataObjectsOfClass:(Class)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 deletedSampleCount:(unsigned long long*)arg4 notifyObservers:(BOOL)arg5 generateDeletedObjects:(BOOL)arg6 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg7 error:(id*)arg8 ;
-(void)_notificationQueue_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id)_queue_observersAllTypesCreateIfNil:(BOOL)arg1 ;
-(id)_queue_observersForDataType:(id)arg1 createIfNil:(BOOL)arg2 ;
-(id)_queue_observersForKey:(id)arg1 createIfNil:(BOOL)arg2 ;
-(id)_synchronousObserverLock_synchronousObserverSetForSampleType:(id)arg1 ;
-(BOOL)_synchronousObserverLock_hasSynchronousObserverForSampleType:(id)arg1 ;
-(BOOL)insertDataObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)deleteSamplesWithUUIDs:(id)arg1 recursiveDeleteAuthorizationBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)deleteSamplesWithUUIDs:(id)arg1 generateDeletedObjects:(BOOL)arg2 database:(id)arg3 error:(id*)arg4 ;
-(void)addObserverForAllTypes:(id)arg1 ;
-(void)removeObserverForAllTypes:(id)arg1 ;
-(void)addSynchronousObserver:(id)arg1 forSampleType:(id)arg2 ;
-(void)removeSynchronousObserver:(id)arg1 forSampleType:(id)arg2 ;
-(void)synchronouslyCloseObserverTransactionAndNotify;
-(void)setBackgroundObserverFrequency:(id)arg1 forDataType:(id)arg2 frequency:(long long)arg3 completion:(/*^block*/id)arg4 ;
@end

