/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BiomePubSub-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class NSMutableArray;

@interface _BPSAbstractZip : BPSSubscription {

	os_unfair_lock_s _lock;
	os_unfair_recursive_lock_s _downstreamLock;
	BOOL _cancelled;
	BOOL _errored;
	BOOL _finished;
	BOOL _recursive;
	id<BPSSubscriber> _downstream;
	NSMutableArray* _buffers;
	NSMutableArray* _subscriptions;
	NSMutableArray* _upstreamFinished;
	long long _upstreamCount;
	long long _pendingDemand;

}

@property (nonatomic,retain) id<BPSSubscriber> downstream;                   //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                       //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                 //@synthesize subscriptions=_subscriptions - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                 //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL errored;                                   //@synthesize errored=_errored - In the implementation block
@property (assign,nonatomic) BOOL finished;                                  //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSMutableArray * upstreamFinished;              //@synthesize upstreamFinished=_upstreamFinished - In the implementation block
@property (assign,nonatomic) long long upstreamCount;                        //@synthesize upstreamCount=_upstreamCount - In the implementation block
@property (assign,nonatomic) BOOL recursive;                                 //@synthesize recursive=_recursive - In the implementation block
@property (assign,nonatomic) long long pendingDemand;                        //@synthesize pendingDemand=_pendingDemand - In the implementation block
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subscriptions;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(BOOL)finished;
-(id<BPSSubscriber>)downstream;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setDownstream:(id<BPSSubscriber>)arg1 ;
-(void)requestDemand:(long long)arg1 ;
-(BOOL)errored;
-(id)upstreamSubscriptions;
-(NSMutableArray *)buffers;
-(void)cancel;
-(long long)pendingDemand;
-(void)setPendingDemand:(long long)arg1 ;
-(BOOL)recursive;
-(void)setRecursive:(BOOL)arg1 ;
-(NSMutableArray *)upstreamFinished;
-(void)setUpstreamFinished:(NSMutableArray *)arg1 ;
-(long long)upstreamCount;
-(void)setErrored:(BOOL)arg1 ;
-(id)initWithDownstream:(id)arg1 upstreamCount:(long long)arg2 ;
-(void)setUpstreamCount:(long long)arg1 ;
-(id)convertValues:(id)arg1 ;
-(void)resolvePendingDemandAndUnlock;
-(void)lockSendCompletion:(id)arg1 index:(long long)arg2 ;
-(void)receiveSubscription:(id)arg1 index:(long long)arg2 ;
-(long long)receiveInput:(id)arg1 index:(long long)arg2 ;
-(void)receiveCompletion:(id)arg1 index:(long long)arg2 ;
@end

