/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@class NSArray, NSPredicate;

@interface MTLibraryQuery : NSObject {

	BOOL _active;
	NSArray* _podcastResults;
	NSArray* _episodeResults;
	NSPredicate* _podcastPredicate;
	NSPredicate* _episodePredicate;
	NSArray* _podcastSortDescriptors;
	NSArray* _episodeSortDescriptors;
	/*^block*/id _action;
	long long _fetchLimit;

}

@property (nonatomic,retain) NSArray * podcastResults;                      //@synthesize podcastResults=_podcastResults - In the implementation block
@property (nonatomic,retain) NSArray * episodeResults;                      //@synthesize episodeResults=_episodeResults - In the implementation block
@property (nonatomic,retain) NSPredicate * podcastPredicate;                //@synthesize podcastPredicate=_podcastPredicate - In the implementation block
@property (nonatomic,retain) NSPredicate * episodePredicate;                //@synthesize episodePredicate=_episodePredicate - In the implementation block
@property (nonatomic,retain) NSArray * podcastSortDescriptors;              //@synthesize podcastSortDescriptors=_podcastSortDescriptors - In the implementation block
@property (nonatomic,retain) NSArray * episodeSortDescriptors;              //@synthesize episodeSortDescriptors=_episodeSortDescriptors - In the implementation block
@property (nonatomic,copy) id action;                                       //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long fetchLimit;                          //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                   //@synthesize active=_active - In the implementation block
-(id)init;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)action;
-(long long)fetchLimit;
-(void)setFetchLimit:(long long)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSPredicate *)podcastPredicate;
-(void)setPodcastPredicate:(NSPredicate *)arg1 ;
-(void)setEpisodePredicate:(NSPredicate *)arg1 ;
-(void)runQuery;
-(void)runQueryInContext:(id)arg1 ;
-(void)setPodcastResults:(NSArray *)arg1 ;
-(void)setEpisodeResults:(NSArray *)arg1 ;
-(void)runQueryWithPodcastPredicate:(id)arg1 episodePredicate:(id)arg2 ;
-(NSArray *)podcastResults;
-(NSArray *)episodeResults;
-(NSPredicate *)episodePredicate;
-(NSArray *)podcastSortDescriptors;
-(void)setPodcastSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)episodeSortDescriptors;
-(void)setEpisodeSortDescriptors:(NSArray *)arg1 ;
@end

