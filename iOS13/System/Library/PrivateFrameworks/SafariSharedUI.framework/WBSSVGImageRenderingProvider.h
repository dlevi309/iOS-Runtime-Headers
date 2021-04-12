/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSWebViewMetadataFetchOperationDelegate.h>
#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol WBSSiteMetadataProviderDelegate;
@class NSString;

@interface WBSSVGImageRenderingProvider : NSObject <WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider> {

	id<WBSSiteMetadataProviderDelegate> _providerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL providesFavicons; 
-(BOOL)canHandleRequest:(id)arg1 ;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(BOOL)_requestIsValid:(id)arg1 ;
-(void)webViewMetadataFetchOperation:(id)arg1 getWebViewOfSize:(CGSize)arg2 withConfiguration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2 ;
@end

