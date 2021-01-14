/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTPlaybackQueueFactory : NSObject
+(id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(BOOL)_isContinuousPlaybackEnabledForLimit:(long long)arg1 ;
+(id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 latest:(BOOL)arg4 ctx:(id)arg5 ;
+(id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long*)arg4 ;
+(id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2 ;
+(id)_uuidForEpisode:(id)arg1 ;
@end

