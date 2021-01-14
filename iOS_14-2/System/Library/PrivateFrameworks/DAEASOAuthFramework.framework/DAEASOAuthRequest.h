/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@interface DAEASOAuthRequest : NSObject
+(id)requestForURL:(id)arg1 ;
+(BOOL)urlPageWillContainAuthorizationCode:(id)arg1 ;
+(id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 state:(id)arg6 codeChallenge:(id)arg7 codeChallengeMethod:(long long)arg8 ;
+(id)authCodeFromRequest:(id)arg1 ;
+(id)stateFromRequest:(id)arg1 ;
+(id)errorDomainFromRequest:(id)arg1 ;
+(id)errorDescriptionFromRequest:(id)arg1 ;
@end

