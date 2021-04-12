/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLResponseHandler.h>

@interface ICStoreURLResponseHandler : ICURLResponseHandler
+(void)_updateDefaultStorefrontIdentifier:(id)arg1 usingIdentityStore:(id)arg2 ;
-(void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_verifyMescalSignatureForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performAuthenticationForResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_processDialogResponse:(id)arg1 toRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

