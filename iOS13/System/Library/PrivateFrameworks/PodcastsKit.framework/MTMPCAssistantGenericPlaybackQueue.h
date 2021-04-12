/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

