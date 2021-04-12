/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class MPMediaQuery, MPMediaItem;

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue {

	MPMediaQuery* _query;
	MPMediaItem* _firstItem;
	long long _shuffleType;

}

@property (nonatomic,readonly) MPMediaQuery * query;               //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) MPMediaItem * firstItem;              //@synthesize firstItem=_firstItem - In the implementation block
@property (assign,nonatomic) long long shuffleType;                //@synthesize shuffleType=_shuffleType - In the implementation block
+(id)queryQueueWithContextID:(id)arg1 query:(id)arg2 ;
-(id)description;
-(MPMediaQuery *)query;
-(MPMediaItem *)firstItem;
-(long long)shuffleType;
-(void)setShuffleType:(long long)arg1 ;
-(void)setFirstItem:(MPMediaItem *)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 query:(id)arg2 ;
@end

