/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
*/


@class APProxySessionConfigurationProvider, APNSURLSessionDemultiplexerManager, APProxyURLCredentialService;

@interface APProxyProtocolProperties : NSObject {

	APProxySessionConfigurationProvider* _proxySessionConfigurationProvider;
	APNSURLSessionDemultiplexerManager* _sessionDemultiplexerManager;
	APProxyURLCredentialService* _proxyURLCredentialService;

}

@property (nonatomic,retain) APProxySessionConfigurationProvider * proxySessionConfigurationProvider;              //@synthesize proxySessionConfigurationProvider=_proxySessionConfigurationProvider - In the implementation block
@property (nonatomic,retain) APNSURLSessionDemultiplexerManager * sessionDemultiplexerManager;                     //@synthesize sessionDemultiplexerManager=_sessionDemultiplexerManager - In the implementation block
@property (nonatomic,retain) APProxyURLCredentialService * proxyURLCredentialService;                              //@synthesize proxyURLCredentialService=_proxyURLCredentialService - In the implementation block
-(APProxySessionConfigurationProvider *)proxySessionConfigurationProvider;
-(void)setProxySessionConfigurationProvider:(APProxySessionConfigurationProvider *)arg1 ;
-(APNSURLSessionDemultiplexerManager *)sessionDemultiplexerManager;
-(void)setSessionDemultiplexerManager:(APNSURLSessionDemultiplexerManager *)arg1 ;
-(APProxyURLCredentialService *)proxyURLCredentialService;
-(void)setProxyURLCredentialService:(APProxyURLCredentialService *)arg1 ;
@end

