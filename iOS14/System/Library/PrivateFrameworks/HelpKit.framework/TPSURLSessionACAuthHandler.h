/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <libobjc.A.dylib/TPSURLSessionCustomAuthHandling.h>

@protocol OS_dispatch_queue;
@class TPSURLSessionACAuthContext, PPCExtensibleSSOAuthenticator, NSObject, NSString;

@interface TPSURLSessionACAuthHandler : NSObject <TPSURLSessionCustomAuthHandling> {

	TPSURLSessionACAuthContext* _authenticationContext;
	TPSURLSessionACAuthContext* _authContext;
	PPCExtensibleSSOAuthenticator* _ssoAuthenticator;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,copy) TPSURLSessionACAuthContext * authContext;                                 //@synthesize authContext=_authContext - In the implementation block
@property (nonatomic,retain) PPCExtensibleSSOAuthenticator * ssoAuthenticator;                       //@synthesize ssoAuthenticator=_ssoAuthenticator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                                 //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,copy,readonly) TPSURLSessionACAuthContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAuthenticateWithURLResponse:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(TPSURLSessionACAuthContext *)authenticationContext;
-(void)authenticateForURLResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_authenticationTokenForHost:(id)arg1 error:(id*)arg2 ;
-(void)_authenticateWithAppleConnect:(/*^block*/id)arg1 ;
-(PPCExtensibleSSOAuthenticator *)ssoAuthenticator;
-(void)setSsoAuthenticator:(PPCExtensibleSSOAuthenticator *)arg1 ;
-(id)customHeaderFields;
-(TPSURLSessionACAuthContext *)authContext;
-(void)setAuthContext:(TPSURLSessionACAuthContext *)arg1 ;
-(id)initWithAuthenticationContext:(id)arg1 ;
@end

