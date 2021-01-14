/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLResponseHandler.h>

@interface ICStoreURLResponseHandler : ICURLResponseHandler
+(void)_updateDefaultStorefrontIdentifier:(id)arg1 usingIdentityStore:(id)arg2 ;
-(void)_processDialogResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_performAuthenticationForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

