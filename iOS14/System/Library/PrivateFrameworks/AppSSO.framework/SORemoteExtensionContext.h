/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/SORemoteExtensionContextProtocol.h>
#import <libobjc.A.dylib/SOExtensionContext.h>

@class SOExtensionServiceConnection, SOExtensionViewService, ASAuthorizationProviderExtensionAuthorizationRequest, NSString;

@interface SORemoteExtensionContext : NSExtensionContext <SORemoteExtensionContextProtocol, SOExtensionContext> {

	SOExtensionServiceConnection* _extensionServiceConnection;
	SOExtensionViewService* _viewService;
	ASAuthorizationProviderExtensionAuthorizationRequest* _extensionAuthorizationRequest;

}

@property (__weak) SOExtensionViewService * viewService;                                                                             //@synthesize viewService=_viewService - In the implementation block
@property (nonatomic,readonly) id<ASAuthorizationProviderExtensionAuthorizationRequestHandler> extensionViewController; 
@property (nonatomic,readonly) ASAuthorizationProviderExtensionAuthorizationRequest * extensionAuthorizationRequest;                 //@synthesize extensionAuthorizationRequest=_extensionAuthorizationRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(BOOL)canOpenURL:(id)arg1 ;
-(void)beginAuthorizationWithServiceXPCEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)hostContextWithError:(id*)arg1 ;
-(SOExtensionViewService *)viewService;
-(void)setViewService:(SOExtensionViewService *)arg1 ;
-(id<ASAuthorizationProviderExtensionAuthorizationRequestHandler>)extensionViewController;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_disableAppSSOInCFNetwork;
-(id)synchronousHostContextWithError:(id*)arg1 ;
-(ASAuthorizationProviderExtensionAuthorizationRequest *)extensionAuthorizationRequest;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

