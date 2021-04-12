/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <libobjc.A.dylib/SOAuthorizationCoreDelegate.h>

@class NSString;

@interface SOAuthorizationResult : NSObject <SOAuthorizationCoreDelegate> {

	/*^block*/id _authorizationHandleResponseCompletion;
	/*^block*/id _authorizationHandleCredentialCompletion;

}

@property (copy) id authorizationHandleResponseCompletion;                //@synthesize authorizationHandleResponseCompletion=_authorizationHandleResponseCompletion - In the implementation block
@property (copy) id authorizationHandleCredentialCompletion;              //@synthesize authorizationHandleCredentialCompletion=_authorizationHandleCredentialCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)authorizationDidCancel:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3 ;
-(void)authorizationDidNotHandle:(id)arg1 ;
-(void)authorizationDidComplete:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2 ;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)authorizationHandleCredentialCompletion;
-(void)setAuthorizationHandleCredentialCompletion:(id)arg1 ;
-(id)authorizationHandleResponseCompletion;
-(void)setAuthorizationHandleResponseCompletion:(id)arg1 ;
@end

