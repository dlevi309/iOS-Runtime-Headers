/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

