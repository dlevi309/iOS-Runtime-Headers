/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTRecencyUtil : NSObject
+(id)upNextForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)_upNextForPodcast:(id)arg1 serial:(BOOL)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4 ctx:(id)arg5 ;
+(id)_nextEpisodeForUnplayedPodcast:(id)arg1 serial:(BOOL)arg2 restrictToLibrary:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 ctx:(id)arg6 ;
+(double)_lastDatePlayedIfNotFutureDate:(double)arg1 podcast:(id)arg2 ;
+(id)upNextForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)episodesForListenNowWithContext:(id)arg1 limit:(long long)arg2 ;
@end

