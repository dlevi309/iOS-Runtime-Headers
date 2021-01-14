/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPResponse.h>

@protocol MPCVideoView, MPCVideoOutput;
@class MPCPlayerResponseTracklist, MPCMediaRemoteController, MPCPlayerPath, UIView;

@interface MPCPlayerResponse : MPResponse {

	MPCPlayerResponseTracklist* _tracklist;
	long long _state;
	MPCMediaRemoteController* _controller;
	MPCPlayerPath* _playerPath;
	UIView*<MPCVideoView> _videoView;
	id<MPCVideoOutput> _videoOutput;

}

@property (nonatomic,readonly) id<MPCPlayerResponseBuilder> builder; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller;               //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                            //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,retain) UIView*<MPCVideoView> videoView;                       //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) id<MPCVideoOutput> videoOutput;                        //@synthesize videoOutput=_videoOutput - In the implementation block
@property (nonatomic,readonly) MPCPlayerResponseTracklist * tracklist;              //@synthesize tracklist=_tracklist - In the implementation block
@property (nonatomic,readonly) long long state;                                     //@synthesize state=_state - In the implementation block
+(id)builderProtocol;
-(id<MPCVideoOutput>)videoOutput;
-(id)pause;
-(id)_commandRequestForMediaRemoteCommand:(unsigned)arg1 ;
-(id)play;
-(id)stop;
-(void)setVideoView:(UIView*<MPCVideoView>)arg1 ;
-(id)description;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(id)_stateDumpObject;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(MPCPlayerPath *)playerPath;
-(long long)state;
-(void)setVideoOutput:(id<MPCVideoOutput>)arg1 ;
-(UIView*<MPCVideoView>)videoView;
-(MPCMediaRemoteController *)controller;
-(MPCPlayerResponseTracklist *)tracklist;
@end

