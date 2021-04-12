/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPMediaQuery, MPMediaItem;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue {

	MPMediaQuery* _mediaQuery;
	MPMediaItem* _firstItem;
	long long _shuffleType;
	long long _repeatType;

}

@property (nonatomic,readonly) MPMediaQuery * mediaQuery;              //@synthesize mediaQuery=_mediaQuery - In the implementation block
@property (nonatomic,readonly) MPMediaItem * firstItem;                //@synthesize firstItem=_firstItem - In the implementation block
@property (nonatomic,readonly) long long shuffleType;                  //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) long long repeatType;                   //@synthesize repeatType=_repeatType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(MPMediaItem *)firstItem;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(id)playbackItemMetadataForMediaItem:(id)arg1 ;
-(MPMediaQuery *)mediaQuery;
-(long long)shuffleType;
-(long long)repeatType;
@end

