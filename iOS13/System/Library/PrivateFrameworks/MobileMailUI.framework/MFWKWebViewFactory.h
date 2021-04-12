/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)webView;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(void)setProcessPool:(WKProcessPool *)arg1 ;
-(WKProcessPool *)processPool;
-(void)setPreallocatedWebViews:(EFQueue *)arg1 ;
-(EFQueue *)preallocatedWebViews;
-(id)_instantiateWebView;
-(void)preallocateWebViews;
@end

