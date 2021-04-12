/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCFeedTransforming>)transformation;
-(void)setTransformation:(id<FCFeedTransforming>)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)fetchCompletionHandler;
-(id)initWithContext:(id)arg1 transformation:(id)arg2 ;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(BOOL)useFallbackArticleSource;
-(id)_promiseConfiguration;
-(id)_promiseTemporaryFallbackFeedItemsWithConfiguration:(id)arg1 ;
-(id)_promiseTemporaryFallbackHeadlinesForFeedItems:(id)arg1 ;
-(void)setResultHeadlines:(NSArray *)arg1 ;
-(id)_promiseArticleRecordsWithConfiguration:(id)arg1 ;
-(id)_promiseFilteredArticleIDsFromArticleRecords:(id)arg1 ;
-(id)_promiseHeadlinesForArticleIDs:(id)arg1 ;
-(NSArray *)resultHeadlines;
-(id)initWithContext:(id)arg1 transformation:(id)arg2 useFallbackArticleSource:(BOOL)arg3 ;
-(void)setUseFallbackArticleSource:(BOOL)arg1 ;
@end

