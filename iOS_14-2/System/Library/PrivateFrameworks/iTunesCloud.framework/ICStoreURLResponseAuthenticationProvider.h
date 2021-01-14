/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

