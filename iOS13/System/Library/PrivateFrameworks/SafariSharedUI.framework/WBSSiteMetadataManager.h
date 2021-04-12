/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSSiteMetadataProviderDelegate.h>

@protocol OS_dispatch_queue;
@class WKProcessPool, NSMutableSet, NSMutableArray, NSObject, NSOperationQueue, NSCountedSet, NSMutableDictionary, NSURL, NSString;

@interface WBSSiteMetadataManager : NSObject <WBSSiteMetadataProviderDelegate> {

	WKProcessPool* _processPool;
	NSMutableSet* _usedWebViews;
	NSMutableSet* _reusableWebViews;
	NSMutableArray* _siteMetadataProviders;
	NSObject*<OS_dispatch_queue> _siteMetadataProvidersAccessQueue;
	NSOperationQueue* _operationQueue;
	NSCountedSet* _activeOperations;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableSet* _tokens;
	NSMutableDictionary* _requestsToRequestInfos;
	NSURL* _injectedBundleURL;

}

@property (nonatomic,copy,readonly) NSURL * injectedBundleURL;               //@synthesize injectedBundleURL=_injectedBundleURL - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(id)initWithInjectedBundleURL:(id)arg1 ;
-(id)_processPool;
-(NSURL *)injectedBundleURL;
-(void)savePendingProviderChangesBeforeTermination;
-(void)cancelRequestsWithTokens:(id)arg1 ;
-(id)registerRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)registerSiteMetadataProvider:(id)arg1 ;
-(void)preloadRequests:(id)arg1 withPriority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)cancelRequestWithToken:(id)arg1 ;
-(void)emptyProviderCaches;
-(void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2 ;
-(void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 ofType:(long long)arg3 didReceiveNewData:(BOOL)arg4 forRequest:(id)arg5 ;
-(id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)cancelRequestsWithTokens:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)registerOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)preloadRequest:(id)arg1 withPriority:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
-(unsigned long long)_numberOfConcurrentRequests;
-(id)_providerForRequest:(id)arg1 ;
-(void)_registerToken:(id)arg1 withProvider:(id)arg2 ;
-(BOOL)_requestIsCancelledForToken:(id)arg1 ;
-(void)_internalCancelRequestWithToken:(id)arg1 ;
-(void)_reprioritizeOperationForRequest:(id)arg1 ;
-(void)_internalSetPriority:(long long)arg1 ofRequestWithToken:(id)arg2 ;
-(void)emptyProviderCachesIncludingFavicons:(BOOL)arg1 ;
-(long long)_highestRequestPriorityForRequest:(id)arg1 ;
-(BOOL)_updateOperationForRequestIfPossible:(id)arg1 ;
-(void)_sendResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2 didReceiveNewData:(BOOL)arg3 ;
-(void)_scheduleDelayedResponse:(id)arg1 forRequestToken:(id)arg2 ;
-(void)_setUpOperationForRequest:(id)arg1 withSiteMetadataProvider:(id)arg2 usingOperationBlock:(/*^block*/id)arg3 ;
-(void)_sendRequiresDownloadResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2 ;
-(id)_popReusableWebView;
-(void)_discardWebViewSoon:(id)arg1 ;
-(void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 beginOperationUsingBlock:(/*^block*/id)arg4 ;
-(id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)siteMetadataProvider:(id)arg1 getWebViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)siteMetadataProvider:(id)arg1 didFinishUsingWebView:(id)arg2 ;
-(void)setPriority:(long long)arg1 ofRequestWithToken:(id)arg2 ;
-(void)setPriority:(long long)arg1 ofRequestsWithTokens:(id)arg2 ;
-(id)_makeWebViewOfSize:(CGSize)arg1 withConfiguration:(id)arg2 ;
@end

