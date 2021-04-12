/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, NSString, WKBackForwardList, NSURL, NSArray;

@interface WKBrowsingContextController : NSObject {

	WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > _historyDelegate;
	RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >* _page;
	unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver> >* _pageLoadStateObserver;
	WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > _loadDelegate;
	WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > _policyDelegate;

}

@property (readonly) OpaqueWKPageRef _pageRef; 
@property (readonly) BOOL hasOnlySecureContent; 
@property (assign) unsigned long long paginationMode; 
@property (assign) BOOL paginationBehavesLikeColumns; 
@property (assign) double pageLength; 
@property (assign) double gapBetweenPages; 
@property (assign) BOOL paginationLineGridEnabled; 
@property (readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (nonatomic,readonly) int processIdentifier; 
@property (__weak) id<WKBrowsingContextLoadDelegate> loadDelegate; 
@property (__weak) id<WKBrowsingContextPolicyDelegate> policyDelegate; 
@property (__weak) id<WKBrowsingContextHistoryDelegate> historyDelegate; 
@property (copy) NSString * applicationNameForUserAgent; 
@property (copy) NSString * customUserAgent; 
@property (readonly) BOOL canGoForward; 
@property (readonly) BOOL canGoBack; 
@property (readonly) WKBackForwardList * backForwardList; 
@property (getter=isLoading,readonly) BOOL loading; 
@property (readonly) NSURL * activeURL; 
@property (readonly) NSURL * provisionalURL; 
@property (readonly) NSURL * committedURL; 
@property (readonly) NSURL * unreachableURL; 
@property (readonly) double estimatedProgress; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * certificateChain; 
@property (assign) double textZoom; 
@property (assign) double pageZoom; 
+(void)registerSchemeForCustomProtocol:(id)arg1 ;
+(void)unregisterSchemeForCustomProtocol:(id)arg1 ;
+(id)customSchemes;
+(id)_browsingContextControllerForPageRef:(OpaqueWKPageRef)arg1 ;
-(void)dealloc;
-(WKBrowsingContextHandle *)handle;
-(int)processIdentifier;
-(NSString *)title;
-(void)reload;
-(void)stopLoading;
-(void)setPolicyDelegate:(id<WKBrowsingContextPolicyDelegate>)arg1 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(unsigned long long)pageCount;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(WKBackForwardList *)backForwardList;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(unsigned long long)paginationMode;
-(void)setPaginationMode:(unsigned long long)arg1 ;
-(double)pageLength;
-(void)setPageLength:(double)arg1 ;
-(double)gapBetweenPages;
-(void)setGapBetweenPages:(double)arg1 ;
-(void)goBack;
-(void)goForward;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(double)estimatedProgress;
-(BOOL)hasOnlySecureContent;
-(BOOL)_webProcessIsResponsive;
-(NSURL *)unreachableURL;
-(void)loadRequest:(id)arg1 userData:(id)arg2 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 ;
-(void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(void)reloadFromOrigin;
-(NSString *)applicationNameForUserAgent;
-(void)setApplicationNameForUserAgent:(NSString *)arg1 ;
-(NSString *)customUserAgent;
-(void)goToBackForwardListItem:(id)arg1 ;
-(NSURL *)activeURL;
-(NSURL *)provisionalURL;
-(NSURL *)committedURL;
-(NSArray *)certificateChain;
-(double)textZoom;
-(void)setTextZoom:(double)arg1 ;
-(double)pageZoom;
-(void)setPageZoom:(double)arg1 ;
-(id<WKBrowsingContextLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKBrowsingContextLoadDelegate>)arg1 ;
-(id<WKBrowsingContextPolicyDelegate>)policyDelegate;
-(id<WKBrowsingContextHistoryDelegate>)historyDelegate;
-(void)setHistoryDelegate:(id<WKBrowsingContextHistoryDelegate>)arg1 ;
-(id)_initWithPageRef:(OpaqueWKPageRef)arg1 ;
-(OpaqueWKPageRef)_pageRef;
-(void)setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(BOOL)paginationBehavesLikeColumns;
-(void)setPaginationLineGridEnabled:(BOOL)arg1 ;
-(BOOL)paginationLineGridEnabled;
@end

