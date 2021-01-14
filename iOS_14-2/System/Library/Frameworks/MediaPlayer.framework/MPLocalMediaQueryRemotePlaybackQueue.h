/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)shuffleType;
-(MPMediaItem *)firstItem;
-(long long)repeatType;
-(id)description;
-(MPMediaQuery *)mediaQuery;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(id)playbackItemMetadataForMediaItem:(id)arg1 ;
@end

