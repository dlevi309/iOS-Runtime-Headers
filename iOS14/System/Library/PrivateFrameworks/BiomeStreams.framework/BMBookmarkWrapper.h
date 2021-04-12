/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <BiomePubSub/BPSPublisher.h>

@class BPSPublisher;

@interface BMBookmarkWrapper : BPSPublisher {

	BPSPublisher* _upstream;
	id _initialState;

}

@property (nonatomic,readonly) BPSPublisher * upstream;              //@synthesize upstream=_upstream - In the implementation block
@property (nonatomic,readonly) id initialState;                      //@synthesize initialState=_initialState - In the implementation block
-(id)initialState;
-(id)init;
-(void)subscribe:(id)arg1 ;
-(id)withBookmark:(id)arg1 ;
-(id)bookmarkableUpstreams;
-(BPSPublisher *)upstream;
-(id)initWithUpstream:(id)arg1 initialState:(id)arg2 ;
@end

