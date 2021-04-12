/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIClientContext, NSOperationQueue, SKUITrendingSearchPage, NSMutableArray, NSOperation;

@interface SKUITrendingSearchProvider : NSObject {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _operationQueue;
	SKUITrendingSearchPage* _cachedSearchPage;
	NSMutableArray* _pendingCompletionBlocks;
	NSOperation* _runningRequestOperation;

}

@property (nonatomic,readonly) NSOperationQueue * callbackQueue; 
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) SKUITrendingSearchPage * cachedSearchPage;               //@synthesize cachedSearchPage=_cachedSearchPage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingCompletionBlocks;              //@synthesize pendingCompletionBlocks=_pendingCompletionBlocks - In the implementation block
@property (nonatomic,retain) NSOperation * runningRequestOperation;                   //@synthesize runningRequestOperation=_runningRequestOperation - In the implementation block
@property (nonatomic,__weak,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
-(void)dealloc;
-(void)clearCache;
-(NSOperationQueue *)operationQueue;
-(NSOperationQueue *)callbackQueue;
-(SKUIClientContext *)clientContext;
-(id)initWithClientContext:(id)arg1 ;
-(void)trendingSearchPageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setCachedSearchPage:(SKUITrendingSearchPage *)arg1 ;
-(NSMutableArray *)pendingCompletionBlocks;
-(void)setRunningRequestOperation:(NSOperation *)arg1 ;
-(id)requestOperationWithPageURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SKUITrendingSearchPage *)cachedSearchPage;
-(NSOperation *)runningRequestOperation;
-(void)requestTrendingSearchPageWithURL:(id)arg1 ;
@end

