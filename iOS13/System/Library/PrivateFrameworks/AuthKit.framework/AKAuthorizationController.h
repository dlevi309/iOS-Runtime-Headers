/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class AKAuthorizationClientImpl, AKAuthorizationDaemonConnection;

@interface AKAuthorizationController : NSObject {

	AKAuthorizationClientImpl* _clientImpl;
	AKAuthorizationDaemonConnection* _daemonConnection;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider; 
+(id)sharedController;
+(BOOL)isURLFromAppleOwnedDomain:(id)arg1 ;
+(id)appleOwnedDomains;
+(BOOL)canPerformAuthorization;
+(BOOL)shouldProcessURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
-(id)initWithDaemonXPCEndpoint:(id)arg1 ;
-(void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCredentialStateForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPresentationContextForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(/*^block*/id)arg1 ;
-(void)continueFetchingIconForRequestContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AKAuthorizationUIProvider>)uiProvider;
-(id)_appleIDAuthorizationURLs;
-(id)_appleOwnedDomains;
-(void)performAuthorizationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

