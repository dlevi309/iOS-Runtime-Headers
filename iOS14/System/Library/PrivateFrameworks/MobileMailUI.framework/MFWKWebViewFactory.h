/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/


@class EFQueue, WKProcessPool;

@interface MFWKWebViewFactory : NSObject {

	EFQueue* _preallocatedWebViews;
	WKProcessPool* _processPool;

}

@property (nonatomic,retain) EFQueue * preallocatedWebViews;              //@synthesize preallocatedWebViews=_preallocatedWebViews - In the implementation block
@property (nonatomic,retain) WKProcessPool * processPool;                 //@synthesize processPool=_processPool - In the implementation block
+(id)sharedWebViewFactory;
-(id)webView;
-(id)init;
-(WKProcessPool *)processPool;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(void)setProcessPool:(WKProcessPool *)arg1 ;
-(void)setPreallocatedWebViews:(EFQueue *)arg1 ;
-(EFQueue *)preallocatedWebViews;
-(id)_instantiateWebView;
-(void)preallocateWebViews;
-(void)preallocateWebViewIfNeeded;
@end

