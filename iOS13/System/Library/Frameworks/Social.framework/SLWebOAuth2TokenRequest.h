/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLWebOAuth2TokenRequest <NSObject>
@required
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 tokenURL:(id)arg5 codeVerifier:(id)arg6;
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 tokenURL:(id)arg5;
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 refreshToken:(id)arg3 tokenURL:(id)arg4;

@end

