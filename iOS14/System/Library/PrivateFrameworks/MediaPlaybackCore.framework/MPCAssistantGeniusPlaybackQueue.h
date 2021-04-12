/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue {

	NSURL* _seedTrack;

}

@property (nonatomic,readonly) NSURL * seedTrack;              //@synthesize seedTrack=_seedTrack - In the implementation block
+(id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2 ;
-(id)description;
-(NSURL *)seedTrack;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 seedTrack:(id)arg2 ;
@end

