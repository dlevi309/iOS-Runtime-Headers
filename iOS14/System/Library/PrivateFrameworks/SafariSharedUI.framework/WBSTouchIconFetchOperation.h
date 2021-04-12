/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSWebViewMetadataFetchOperation.h>
#import <libobjc.A.dylib/WBSTouchIconObserver.h>

@class _WKRemoteObjectInterface, NSTimer, NSArray, NSSet, NSString;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation <WBSTouchIconObserver> {

	_WKRemoteObjectInterface* _touchIconObserverInterface;
	NSTimer* _loadingTimeoutTimer;
	NSArray* _pendingTouchIconURLs;
	NSSet* _touchIconURLs;
	long long _state;
	BOOL _allowFetchingOverCellularNetwork;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)didFetchTouchIconURLs:(id)arg1 andFaviconURLs:(id)arg2 forURL:(id)arg3 ;
-(id)completionHandler;
-(id)initWithRequest:(id)arg1 allowFetchingOverCellularNetwork:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)description;
-(id)webViewConfiguration;
-(void)resetState;
-(id)initWithRequest:(id)arg1 ;
-(unsigned long long)hash;
-(void)didCreateWebView;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearWebView;
-(void)willClearWebView;
-(void)didFailFetch;
-(void)startOffscreenFetching;
-(void)_scheduleTimeoutWithTimeInterval:(double)arg1 ;
-(void)loadRequest;
-(void)didCompleteWithResult:(id)arg1 ;
-(void)_downloadFirstValidImageWithURLs:(id)arg1 failureHandler:(/*^block*/id)arg2 ;
-(void)_setUpRemoteObjectProxies;
-(void)_tearDownRemoteObjectProxies;
-(void)_downloadPendingTouchIconURLs;
@end

