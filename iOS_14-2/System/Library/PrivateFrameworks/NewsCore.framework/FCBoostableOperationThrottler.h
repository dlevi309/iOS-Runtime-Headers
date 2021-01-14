/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCOperationThrottler.h>

@protocol FCBoostableOperationThrottlerDelegate, OS_dispatch_queue;
@class NSObject;

@interface FCBoostableOperationThrottler : NSObject <FCOperationThrottler> {

	BOOL _workPending;
	os_unfair_lock_s _workPendingLock;
	unsigned long long _mergedData;
	id<FCBoostableOperationThrottlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;
	long long _workPendingQualityOfService;
	unsigned long long _workPendingMergedData;

}

@property (assign,nonatomic,__weak) id<FCBoostableOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialWorkQueue;                           //@synthesize serialWorkQueue=_serialWorkQueue - In the implementation block
@property (assign,nonatomic) BOOL workPending;                                                       //@synthesize workPending=_workPending - In the implementation block
@property (assign,nonatomic) long long workPendingQualityOfService;                                  //@synthesize workPendingQualityOfService=_workPendingQualityOfService - In the implementation block
@property (assign,nonatomic) unsigned long long workPendingMergedData;                               //@synthesize workPendingMergedData=_workPendingMergedData - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s workPendingLock;                                       //@synthesize workPendingLock=_workPendingLock - In the implementation block
@property (assign,nonatomic) unsigned long long mergedData;                                          //@synthesize mergedData=_mergedData - In the implementation block
@property (assign) BOOL suspended; 
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickle;
-(void)tickleWithQualityOfService:(long long)arg1 ;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(id<FCBoostableOperationThrottlerDelegate>)delegate;
-(BOOL)suspended;
-(unsigned long long)mergedData;
-(void)setWorkPendingLock:(os_unfair_lock_s)arg1 ;
-(unsigned long long)workPendingMergedData;
-(void)setMergedData:(unsigned long long)arg1 ;
-(void)tickleWithQualityOfService:(long long)arg1 data:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FCBoostableOperationThrottlerDelegate>)arg1 ;
-(void)setWorkPendingQualityOfService:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setWorkPending:(BOOL)arg1 ;
-(os_unfair_lock_s)workPendingLock;
-(void)setWorkPendingMergedData:(unsigned long long)arg1 ;
-(long long)workPendingQualityOfService;
-(BOOL)workPending;
-(NSObject*<OS_dispatch_queue>)serialWorkQueue;
-(void)tickleWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSerialWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

