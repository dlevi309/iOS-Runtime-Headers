/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)privateListeningOverride;
-(id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 ;
-(MPRemotePlaybackQueue *)playbackQueue;
@end

