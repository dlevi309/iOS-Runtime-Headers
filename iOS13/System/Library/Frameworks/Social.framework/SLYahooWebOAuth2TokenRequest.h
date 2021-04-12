/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/SLWebOAuth2TokenRequest.h>

@class NSString;

@interface SLYahooWebOAuth2TokenRequest : NSObject <SLWebOAuth2TokenRequest>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 tokenURL:(id)arg5 codeVerifier:(id)arg6 ;
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 tokenURL:(id)arg5 ;
+(id)urlRequestForClientID:(id)arg1 secret:(id)arg2 refreshToken:(id)arg3 tokenURL:(id)arg4 ;
+(id)_urlRequestForParams:(id)arg1 clientID:(id)arg2 secret:(id)arg3 tokenURL:(id)arg4 ;
@end

