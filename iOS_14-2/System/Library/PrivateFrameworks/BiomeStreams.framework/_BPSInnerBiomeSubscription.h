/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <BiomePubSub/BPSSubscription.h>

@protocol BPSSubscriber;
@class BMStoreEnumerator, NSString;

@interface _BPSInnerBiomeSubscription : BPSSubscription {

	BMStoreEnumerator* _enumerator;
	os_unfair_lock_s _lock;
	id<BPSSubscriber> _downstream;
	long long _pendingDemand;
	BOOL _recursion;
	NSString* _streamId;

}
-(id)initWithStreamEnumerator:(id)arg1 downstream:(id)arg2 streamId:(id)arg3 ;
-(id)initWithStreamDatastoreReader:(id)arg1 bookmark:(id)arg2 downstream:(id)arg3 streamId:(id)arg4 ;
-(id)newBookmark;
-(void)requestDemand:(long long)arg1 ;
-(id)upstreamSubscriptions;
-(void)cancel;
-(id)initWithStreamDatastoreReader:(id)arg1 startTime:(double)arg2 downstream:(id)arg3 streamId:(id)arg4 ;
@end

