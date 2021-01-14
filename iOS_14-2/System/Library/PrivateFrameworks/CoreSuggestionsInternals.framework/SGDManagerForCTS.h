/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore, SGXPCActivityManagerProtocol;
#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class SGSqlEntityStore, SGServiceContext, NSObject, PETEventTracker2;

@interface SGDManagerForCTS : NSObject {

	SGSqlEntityStore* _harvestStore;
	SGServiceContext* _context;
	NSObject*<OS_dispatch_queue> _harvestQueue;
	NSObject*<OS_dispatch_queue> _frontfillQueue;
	NSObject*<OS_dispatch_source> _frontfillSource;
	NSObject*<OS_dispatch_semaphore> _frontfillSemaphoreForTesting;
	SGDSuggestManagerCTSCriteriaState _ctsCriteriaState;
	opaque_pthread_mutex_t _geocodeLock;
	opaque_pthread_mutex_t _verificationLock;
	double _lastFrontfillFinishTime;
	PETEventTracker2* _pet2tracker;
	id<SGXPCActivityManagerProtocol> _xpcActivityManager;
	NSObject*<OS_dispatch_source> _adjustActivitySource;

}
+(id)sharedSingletonInstance;
+(id)defaultInstance;
+(void)_logCallInteractions:(id)arg1 ;
-(void)_registerForCTSVacuumActivity;
-(void)adjustCriteriaForCTS;
-(void)_registerForCollectWeeklyStats;
-(void)_registerProcessPendingVerificationActivity;
-(void)_performCustomResponseHarvest:(id)arg1 ;
-(void)resetLastFrontfillFinishTimeForTesting;
-(void)_performTrimActivity:(id)arg1 ;
-(void)_doFrontfillHarvestOnFrontfillQueue;
-(void)_registerForCTSSendRTCActivity;
-(void)_performCollectWeeklyStats:(id)arg1 ;
-(void)_performProcessPendingGeocodesActivity:(id)arg1 ;
-(BOOL)_attemptToProcessSearchableItemWithoutDissection:(id)arg1 ;
-(BOOL)hasAlreadyHarvestedSearchableItem:(id)arg1 ;
-(void)_registerForContactDetailCacheRebuildActivity;
-(BOOL)processSearchableItemForTesting:(id)arg1 ;
-(void)_registerForCTSHarvestActivity;
-(void)_registerForCTSTrimActivity;
-(void)triggerFrontfillHarvest;
-(void)waitUntilFrontfillFinishedForTesting;
-(id)initWithHarvestStore:(id)arg1 xpcActivityManager:(id)arg2 ;
-(void)_performSendRTCActivity;
-(void)drainDefaultQueueCompletely;
-(void)_performProcessPendingVerificationActivity:(id)arg1 overrideVerificationStatus:(id)arg2 ;
-(void)_performVacuumActivity;
-(void)_doAdjustCriteriaForCTS;
-(void)_performIdentityAnalysisActivity:(id)arg1 ;
-(void)resumeFrontfillForTesting;
-(void)registerForCTS;
-(void)_performMobileAssetMetadataDownloadActivity:(id)arg1 ;
-(void)_performHarvestActivity:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_registerProcessPendingGeocodesActivity;
-(void)suspendFrontfillForTesting;
-(void)waitForXpcActivityQueue;
-(void)_registerForCustomResponseHarvest;
-(void)performContactDetailCacheRebuildActivity:(id)arg1 ;
-(void)_registerForCTSIdentityAnalysisActivity;
-(void)drainDefaultQueueWithStructuredEventsCandidatesPriorityOption;
-(void)_registerMobileAssetMetadataDownloadActivity;
-(BOOL)drainHarvestQueue:(id)arg1 priorityOption:(unsigned char)arg2 continuingWhile:(/*^block*/id)arg3 ;
-(void)dealloc;
-(BOOL)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3 ;
@end

