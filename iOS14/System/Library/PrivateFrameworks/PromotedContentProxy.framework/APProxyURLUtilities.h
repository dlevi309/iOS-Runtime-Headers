/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
*/


@interface APProxyURLUtilities : NSObject
+(BOOL)shouldProxyRequestToHost:(id)arg1 ;
+(id)proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(BOOL)arg3 ;
+(id)composeUserAgentString:(id)arg1 adIdentifier:(id)arg2 maxRequestCount:(long long)arg3 ;
+(BOOL)_shouldProxyRequestToHost:(id)arg1 ;
+(id)_proxyURLForVideoURL:(id)arg1 adIdentifier:(id)arg2 changeScheme:(BOOL)arg3 ;
+(void)parseUserAgentString:(id)arg1 adIdentifier:(id*)arg2 maxRequestCount:(id*)arg3 ;
+(void)changeSchemeTo:(long long)arg1 forUrlRequest:(id)arg2 ;
@end

