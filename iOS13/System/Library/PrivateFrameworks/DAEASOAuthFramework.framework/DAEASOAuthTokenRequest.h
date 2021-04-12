/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@interface DAEASOAuthTokenRequest : NSObject
+(id)_urlRequestForTokenRequestURI:(id)arg1 params:(id)arg2 clientID:(id)arg3 ;
+(id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 ;
+(id)urlRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 resource:(id)arg3 redirectURI:(id)arg4 authCode:(id)arg5 ;
+(id)oauthTokenRefreshRequestForTokenRequestURI:(id)arg1 clientID:(id)arg2 resource:(id)arg3 refreshToken:(id)arg4 ;
@end

