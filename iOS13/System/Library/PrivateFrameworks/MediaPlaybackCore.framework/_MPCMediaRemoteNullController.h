/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCMediaRemoteController.h>

@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController {

	MPCFuture* _playQueueIdentifiersFuture;
	MPCFuture* _contentItemForIdentifierFuture;
	MPCFuture* _contentItemArtworkForIdentifierFuture;

}
+(BOOL)_shouldRegisterForNotifications;
-(id)_init;
-(id)playbackState;
-(id)supportedCommands;
-(id)playQueueIdentifiersForRequest:(void*)arg1 ;
-(id)contentItemForIdentifier:(id)arg1 ;
-(id)playingIdentifier;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)playbackStateCacheState;
-(long long)supportedCommandsCacheState;
-(long long)playQueueIdentifiersCacheStateForRange:(MSVSignedRange)arg1 ;
-(id)playQueueIdentifiersForRange:(MSVSignedRange)arg1 ;
-(long long)playingIdentifierCacheState;
-(long long)contentItemCacheStateForIdentifier:(id)arg1 ;
-(long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(CGSize)arg2 ;
-(id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(CGSize)arg3 ;
-(void)invalidateAllTokens;
@end

