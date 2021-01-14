/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCFeedPersonalizing;
@class NSDate, FCFeedRange, NSArray, NSSet, FCCloudContext, FCFeedDescriptor;

@interface FCTagFeedHeadlinesFetchOperation : FCOperation {

	/*^block*/id _fetchCompletionHandler;
	NSDate* _topOfFeedDate;
	FCFeedRange* _freeFeedRange;
	FCFeedRange* _paidFeedRange;
	long long _maxFetchCount;
	NSArray* _precedingAdjacentHeadlines;
	NSArray* _followingAdjacentHeadlines;
	NSSet* _shownArticleIDs;
	NSSet* _shownClusterIDs;
	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _cloudContext;
	FCFeedDescriptor* _feedDescriptor;
	id<FCFeedPersonalizing> _personalizer;

}

@property (nonatomic,copy,readonly) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FCCloudContext * cloudContext;                           //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,readonly) FCFeedDescriptor * feedDescriptor;                       //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,readonly) id<FCFeedPersonalizing> personalizer;                    //@synthesize personalizer=_personalizer - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                   //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
@property (nonatomic,copy) NSDate * topOfFeedDate;                                      //@synthesize topOfFeedDate=_topOfFeedDate - In the implementation block
@property (nonatomic,copy) FCFeedRange * freeFeedRange;                                 //@synthesize freeFeedRange=_freeFeedRange - In the implementation block
@property (nonatomic,copy) FCFeedRange * paidFeedRange;                                 //@synthesize paidFeedRange=_paidFeedRange - In the implementation block
@property (assign,nonatomic) long long maxFetchCount;                                   //@synthesize maxFetchCount=_maxFetchCount - In the implementation block
@property (nonatomic,copy) NSArray * precedingAdjacentHeadlines;                        //@synthesize precedingAdjacentHeadlines=_precedingAdjacentHeadlines - In the implementation block
@property (nonatomic,copy) NSArray * followingAdjacentHeadlines;                        //@synthesize followingAdjacentHeadlines=_followingAdjacentHeadlines - In the implementation block
@property (nonatomic,copy) NSSet * shownArticleIDs;                                     //@synthesize shownArticleIDs=_shownArticleIDs - In the implementation block
@property (nonatomic,copy) NSSet * shownClusterIDs;                                     //@synthesize shownClusterIDs=_shownClusterIDs - In the implementation block
-(FCFeedDescriptor *)feedDescriptor;
-(void)performOperation;
-(id<FCFeedPersonalizing>)personalizer;
-(id<FCCoreConfiguration>)configuration;
-(FCFeedRange *)freeFeedRange;
-(long long)maxFetchCount;
-(FCFeedRange *)paidFeedRange;
-(void)_fetchOrdinaryHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchPinnedHeadlinesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)topOfFeedDate;
-(NSArray *)precedingAdjacentHeadlines;
-(NSArray *)followingAdjacentHeadlines;
-(void)supplementFeedItems:(id)arg1 forTag:(id)arg2 fromCursor:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)shownArticleIDs;
-(NSSet *)shownClusterIDs;
-(id)initWithConfiguration:(id)arg1 cloudContext:(id)arg2 feedDescriptor:(id)arg3 personalizer:(id)arg4 ;
-(void)setTopOfFeedDate:(NSDate *)arg1 ;
-(void)setFreeFeedRange:(FCFeedRange *)arg1 ;
-(void)setPaidFeedRange:(FCFeedRange *)arg1 ;
-(id)feedTransformations;
-(void)setMaxFetchCount:(long long)arg1 ;
-(void)setPrecedingAdjacentHeadlines:(NSArray *)arg1 ;
-(void)setFollowingAdjacentHeadlines:(NSArray *)arg1 ;
-(void)setShownArticleIDs:(NSSet *)arg1 ;
-(void)setShownClusterIDs:(NSSet *)arg1 ;
-(id)filterTransformationWithFilterOptions:(long long)arg1 ;
-(id)fetchCompletionHandler;
-(id)filterTransformationWithFilterOptions:(long long)arg1 additionalArticleIDs:(id)arg2 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(FCCloudContext *)cloudContext;
@end

