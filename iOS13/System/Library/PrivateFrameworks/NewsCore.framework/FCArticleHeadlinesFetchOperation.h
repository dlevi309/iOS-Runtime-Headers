/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@protocol FCCoreConfiguration, FCContentContext;
@class NSArray;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation {

	BOOL _overrideArticleCachePolicy;
	BOOL _overrideTagCachePolicy;
	BOOL _shouldFilterHeadlinesWithoutSourceChannels;
	id<FCCoreConfiguration> _configuration;
	unsigned long long _articleCachePolicy;
	double _articleMaximumCachedAge;
	unsigned long long _tagCachePolicy;
	double _tagMaximumCachedAge;
	id<FCContentContext> _context;
	NSArray* _articleIDs;
	NSArray* _ignoreCacheForArticleIDs;
	NSArray* _resultHeadlines;

}

@property (nonatomic,retain) id<FCContentContext> context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * articleIDs;                                         //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,retain) NSArray * ignoreCacheForArticleIDs;                           //@synthesize ignoreCacheForArticleIDs=_ignoreCacheForArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultHeadlines;                                    //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL overrideArticleCachePolicy;                                        //@synthesize overrideArticleCachePolicy=_overrideArticleCachePolicy - In the implementation block
@property (assign) unsigned long long articleCachePolicy;                                  //@synthesize articleCachePolicy=_articleCachePolicy - In the implementation block
@property (assign) double articleMaximumCachedAge;                                         //@synthesize articleMaximumCachedAge=_articleMaximumCachedAge - In the implementation block
@property (assign) BOOL overrideTagCachePolicy;                                            //@synthesize overrideTagCachePolicy=_overrideTagCachePolicy - In the implementation block
@property (assign) unsigned long long tagCachePolicy;                                      //@synthesize tagCachePolicy=_tagCachePolicy - In the implementation block
@property (assign) double tagMaximumCachedAge;                                             //@synthesize tagMaximumCachedAge=_tagMaximumCachedAge - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;              //@synthesize shouldFilterHeadlinesWithoutSourceChannels=_shouldFilterHeadlinesWithoutSourceChannels - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3 ;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSArray *)articleIDs;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(NSArray *)resultHeadlines;
-(id)completeFetchOperation;
-(id)determineAppropriateFetchStepsWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchConfigWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchRecordsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)overrideArticleCachePolicy;
-(unsigned long long)articleCachePolicy;
-(double)articleMaximumCachedAge;
-(BOOL)overrideTagCachePolicy;
-(unsigned long long)tagCachePolicy;
-(double)tagMaximumCachedAge;
-(BOOL)shouldFilterHeadlinesWithoutSourceChannels;
-(void)setOverrideArticleCachePolicy:(BOOL)arg1 ;
-(void)setArticleCachePolicy:(unsigned long long)arg1 ;
-(void)setArticleMaximumCachedAge:(double)arg1 ;
-(void)setOverrideTagCachePolicy:(BOOL)arg1 ;
-(void)setTagCachePolicy:(unsigned long long)arg1 ;
-(void)setTagMaximumCachedAge:(double)arg1 ;
-(void)setShouldFilterHeadlinesWithoutSourceChannels:(BOOL)arg1 ;
-(NSArray *)ignoreCacheForArticleIDs;
-(void)setIgnoreCacheForArticleIDs:(NSArray *)arg1 ;
@end

