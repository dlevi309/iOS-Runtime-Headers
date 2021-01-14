/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/

#import <libobjc.A.dylib/SOAuthorizationDelegate.h>

@class SOAuthorization, NSString;

@interface SOAuthorizationWrapper : NSObject <SOAuthorizationDelegate> {

	SOAuthorization* _authorization;
	/*^block*/id _authorizationCompletion;

}

@property (copy) id authorizationCompletion;                        //@synthesize authorizationCompletion=_authorizationCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)authorizationDidCancel:(id)arg1 ;
-(id)init;
-(void)authorization:(id)arg1 didCompleteWithHTTPResponse:(id)arg2 httpBody:(id)arg3 ;
-(void)authorizationDidNotHandle:(id)arg1 ;
-(void)authorizationDidComplete:(id)arg1 ;
-(void)authorization:(id)arg1 didCompleteWithHTTPAuthorizationHeaders:(id)arg2 ;
-(void)authorization:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)beginAuthorizationWithOperation:(id)arg1 url:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 andCompletion:(/*^block*/id)arg5 ;
-(id)authorizationCompletion;
-(void)setAuthorizationCompletion:(id)arg1 ;
@end

