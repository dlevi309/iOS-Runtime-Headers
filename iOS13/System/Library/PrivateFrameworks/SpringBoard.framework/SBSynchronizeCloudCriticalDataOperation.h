/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class SBBootDefaults, NSOperationQueue, NSObject, BSMonotonicReferenceTime, NSMutableArray;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject {

	BOOL _needsSync;
	SBBootDefaults* _queue_bootDefaults;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _queue_operationGroup;
	unsigned long long _queue_operationCount;
	BOOL _queue_isComplete;
	BSMonotonicReferenceTime* _queue_cloudSyncStartReferenceTime;
	NSMutableArray* _testOperations;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(id)init;
-(BOOL)isComplete;
-(unsigned long long)_pendingOperationCount;
-(void)startSynchronize;
-(BOOL)waitForSynchronizeToCompleteWithTimeout:(double)arg1 ;
-(id)initWithDefaults:(id)arg1 userManager:(id)arg2 ;
-(BOOL)_queue_isComplete;
-(void)_queue_startFetchingCloudCriticalData;
-(id)_queue_fetchCloudAccountOperation;
-(id)_queue_fetchCloudDefaultsOperation;
-(id)_queue_fetchMDMProfilesOperation;
-(id)_queue_migrateSoundPreferencesOperation;
-(void)_queue_addOperation:(id)arg1 ;
-(void)_fetchDomains:(id)arg1 fromIndex:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_addTestOperation:(id)arg1 ;
@end

