/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@interface MTMPCAssistantGenericPlaybackQueue : MPCAssistantPlaybackQueue {

	MRSystemAppPlaybackQueueRef _playbackQueueRef;

}

@property (assign,nonatomic) MRSystemAppPlaybackQueueRef playbackQueueRef;              //@synthesize playbackQueueRef=_playbackQueueRef - In the implementation block
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 playbackQueueRef:(MRSystemAppPlaybackQueueRef)arg2 ;
-(id)initWithPlaybackQueueRef:(MRSystemAppPlaybackQueueRef)arg1 ;
-(MRSystemAppPlaybackQueueRef)playbackQueueRef;
-(void)setPlaybackQueueRef:(MRSystemAppPlaybackQueueRef)arg1 ;
@end

