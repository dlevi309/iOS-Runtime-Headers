/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)shuffleType;
-(MPMediaQuery *)query;
-(MPMediaItem *)firstItem;
-(id)description;
-(void)setShuffleType:(long long)arg1 ;
-(void)setFirstItem:(MPMediaItem *)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 query:(id)arg2 ;
@end

