/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDBatchedQueryServer.h>

@protocol OS_dispatch_queue;
@class HKQueryAnchor, NSObject, NSMutableArray;

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {

	BOOL _deliversUpdates;
	BOOL _initialResultsSent;
	BOOL _objectsDeleted;
	BOOL _includeDeletedObjects;
	HKQueryAnchor* _startAnchor;
	unsigned long long _deliveredResults;
	NSObject*<OS_dispatch_queue> _batchQueue;
	NSMutableArray* _addedSamplesPendingResume;
	NSMutableArray* _deletedSamplesPendingResume;
	BOOL _includeAutomaticTimeZones;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;

}

@property (nonatomic,copy,readonly) HKQueryAnchor * anchor;                 //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL includeAutomaticTimeZones;              //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
+(id)requiredEntitlements;
+(Class)queryClass;
+(BOOL)supportsAnchorBasedAuthorization;
-(id)description;
-(unsigned long long)limit;
-(HKQueryAnchor *)anchor;
-(BOOL)includeAutomaticTimeZones;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(BOOL)_shouldListenForUpdates;
-(void)_queue_didDeactivate;
-(BOOL)_shouldObserveOnPause;
-(BOOL)validateConfiguration:(id*)arg1 ;
-(BOOL)_queue_shouldAccumulateUpdates;
-(void)_queue_startForInitialResults;
-(void)_queue_startForUpdate;
-(void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2 ;
-(BOOL)_queue_shouldAcceptUpdates;
-(void)_queue_deliverSamples:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 description:(id)arg6 ;
-(void)_queue_samplesWereRemovedWithAnchor:(id)arg1 ;
-(id)anchoredObjectQueryClient;
-(id)_maxRowIDInDatabaseWithError:(id*)arg1 ;
-(id)_queue_configuredEntityEnumerator;
-(void)_queue_handleBatchedQueryResult:(long long)arg1 error:(id)arg2 ;
@end

