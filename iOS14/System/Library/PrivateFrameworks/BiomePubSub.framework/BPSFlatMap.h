/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSFlatMap : BPSPublisher {

	long long _maxPublishers;
	/*^block*/id _transform;
	BPSPublisher* _upstream;

}

@property (nonatomic,readonly) long long maxPublishers;              //@synthesize maxPublishers=_maxPublishers - In the implementation block
@property (nonatomic,readonly) id transform;                         //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(void)subscribe:(id)arg1 ;
-(id)transform;
-(BPSPublisher *)upstream;
-(long long)maxPublishers;
-(id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(/*^block*/id)arg3 ;
@end

