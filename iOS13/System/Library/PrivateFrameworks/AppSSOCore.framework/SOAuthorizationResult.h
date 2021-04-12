/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)authorizationDidNotHandle:(id)arg1 ;
-(void)authorizationDidCancel:(id)arg1 ;
-(void)authorizationDidComplete:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3 ;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)authorizationHandleCredentialCompletion;
-(void)setAuthorizationHandleCredentialCompletion:(id)arg1 ;
-(id)authorizationHandleResponseCompletion;
-(void)setAuthorizationHandleResponseCompletion:(id)arg1 ;
@end

