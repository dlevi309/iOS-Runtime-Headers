/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSMap : BPSPublisher {

	BPSPublisher* _upstream;
	/*^block*/id _transform;

}

@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,copy) id transform;                             //@synthesize transform=_transform - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(id)init;
-(void)subscribe:(id)arg1 ;
-(void)setTransform:(id)arg1 ;
-(id)transform;
-(BPSPublisher *)upstream;
-(id)initWithUpstream:(id)arg1 transform:(/*^block*/id)arg2 ;
@end

