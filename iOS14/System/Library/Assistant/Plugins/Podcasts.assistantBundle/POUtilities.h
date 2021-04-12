/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/


#import <Podcasts/Podcasts-Structs.h>
@interface POUtilities : NSObject
+(id)commandStatusForRemoteStatus:(unsigned)arg1 error:(id)arg2 isRemoteStorePlayback:(BOOL)arg3 ;
+(void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 hashedRouteUIDs:(id)arg3 startPlaying:(BOOL)arg4 requesterSharedUserId:(id)arg5 sharedUserIdFromPlayableITunesAccount:(id)arg6 context:(id)arg7 completion:(/*^block*/id)arg8 ;
+(id)identifierFromDomainObject:(id)arg1 ;
+(void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 hashedRouteUIDs:(id)arg3 startPlaying:(BOOL)arg4 requesterSharedUserId:(id)arg5 sharedUserIdFromPlayableITunesAccount:(id)arg6 context:(id)arg7 allowsFallback:(BOOL)arg8 completion:(/*^block*/id)arg9 ;
+(MRSystemAppPlaybackQueueRef)createPlaybackQueueFromRequestIdentifiers:(id)arg1 startPlaying:(BOOL)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 ;
+(void)modifyContextForAirplay:(id)arg1 andPlayLocally:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)typeFromDomainObject:(id)arg1 ;
+(BOOL)isPodcastsNowPlaying;
+(void)setPlaybackRate:(float)arg1 failureErrorCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

