/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(MPCMediaRemoteController *)controller;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
@end

