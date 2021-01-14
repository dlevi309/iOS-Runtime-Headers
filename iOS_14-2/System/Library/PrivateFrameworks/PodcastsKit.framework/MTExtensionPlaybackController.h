/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


#import <PodcastsKit/PodcastsKit-Structs.h>
@class NSMutableArray;

@interface MTExtensionPlaybackController : NSObject {

	NSMutableArray* _magicMomentCompletionHandlers;

}

@property (nonatomic,retain) NSMutableArray * magicMomentCompletionHandlers;              //@synthesize magicMomentCompletionHandlers=_magicMomentCompletionHandlers - In the implementation block
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 mrCompletion:(/*^block*/id)arg6 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 assetInfo:(id)arg2 requesterSharedUserId:(id)arg3 sharedUserIdFromPlayableITunesAccount:(id)arg4 mrCompletion:(/*^block*/id)arg5 ;
+(void)_setPlaybackQueueWithIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 playerID:(id)arg6 mrCompletion:(/*^block*/id)arg7 ;
+(void)getNowPlayingInfoForMagicMomentInfoCenterWithCompletion:(/*^block*/id)arg1 ;
+(MRSystemAppPlaybackQueueRef)playbackQueueForIdentifier:(id)arg1 startPlayback:(BOOL)arg2 assetInfo:(id)arg3 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)setQueueWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)_playbackQueueChangedNotification:(id)arg1 ;
-(NSMutableArray *)magicMomentCompletionHandlers;
-(void)_getNowPlayingInfoAndCallPendingCompletions;
-(void)populateMagicMomentInfoCenterWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(/*^block*/id)arg2 ;
-(void)setMagicMomentCompletionHandlers:(NSMutableArray *)arg1 ;
@end

