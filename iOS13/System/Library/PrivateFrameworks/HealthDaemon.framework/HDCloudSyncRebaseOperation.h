/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class NSProgress, HDCloudSyncOperationConfiguration, HDCloudSyncFetchOperationResult, HDCloudSyncStoreRecord, NSUUID, NSDate, NSString, NSObject, NSSet, NSMutableSet;

@interface HDCloudSyncRebaseOperation : NSObject <NSProgressReporting> {

	HDCloudSyncOperationConfiguration* _configuration;
	HDCloudSyncFetchOperationResult* _fetchOperationResult;
	HDCloudSyncStoreRecord* _primaryPushStore;
	NSUUID* _operationIdentifier;
	NSDate* _startTime;
	NSString* _cloudKitIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _abandonedStoreZones;
	NSSet* _previouslySeizedStores;
	NSSet* _pullStores;
	NSSet* _allOwnerIdentifiers;
	NSMutableSet* _prepOperations;
	NSSet* _primaryContainerSeizedStores;
	NSSet* _secondaryContainerSeizedStores;
	BOOL _queue_hasStarted;
	/*^block*/id _completion;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)_includedIdentifiers;
-(id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2 ;
-(void)_queue_runRebaseOperation;
-(void)_queue_startBaselinePrepIfRequired;
-(void)_queue_runNewRebaseOperationIfPossible;
-(id)_queue_updatedAbandonedStoresByContainerID;
-(void)_queue_startBaselinePrepOperationForPrimaryContainer:(id)arg1 abandonedStores:(id)arg2 ;
-(void)_queue_startBaselinePrepOperationForSecondaryContainers:(id)arg1 abandonedStores:(id)arg2 ;
-(id)_queue_recordIDsToDeleteWithStoreRecord:(id)arg1 ;
-(BOOL)_queue_finishRebasePreparationWithError:(id*)arg1 ;
-(BOOL)_queue_updatePersistedStateForStore:(id)arg1 error:(id*)arg2 ;
@end

