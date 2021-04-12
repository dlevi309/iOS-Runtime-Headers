/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


#import <PodcastsKit/PodcastsKit-Structs.h>
@class IMAVPlayer, NSArray, MPRemoteCommandCenter;

@interface IMMediaRemoteController : NSObject {

	IMAVPlayer* _player;
	NSArray* _supportedPlaybackRates;
	MPRemoteCommandCenter* _remoteCommandCenter;

}

@property (nonatomic,retain) IMAVPlayer * player;                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MPRemoteCommandCenter * remoteCommandCenter;              //@synthesize remoteCommandCenter=_remoteCommandCenter - In the implementation block
@property (nonatomic,retain) NSArray * supportedPlaybackRates;                         //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
-(void)dealloc;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(NSArray *)supportedPlaybackRates;
-(MPRemoteCommandCenter *)remoteCommandCenter;
-(long long)remotePause:(id)arg1 ;
-(long long)remoteStop:(id)arg1 ;
-(long long)remoteSkipBackward:(id)arg1 ;
-(long long)remoteSkipForward:(id)arg1 ;
-(void)setRemoteCommandCenter:(MPRemoteCommandCenter *)arg1 ;
-(void)_updatePlaybackSpeed;
-(void)tearDownRemoteCommandCenter:(id)arg1 ;
-(void)setupRemoteCommandCenter:(id)arg1 ;
-(void)remotePlayCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)remoteTogglePlayPauseCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)remoteNextTrack:(id)arg1 ;
-(long long)remotePreviousTrack:(id)arg1 ;
-(long long)remoteSeekForward:(id)arg1 ;
-(long long)remoteSeekBackward:(id)arg1 ;
-(long long)remoteChangePlaybackRate:(id)arg1 ;
-(long long)remoteSetPlayhead:(id)arg1 ;
-(CFArrayRef)copySupportedCommands;
@end

