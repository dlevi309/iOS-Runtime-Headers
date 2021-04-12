/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@interface DAEASOAuthTokenRequest : NSObject
+(id)_urlRequestForTokenRequestURI:(id)arg1 params:(id)arg2 clientID:(id)arg3 ;
+(id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 scope:(id)arg5 codeVerifier:(id)arg6 ;
+(id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 scope:(id)arg3 refreshToken:(id)arg4 ;
@end

