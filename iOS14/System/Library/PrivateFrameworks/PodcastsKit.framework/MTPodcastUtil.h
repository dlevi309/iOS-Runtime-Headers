/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface MTPodcastUtil : NSObject
+(id)stringForMostRecentEpisodeCount:(long long)arg1 ;
+(id)stringForUnplayedEpisodeCount:(long long)arg1 titleCase:(BOOL)arg2 ;
+(id)stringForUnplayedEpisodeCount:(long long)arg1 ;
+(id)stringForSavedEpisodeCount:(long long)arg1 ;
+(id)stringForNewEpisodeCount:(long long)arg1 titleCase:(BOOL)arg2 ;
+(id)stringForATVFeedLastChangedForDate:(id)arg1 ;
+(id)stringForEpisodeCount:(long long)arg1 ;
+(id)stringForUnplayedEpisodeCount:(unsigned long long)arg1 withSavedEpisodeCount:(unsigned long long)arg2 ;
+(id)stringForNewEpisodeCount:(long long)arg1 ;
+(id)stringForEpisodesInFeedCount:(long long)arg1 ;
+(id)stringForATVFeedLastChangedForPodcast:(id)arg1 ;
+(unsigned long long)episodeCountForPredicate:(id)arg1 ;
+(id)episodeTitlesForPredicate:(id)arg1 ;
+(unsigned long long)countOfUnplayedEpisodesForPodcastUuid:(id)arg1 ;
@end

