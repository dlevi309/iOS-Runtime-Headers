/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue, NSNumber;

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent {

	MPRemotePlaybackQueue* _playbackQueue;
	NSNumber* _privateListeningOverride;

}

@property (nonatomic,readonly) MPRemotePlaybackQueue * playbackQueue;              //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (nonatomic,readonly) NSNumber * privateListeningOverride;                //@synthesize privateListeningOverride=_privateListeningOverride - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(MPRemotePlaybackQueue *)playbackQueue;
-(NSNumber *)privateListeningOverride;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 ;
@end

