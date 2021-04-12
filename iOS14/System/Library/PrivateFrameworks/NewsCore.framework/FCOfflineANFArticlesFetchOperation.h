/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCFlintHelper;
@class NSArray;

@interface FCOfflineANFArticlesFetchOperation : FCOperation {

	BOOL _cachedOnly;
	unsigned long long _maximumMissingArticles;
	/*^block*/id _progressHandler;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;
	NSArray* _articleIDs;
	id _resultHoldToken;

}

@property (nonatomic,retain) id<FCContentContext> context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFlintHelper> flintHelper;                          //@synthesize flintHelper=_flintHelper - In the implementation block
@property (nonatomic,retain) NSArray * articleIDs;                                   //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,retain) id resultHoldToken;                                     //@synthesize resultHoldToken=_resultHoldToken - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                        //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (assign,nonatomic) unsigned long long maximumMissingArticles;              //@synthesize maximumMissingArticles=_maximumMissingArticles - In the implementation block
@property (nonatomic,copy) id progressHandler;                                       //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(void)setCachedOnly:(BOOL)arg1 ;
-(BOOL)cachedOnly;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSArray *)articleIDs;
-(id<FCContentContext>)context;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(id)_promiseHeadlines;
-(void)setResultHoldToken:(id)arg1 ;
-(id)_promiseThumbnailsAndANFDocumentsFromHeadlines:(id)arg1 ;
-(id)_promiseANFResourcesFromHeadlines:(id)arg1 ;
-(id)resultHoldToken;
-(unsigned long long)maximumMissingArticles;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 articleIDs:(id)arg3 ;
-(void)setMaximumMissingArticles:(unsigned long long)arg1 ;
-(id<FCFlintHelper>)flintHelper;
-(id)fetchCompletionHandler;
-(id)progressHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
@end

