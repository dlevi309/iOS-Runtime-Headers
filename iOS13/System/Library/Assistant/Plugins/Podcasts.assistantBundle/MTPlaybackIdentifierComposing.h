/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/


@protocol MTPlaybackIdentifierComposing
@required
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2;
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(id)arg5;
-(id)universalPlaybackQueueRequestIdentifierForEpisode:(id)arg1;
-(id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1;
-(id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1;
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2;
-(id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(id)arg5;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 sampPlaybackOrder:(id)arg4;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8;
-(id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2;
-(id)playbackQueueIdentifierForSubscribeToPodcast:(id)arg1;
-(id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)arg1;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg1;
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(id)arg4;
-(id)universalPlaybackQueueIdentifiersForStationUuid:(id)arg1 limit:(long long)arg2 queueStatus:(out unsigned long long*)arg3;

@end

