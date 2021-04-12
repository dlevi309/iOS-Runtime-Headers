/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTRecencyUtil : NSObject
+(id)nextEpisodeToPlayForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)nextEpisodeToPlayForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3 ;
+(id)nextEpisodeToPlayForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)nextEpisodeForEpisodicPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)nextEpisodeForSerialPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3 ;
+(id)recentlyPlayedPodcastsWithContext:(id)arg1 limit:(long long)arg2 uuidsToExclude:(id)arg3 watchedAtTheEnd:(BOOL)arg4 ;
+(id)nextEpisodeForSerialPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3 ;
+(id)nextEpisodeForEpisodicPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 ctx:(id)arg3 ;
+(id)episodeToResumeWithContext:(id)arg1 ;
+(id)episodesForListenNowWithContext:(id)arg1 limit:(long long)arg2 ;
@end

