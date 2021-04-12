/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol MTPlaybackIdentifierComposing
@required
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(id)arg4;
-(id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1;
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 sampPlaybackOrder:(id)arg7;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2;
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(id)arg5;
-(id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1;
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2;
-(id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(id)arg5;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 sampPlaybackOrder:(id)arg4;
-(id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2;
-(id)playbackQueueIdentifierForSubscribeToPodcast:(id)arg1;
-(id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)arg1;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg1;

@end

