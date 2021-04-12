/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPResponse.h>

@protocol MPCVideoView;
@class MPCPlayerResponseTracklist, MPCMediaRemoteController, MPCPlayerPath, UIView;

@interface MPCPlayerResponse : MPResponse {

	MPCPlayerResponseTracklist* _tracklist;
	long long _state;
	MPCMediaRemoteController* _controller;
	MPCPlayerPath* _playerPath;
	UIView*<MPCVideoView> _videoView;

}

@property (nonatomic,readonly) id<MPCPlayerResponseBuilder> builder; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                            //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) UIView*<MPCVideoView> videoView;                       //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseTracklist * tracklist;              //@synthesize tracklist=_tracklist - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
+(id)builderProtocol;
-(id)description;
-(id)pause;
-(id)stop;
-(long long)state;
-(id)play;
-(MPCMediaRemoteController *)controller;
-(void)setVideoView:(UIView*<MPCVideoView>)arg1 ;
-(UIView*<MPCVideoView>)videoView;
-(id)_stateDumpObject;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(MPCPlayerPath *)playerPath;
-(MPCPlayerResponseTracklist *)tracklist;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(id)_commandRequestForMediaRemoteCommand:(unsigned)arg1 ;
@end

