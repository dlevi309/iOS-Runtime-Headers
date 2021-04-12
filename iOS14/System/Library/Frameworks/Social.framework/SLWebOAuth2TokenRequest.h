/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLWebOAuth2TokenRequest <NSObject>
@required
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 tokenURL:(id)arg5 codeVerifier:(id)arg6;
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 tokenURL:(id)arg5;
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 refreshToken:(id)arg3 tokenURL:(id)arg4;

@end

