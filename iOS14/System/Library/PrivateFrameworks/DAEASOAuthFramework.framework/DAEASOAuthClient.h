/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@interface DAEASOAuthClient : NSObject
+(id)clientRedirect;
+(id)clientIDForOAuthType:(unsigned long long)arg1 ;
+(id)_defaultScopeWithoutDomainForOAuthType:(unsigned long long)arg1 ;
+(id)_defaultScopeWithDomainForOAuthType:(unsigned long long)arg1 ;
+(id)defaultScopeForOAuthType:(unsigned long long)arg1 withResourceIdentifier:(id)arg2 ;
+(id)clientRedirectForOAuthType:(unsigned long long)arg1 ;
+(id)scopeForUpgradingFromBasicCreds;
@end

