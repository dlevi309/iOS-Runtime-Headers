/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSOperationQueue *)operationQueue;
-(SKUIClientContext *)clientContext;
-(void)clearCache;
-(id)initWithClientContext:(id)arg1 ;
-(NSOperationQueue *)callbackQueue;
-(void)dealloc;
-(void)trendingSearchPageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setCachedSearchPage:(SKUITrendingSearchPage *)arg1 ;
-(NSMutableArray *)pendingCompletionBlocks;
-(void)setRunningRequestOperation:(NSOperation *)arg1 ;
-(id)requestOperationWithPageURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(SKUITrendingSearchPage *)cachedSearchPage;
-(NSOperation *)runningRequestOperation;
-(void)requestTrendingSearchPageWithURL:(id)arg1 ;
@end

