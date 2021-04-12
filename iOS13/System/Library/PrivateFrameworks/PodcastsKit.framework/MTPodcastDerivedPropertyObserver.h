/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/MTPodcastAndEpisodeProcessor.h>
#import <libobjc.A.dylib/MTDerivedPropertyChangeNotifying.h>

@class NSMutableDictionary, NSArray;

@interface MTPodcastDerivedPropertyObserver : MTPodcastAndEpisodeProcessor <MTDerivedPropertyChangeNotifying> {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _handlers;
	NSMutableDictionary* _podcastCache;
	NSArray* _podcastDependencies;
	NSArray* _episodePropertiesToFetch;
	/*^block*/id _didFinishProcessingContextSaveHandlerForTests;

}

@property (nonatomic,retain) NSMutableDictionary * cache;                                 //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;                              //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * podcastCache;                          //@synthesize podcastCache=_podcastCache - In the implementation block
@property (nonatomic,retain) NSArray * podcastDependencies;                               //@synthesize podcastDependencies=_podcastDependencies - In the implementation block
@property (nonatomic,retain) NSArray * episodePropertiesToFetch;                          //@synthesize episodePropertiesToFetch=_episodePropertiesToFetch - In the implementation block
@property (nonatomic,copy) id didFinishProcessingContextSaveHandlerForTests;              //@synthesize didFinishProcessingContextSaveHandlerForTests=_didFinishProcessingContextSaveHandlerForTests - In the implementation block
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(NSMutableDictionary *)handlers;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(id)podcastPredicate;
-(id)episodePredicateForPodcast:(id)arg1 ;
-(id)episodeSortDescriptorsForPodcast:(id)arg1 ;
-(id)createEpisodeObserverForPodcastUuid:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)createQueryObserver;
-(id)dependentPropertyForKey:(id)arg1 forPodcastUuid:(id)arg2 ;
-(void)setDependentPropertyValue:(id)arg1 forKey:(id)arg2 forPodcastUuid:(id)arg3 ;
-(void)episodeResultsChangedForPodcastUuid:(id)arg1 ;
-(NSArray *)podcastDependencies;
-(void)reportStatsForPodcasts:(id)arg1 ;
-(void)updateEpisodePredicateForChangedResults:(id)arg1 ;
-(id)countOfNewEpisodesForEpisodes:(id)arg1 ;
-(id)countOfUnplayedEpisodesForEpisodes:(id)arg1 andPredicateForEpisodesOnUnplayedTab:(id)arg2 ;
-(id)countOfMyMediaEpisodesForEpisodes:(id)arg1 andPredicateForMyEpisodes:(id)arg2 ;
-(void)updateFlagForEpisodes:(id)arg1 predicateForUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 podcastUuid:(id)arg4 ctx:(id)arg5 ;
-(BOOL)setDerivedPropertyValue:(id)arg1 forKey:(id)arg2 forPodcast:(id)arg3 ;
-(void)notifyObserversForPodcast:(id)arg1 ;
-(id)didFinishProcessingContextSaveHandlerForTests;
-(id)derivedPropertiesForPodcast:(id)arg1 ;
-(NSArray *)episodePropertiesToFetch;
-(id)_predicateForEpisodesToUpdateWithPodcastUuid:(id)arg1 predicateForUnplayedInUnplayedTab:(id)arg2 predicateForUserEpisodes:(id)arg3 predicateForListenNowEpisode:(id)arg4 ;
-(id)derivedPropertyValueForKey:(id)arg1 forPodcast:(id)arg2 ;
-(NSMutableDictionary *)podcastCache;
-(void)setPodcastCache:(NSMutableDictionary *)arg1 ;
-(void)setPodcastDependencies:(NSArray *)arg1 ;
-(void)setEpisodePropertiesToFetch:(NSArray *)arg1 ;
-(void)setDidFinishProcessingContextSaveHandlerForTests:(id)arg1 ;
-(id)addDerivedPropertyChangeHandler:(/*^block*/id)arg1 ;
-(void)removeDerivedPropertyChangeHandler:(id)arg1 ;
-(unsigned long long)countOfUnplayedEpisodesForPodcast:(id)arg1 ;
-(unsigned long long)countOfMyMediaEpisodesForPodcast:(id)arg1 ;
@end

