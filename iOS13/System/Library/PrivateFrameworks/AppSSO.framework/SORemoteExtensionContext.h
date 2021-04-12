/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/SORemoteExtensionContextProtocol.h>
#import <libobjc.A.dylib/SOExtensionContext.h>

@class SOExtensionServiceConnection, SOExtensionViewService, ASAuthorizationProviderExtensionAuthorizationRequest, NSValue, NSString;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {

	SOExtensionServiceConnection* _extensionServiceConnection;
	SOExtensionViewService* _viewService;
	ASAuthorizationProviderExtensionAuthorizationRequest* _extensionAuthorizationRequest;
	NSValue* _extensionWindowSize;

}

@property (__weak) SOExtensionViewService * viewService;                                                                             //@synthesize viewService=_viewService - In the implementation block
@property (nonatomic,readonly) id<ASAuthorizationProviderExtensionAuthorizationRequestHandler> extensionViewController; 
@property (nonatomic,readonly) ASAuthorizationProviderExtensionAuthorizationRequest * extensionAuthorizationRequest;                 //@synthesize extensionAuthorizationRequest=_extensionAuthorizationRequest - In the implementation block
@property (nonatomic,retain) NSValue * extensionWindowSize;                                                                          //@synthesize extensionWindowSize=_extensionWindowSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canOpenURL:(id)arg1 ;
-(id<ASAuthorizationProviderExtensionAuthorizationRequestHandler>)extensionViewController;
-(SOExtensionViewService *)viewService;
-(void)setViewService:(SOExtensionViewService *)arg1 ;
-(id)hostContextWithError:(id*)arg1 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)_disableAppSSOInCFNetwork;
-(id)synchronousHostContextWithError:(id*)arg1 ;
-(ASAuthorizationProviderExtensionAuthorizationRequest *)extensionAuthorizationRequest;
-(NSValue *)extensionWindowSize;
-(void)setExtensionWindowSize:(NSValue *)arg1 ;
@end

