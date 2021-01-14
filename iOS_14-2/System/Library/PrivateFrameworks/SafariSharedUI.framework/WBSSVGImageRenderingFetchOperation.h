/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSWebViewMetadataFetchOperation.h>
#import <libobjc.A.dylib/WBSSVGImageRenderingObserver.h>

@class NSMutableArray, NSTimer, _WKRemoteObjectInterface, WBSSVGImageRenderingRequest, NSString;

@interface WBSSVGImageRenderingFetchOperation : WBSWebViewMetadataFetchOperation <WBSSVGImageRenderingObserver> {

	NSMutableArray* _remainingURLs;
	NSTimer* _loadingTimeoutTimer;
	_WKRemoteObjectInterface* _svgImageRenderingObserverInterface;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WBSSVGImageRenderingRequest * request; 
@property (nonatomic,copy,readonly) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(id)webViewConfiguration;
-(id)initWithRequest:(id)arg1 ;
-(void)didCreateWebView;
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_htmlStringWithImageElementString:(id)arg1 ;
-(void)didRenderImage:(id)arg1 ;
-(id)_htmlStringWithSVGContent:(id)arg1 ;
-(void)_loadingTimerDidTimeout:(id)arg1 ;
-(id)_htmlStringWithURL:(id)arg1 ;
-(void)_loadSVGFileURL:(id)arg1 ;
-(void)_renderNextImage;
-(void)_didCompleteWithImage:(id)arg1 ;
-(void)willClearWebView;
-(void)didFailFetch;
-(CGSize)webViewSize;
-(void)startOffscreenFetching;
@end

