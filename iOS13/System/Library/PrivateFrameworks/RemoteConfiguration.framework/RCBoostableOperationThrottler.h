/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <RemoteConfiguration/RemoteConfiguration-Structs.h>
#import <libobjc.A.dylib/RCOperationThrottler.h>

@protocol RCOperationThrottlerDelegate, OS_dispatch_queue;
@class NSObject;

@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler> {

	BOOL _workPending;
	os_unfair_lock_s _workPendingLock;
	id<RCOperationThrottlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;

}

@property (assign,nonatomic,__weak) id<RCOperationThrottlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialWorkQueue;                  //@synthesize serialWorkQueue=_serialWorkQueue - In the implementation block
@property (assign,nonatomic) BOOL workPending;                                              //@synthesize workPending=_workPending - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s workPendingLock;                              //@synthesize workPendingLock=_workPendingLock - In the implementation block
@property (assign) BOOL suspended; 
-(id)init;
-(id<RCOperationThrottlerDelegate>)delegate;
-(void)setDelegate:(id<RCOperationThrottlerDelegate>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)tickleWithQualityOfService:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)workPending;
-(void)setWorkPending:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialWorkQueue;
-(void)tickleWithQualityOfService:(long long)arg1 ;
-(void)setSerialWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(os_unfair_lock_s)workPendingLock;
-(void)setWorkPendingLock:(os_unfair_lock_s)arg1 ;
@end

