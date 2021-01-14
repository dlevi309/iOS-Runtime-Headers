/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _includeContributorInformation;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;

}

@property (nonatomic,copy,readonly) HKQueryAnchor * anchor;                     //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (nonatomic,readonly) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
+(BOOL)supportsAnchorBasedAuthorization;
+(id)requiredEntitlements;
+(Class)queryClass;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(unsigned long long)limit;
-(void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2 ;
-(BOOL)_shouldObserveOnPause;
-(BOOL)_queue_shouldAcceptUpdates;
-(BOOL)_shouldListenForUpdates;
-(void)_queue_deliverSamples:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 description:(id)arg6 ;
-(id)_maxRowIDInDatabaseWithError:(id*)arg1 ;
-(id)description;
-(void)_queue_didDeactivate;
-(BOOL)validateConfiguration:(id*)arg1 ;
-(id)_queue_configuredEntityEnumerator;
-(id)anchoredObjectQueryClient;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(BOOL)includeContributorInformation;
-(void)_queue_start;
-(void)_queue_startForInitialResults;
-(BOOL)_queue_shouldAccumulateUpdates;
-(HKQueryAnchor *)anchor;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(void)_queue_samplesWereRemovedWithAnchor:(id)arg1 ;
-(void)_queue_handleBatchedQueryResult:(long long)arg1 error:(id)arg2 ;
-(void)_queue_startForUpdate;
-(BOOL)includeAutomaticTimeZones;
@end

