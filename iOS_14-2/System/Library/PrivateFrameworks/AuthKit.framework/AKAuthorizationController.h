/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class AKAuthorizationClientImpl, AKAuthorizationDaemonConnection;

@interface AKAuthorizationController : NSObject {

	AKAuthorizationClientImpl* _clientImpl;
	AKAuthorizationDaemonConnection* _daemonConnection;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider; 
+(id)appleOwnedDomains;
+(BOOL)isURLFromAppleOwnedDomain:(id)arg1 ;
+(BOOL)canPerformAuthorization;
+(BOOL)shouldProcessURL:(id)arg1 ;
+(id)sharedController;
-(id<AKAuthorizationUIProvider>)uiProvider;
-(void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)getCredentialStateForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCredentialStateForClientID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPresentationContextForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(/*^block*/id)arg1 ;
-(void)continueFetchingIconForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(BOOL)_shouldOverrideProxiedBundleIDForContext:(id)arg1 ;
-(id)_appleIDAuthorizationURLs;
-(id)_appleOwnedDomains;
-(void)performAuthorizationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)revokeAuthorizationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)primaryApplicationInformationForWebServiceWithInfo:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

