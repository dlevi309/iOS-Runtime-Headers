/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCFlintHelper;
@class NSString, FCCachePolicy;

@interface FCOfflineIssueFetchOperation : FCOperation {

	BOOL _cachedOnly;
	/*^block*/id _layeredCoverHandlesProvider;
	double _progress;
	/*^block*/id _progressHandler;
	/*^block*/id _fetchCompletionHandler;
	id<FCContentContext> _context;
	id<FCFlintHelper> _flintHelper;
	NSString* _issueID;
	id _resultHoldToken;
	FCCachePolicy* _issueRecordCachePolicy;

}

@property (assign) double progress;                                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCFlintHelper> flintHelper;                       //@synthesize flintHelper=_flintHelper - In the implementation block
@property (nonatomic,copy) NSString * issueID;                                    //@synthesize issueID=_issueID - In the implementation block
@property (nonatomic,retain) id resultHoldToken;                                  //@synthesize resultHoldToken=_resultHoldToken - In the implementation block
@property (nonatomic,retain) FCCachePolicy * issueRecordCachePolicy;              //@synthesize issueRecordCachePolicy=_issueRecordCachePolicy - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                     //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) id layeredCoverHandlesProvider;                        //@synthesize layeredCoverHandlesProvider=_layeredCoverHandlesProvider - In the implementation block
@property (nonatomic,copy) id progressHandler;                                    //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                             //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(id)init;
-(double)progress;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)_updateProgress:(double)arg1 ;
-(void)performOperation;
-(unsigned long long)maxRetries;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(void)resetForRetry;
-(NSString *)issueID;
-(void)setIssueID:(NSString *)arg1 ;
-(BOOL)cachedOnly;
-(void)setCachedOnly:(BOOL)arg1 ;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(id<FCFlintHelper>)flintHelper;
-(void)setFlintHelper:(id<FCFlintHelper>)arg1 ;
-(void)setResultHoldToken:(id)arg1 ;
-(id)resultHoldToken;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 issueID:(id)arg3 ;
-(id)layeredCoverHandlesProvider;
-(id)_promiseIssue;
-(id)_promiseMetadataForIssue:(id)arg1 ;
-(id)_promiseCoverImageForIssue:(id)arg1 ;
-(id)_promiseLayeredCoverAssetsForIssue:(id)arg1 ;
-(id)_promiseANFArticlesForIssue:(id)arg1 ;
-(id)_promiseANFPagesForIssue:(id)arg1 ;
-(id)_promisePDFPagesForIssue:(id)arg1 ;
-(void)setIssueRecordCachePolicy:(FCCachePolicy *)arg1 ;
-(FCCachePolicy *)issueRecordCachePolicy;
-(id)_promiseANFArticlesForArticleIDs:(id)arg1 withDownloadProgressMin:(double)arg2 downloadProgressMax:(double)arg3 ;
-(id)_itemIdentifiersForKey:(id)arg1 fromMetadataJSONData:(id)arg2 ;
-(id)_promiseReplicaAdPagesForIssue:(id)arg1 withDownloadProgressMin:(double)arg2 downloadProgressMax:(double)arg3 ;
-(id)_resourceIDsFromMetadataJSONData:(id)arg1 ;
-(id)_pdfArchiveURLForIssue:(id)arg1 ;
-(id)initWithContext:(id)arg1 flintHelper:(id)arg2 issue:(id)arg3 ;
-(void)setLayeredCoverHandlesProvider:(id)arg1 ;
@end

