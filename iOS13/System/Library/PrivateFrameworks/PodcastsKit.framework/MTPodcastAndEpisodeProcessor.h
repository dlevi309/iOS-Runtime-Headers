/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTBaseProcessor.h>

@class NSMutableDictionary;

@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor {

	NSMutableDictionary* _episodeObservers;

}

@property (nonatomic,retain) NSMutableDictionary * episodeObservers;              //@synthesize episodeObservers=_episodeObservers - In the implementation block
-(id)init;
-(id)predicate;
-(void)stop;
-(id)entityName;
-(NSMutableDictionary *)episodeObservers;
-(id)podcastPredicate;
-(void)updateEpisodePredicates;
-(id)podcastUuids;
-(void)addEpisodeObserverForPodcast:(id)arg1 ;
-(id)episodePredicateForPodcast:(id)arg1 ;
-(id)episodeSortDescriptorsForPodcast:(id)arg1 ;
-(id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)episodeUuidObserver:(id)arg1 resultsChangedForPodcast:(id)arg2 withDeletedIds:(id)arg3 andInsertIds:(id)arg4 ;
-(void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 ;
-(void)removeEpisodeObserverForPodcast:(id)arg1 ;
-(id)episodeObserverForPodcastUuid:(id)arg1 ;
-(id)episodeUuids;
-(void)setEpisodeObservers:(NSMutableDictionary *)arg1 ;
@end

