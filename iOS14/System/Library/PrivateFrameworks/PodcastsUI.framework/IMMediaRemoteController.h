/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


#import <PodcastsUI/PodcastsUI-Structs.h>
@class IMAVPlayer, NSArray, MPRemoteCommandCenter;

@interface IMMediaRemoteController : NSObject {

	IMAVPlayer* _player;
	NSArray* _supportedPlaybackRates;
	MPRemoteCommandCenter* _remoteCommandCenter;

}

@property (nonatomic,retain) IMAVPlayer * player;                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MPRemoteCommandCenter * remoteCommandCenter;              //@synthesize remoteCommandCenter=_remoteCommandCenter - In the implementation block
@property (nonatomic,retain) NSArray * supportedPlaybackRates;                         //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(NSArray *)supportedPlaybackRates;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setRemoteCommandCenter:(MPRemoteCommandCenter *)arg1 ;
-(void)_updatePlaybackSpeed;
-(MPRemoteCommandCenter *)remoteCommandCenter;
-(void)tearDownRemoteCommandCenter:(id)arg1 ;
-(void)setupRemoteCommandCenter:(id)arg1 ;
-(long long)remotePause:(id)arg1 ;
-(long long)remoteStop:(id)arg1 ;
-(void)remoteTogglePlayPauseCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)remoteNextTrack:(id)arg1 ;
-(long long)remotePreviousTrack:(id)arg1 ;
-(long long)remoteSeekForward:(id)arg1 ;
-(long long)remoteSeekBackward:(id)arg1 ;
-(long long)remoteChangePlaybackRate:(id)arg1 ;
-(long long)remoteSkipBackward:(id)arg1 ;
-(long long)remoteSkipForward:(id)arg1 ;
-(long long)remoteSetPlayhead:(id)arg1 ;
-(CFArrayRef)copySupportedCommands;
@end

