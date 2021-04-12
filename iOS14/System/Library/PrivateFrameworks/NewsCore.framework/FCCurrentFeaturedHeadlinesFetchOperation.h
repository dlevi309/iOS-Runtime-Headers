/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCFeedTransforming;
@class NSArray;

@interface FCCurrentFeaturedHeadlinesFetchOperation : FCOperation {

	BOOL _useFallbackArticleSource;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	id<FCFeedTransforming> _transformation;
	NSArray* _resultHeadlines;

}

@property (nonatomic,retain) id<FCContentContext> context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFeedTransforming> transformation;              //@synthesize transformation=_transformation - In the implementation block
@property (assign,nonatomic) BOOL useFallbackArticleSource;                      //@synthesize useFallbackArticleSource=_useFallbackArticleSource - In the implementation block
@property (nonatomic,retain) NSArray * resultHeadlines;                          //@synthesize resultHeadlines=_resultHeadlines - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                            //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)init;
-(NSArray *)resultHeadlines;
-(id)initWithContext:(id)arg1 transformation:(id)arg2 ;
-(id<FCContentContext>)context;
-(id<FCFeedTransforming>)transformation;
-(BOOL)useFallbackArticleSource;
-(id)_promiseTemporaryFallbackFeedItemsWithConfiguration:(id)arg1 ;
-(id)_promiseHeadlinesForArticleIDs:(id)arg1 ;
-(id)_promiseTemporaryFallbackHeadlinesForFeedItems:(id)arg1 ;
-(id)_promiseArticleRecordsWithConfiguration:(id)arg1 ;
-(id)_promiseFilteredArticleIDsFromArticleRecords:(id)arg1 ;
-(id)initWithContext:(id)arg1 transformation:(id)arg2 useFallbackArticleSource:(BOOL)arg3 ;
-(void)setTransformation:(id<FCFeedTransforming>)arg1 ;
-(void)setUseFallbackArticleSource:(BOOL)arg1 ;
-(id)fetchCompletionHandler;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(id)_promiseConfiguration;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

