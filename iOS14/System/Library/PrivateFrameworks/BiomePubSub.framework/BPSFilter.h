/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BPSFilter : BPSPublisher {

	/*^block*/id _isIncluded;
	BPSPublisher* _upstream;

}

@property (nonatomic,retain) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id isIncluded;                      //@synthesize isIncluded=_isIncluded - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)init;
-(id)isIncluded;
-(void)subscribe:(id)arg1 ;
-(BPSPublisher *)upstream;
-(void)setUpstream:(BPSPublisher *)arg1 ;
-(id)initWithUpstream:(id)arg1 isIncluded:(/*^block*/id)arg2 ;
@end
