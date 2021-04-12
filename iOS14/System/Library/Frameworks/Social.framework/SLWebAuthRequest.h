/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@protocol SLWebAuthRequest <NSObject>
@optional
+(id)authCodeFromURLRequest:(id)arg1;
+(id)authCodeFromWebPageTitle:(id)arg1;
+(id)authCodeFromRedirectURL:(id)arg1;

@required
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5 codeChallenge:(id)arg6;
+(id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+(id)requestForURL:(id)arg1;
+(void)clearCookiesFromStorage:(id)arg1 authRequestURL:(id)arg2;
+(id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+(BOOL)urlPageWillContainAuthorizationCode:(id)arg1;

@end

