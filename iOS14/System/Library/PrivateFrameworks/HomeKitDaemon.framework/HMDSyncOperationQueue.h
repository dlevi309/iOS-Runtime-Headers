/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMutableArray, NSString, HMFExponentialBackoffTimer, HMDSyncOperationManager, NSArray;

@interface HMDSyncOperationQueue : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	NSMutableArray* _stagedOperations;
	NSMutableArray* _waitingOperations;
	BOOL _hasExponentialBackoff;
	NSString* _name;
	HMFExponentialBackoffTimer* _backoffTimer;
	HMDSyncOperationManager* _manager;
	double _initialDelay;
	double _initialBackoff;

}

@property (assign,nonatomic,__weak) HMDSyncOperationManager * manager;               //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSArray * stagedOperations; 
@property (copy,readonly) NSArray * waitingOperations; 
@property (assign,nonatomic) double initialDelay;                                    //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign,nonatomic) double initialBackoff;                                  //@synthesize initialBackoff=_initialBackoff - In the implementation block
@property (assign,nonatomic) BOOL hasExponentialBackoff;                             //@synthesize hasExponentialBackoff=_hasExponentialBackoff - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * backoffTimer;              //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long countTotal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(void)setManager:(HMDSyncOperationManager *)arg1 ;
-(long long)count;
-(NSString *)name;
-(NSString *)description;
-(HMFExponentialBackoffTimer *)backoffTimer;
-(HMDSyncOperationManager *)manager;
-(void)_addOperation:(id)arg1 ;
-(id)allOperations;
-(void)setBackoffTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(NSArray *)stagedOperations;
-(BOOL)hasExponentialBackoff;
-(double)initialBackoff;
-(void)_removeStagedOperation:(id)arg1 ;
-(NSArray *)waitingOperations;
-(void)_removeWaitingOperation:(id)arg1 ;
-(void)_addWaitingOperation:(id)arg1 ;
-(void)_addStagedOperation:(id)arg1 ;
-(void)_createBackoffTimer;
-(long long)countTotal;
-(id)initName:(id)arg1 syncManager:(id)arg2 initialDelay:(double)arg3 initialBackoff:(double)arg4 hasBackoff:(BOOL)arg5 ;
-(void)resetBackoffTimer;
-(void)addOperation:(id)arg1 withDelay:(double)arg2 ;
-(void)stageOperation:(id)arg1 ;
-(void)dropOperation:(id)arg1 ;
-(void)dropAllOperations;
-(BOOL)processFiredTimer:(id)arg1 ;
-(BOOL)isInMaximumTimeInterval;
-(id)nextOperation;
-(id)operationsToCancel;
-(void)setInitialBackoff:(double)arg1 ;
-(void)setHasExponentialBackoff:(BOOL)arg1 ;
@end

