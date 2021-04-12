/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMFExponentialBackoffTimer, HMDSyncOperationManager, NSMutableArray;

@interface HMDSyncOperationQueue : HMFObject {

	BOOL _hasExponentialBackoff;
	NSString* _name;
	HMFExponentialBackoffTimer* _backoffTimer;
	HMDSyncOperationManager* _manager;
	NSMutableArray* _stagedOperations;
	NSMutableArray* _waitingOperations;
	double _initialDelay;
	double _initialBackoff;

}

@property (assign,nonatomic,__weak) HMDSyncOperationManager * manager;               //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSMutableArray * stagedOperations;                      //@synthesize stagedOperations=_stagedOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitingOperations;                     //@synthesize waitingOperations=_waitingOperations - In the implementation block
@property (assign,nonatomic) double initialDelay;                                    //@synthesize initialDelay=_initialDelay - In the implementation block
@property (assign,nonatomic) double initialBackoff;                                  //@synthesize initialBackoff=_initialBackoff - In the implementation block
@property (assign,nonatomic) BOOL hasExponentialBackoff;                             //@synthesize hasExponentialBackoff=_hasExponentialBackoff - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * backoffTimer;              //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) long long countTotal; 
-(id)description;
-(NSString *)name;
-(long long)count;
-(HMDSyncOperationManager *)manager;
-(void)setManager:(HMDSyncOperationManager *)arg1 ;
-(double)initialDelay;
-(void)setInitialDelay:(double)arg1 ;
-(id)allOperations;
-(void)_addOperation:(id)arg1 ;
-(HMFExponentialBackoffTimer *)backoffTimer;
-(void)setBackoffTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(NSMutableArray *)stagedOperations;
-(NSMutableArray *)waitingOperations;
-(BOOL)hasExponentialBackoff;
-(double)initialBackoff;
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
-(void)setStagedOperations:(NSMutableArray *)arg1 ;
-(void)setWaitingOperations:(NSMutableArray *)arg1 ;
-(void)setInitialBackoff:(double)arg1 ;
-(void)setHasExponentialBackoff:(BOOL)arg1 ;
@end

