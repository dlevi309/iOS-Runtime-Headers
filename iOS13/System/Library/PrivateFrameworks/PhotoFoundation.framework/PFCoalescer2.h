/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol OS_dispatch_group, PFCoalescerDelegate;
#import <PhotoFoundation/PhotoFoundation-Structs.h>
@class NSObject;

@interface PFCoalescer2 : NSObject {

	opaque_pthread_mutex_t _lock;
	mach_timebase_info _timebase;
	unsigned long long _activityDelay;
	unsigned long long _maxActivityDelay;
	unsigned long long _coalescingInterval;
	unsigned long long _processingDelay;
	BOOL _finished;
	BOOL _delegateProcessingInProgress;
	NSObject*<OS_dispatch_group> _postGroup;
	/*^block*/id _leaveBlock;
	unsigned long long _coalesceStart;
	unsigned long long _fireDelay;
	/*^block*/id _postNotice;
	id<PFCoalescerDelegate> _delegate;

}

@property (__weak,readonly) id<PFCoalescerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long activityDelay; 
@property (assign,nonatomic) unsigned long long maxActivityDelay; 
@property (assign,nonatomic) unsigned long long coalescingInterval; 
@property (assign,nonatomic) unsigned long long processingDelay; 
-(id<PFCoalescerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)finish:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 updateFrequency:(unsigned long long)arg2 ;
-(id)initUIControlRefreshCoalescerWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 activityDelay:(unsigned long long)arg2 maxActivityDelay:(unsigned long long)arg3 coalescingInterval:(unsigned long long)arg4 processingDelay:(unsigned long long)arg5 ;
-(void)delayPostBy:(unsigned long long)arg1 ;
-(void)postFinishedNotice;
-(void)processingComplete;
-(void)postNotice;
-(void)coalesce:(/*^block*/id)arg1 ;
-(void)mutate:(/*^block*/id)arg1 ;
-(unsigned long long)activityDelay;
-(void)setActivityDelay:(unsigned long long)arg1 ;
-(unsigned long long)maxActivityDelay;
-(void)setMaxActivityDelay:(unsigned long long)arg1 ;
-(unsigned long long)coalescingInterval;
-(void)setCoalescingInterval:(unsigned long long)arg1 ;
-(unsigned long long)processingDelay;
-(void)setProcessingDelay:(unsigned long long)arg1 ;
@end

