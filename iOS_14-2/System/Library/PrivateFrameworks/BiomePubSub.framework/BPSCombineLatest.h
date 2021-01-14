/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@protocol BPSPublisher;
@interface BPSCombineLatest : BPSPublisher {

	id<BPSPublisher> _a;
	id<BPSPublisher> _b;

}

@property (a,nonatomic,readonly) id<BPSPublisher> a;              //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) id<BPSPublisher> b;              //@synthesize b=_b - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id<BPSPublisher>)b;
-(id)init;
-(void)subscribe:(id)arg1 ;
-(id<BPSPublisher>)a;
-(id)initWithA:(id)arg1 b:(id)arg2 ;
@end

