/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPResponse.h>

@class MPSectionedCollection, MPCMediaRemoteController;

@interface MPCPlayerSessionResponse : MPResponse {

	MPSectionedCollection* _items;
	MPCMediaRemoteController* _controller;

}

@property (nonatomic,readonly) id<MPCPlayerSessionResponseBuilder> builder; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller;                    //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) MPSectionedCollection * items;                            //@synthesize items=_items - In the implementation block
+(id)builderProtocol;
-(MPSectionedCollection *)items;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(MPCMediaRemoteController *)controller;
@end

