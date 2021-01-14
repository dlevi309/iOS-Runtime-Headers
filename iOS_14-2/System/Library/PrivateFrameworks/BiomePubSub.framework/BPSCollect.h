/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSCollect : BPSPublisher {

	BPSPublisher* _upstream;

}

@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(id)initWithUpstream:(id)arg1 ;
@end

