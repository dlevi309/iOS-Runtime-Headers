/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

