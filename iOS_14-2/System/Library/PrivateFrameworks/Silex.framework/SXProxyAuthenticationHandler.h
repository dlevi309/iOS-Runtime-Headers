/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXProxyAuthenticationHandler.h>

@protocol SXProxyAuthenticationHandler <NSObject>
@required
-(void)handleAuthenticationChallenge:(id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol SXProxyAuthenticationCredentialFactory;
@class NSString;

@interface SXProxyAuthenticationHandler : NSObject <SXProxyAuthenticationHandler> {

	id<SXProxyAuthenticationCredentialFactory> _credentialFactory;
	unsigned long long _retryCount;

}

@property (nonatomic,readonly) id<SXProxyAuthenticationCredentialFactory> credentialFactory;              //@synthesize credentialFactory=_credentialFactory - In the implementation block
@property (nonatomic,readonly) unsigned long long retryCount;                                             //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)retryCount;
-(void)handleAuthenticationChallenge:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<SXProxyAuthenticationCredentialFactory>)credentialFactory;
-(id)initWithCredentialFactory:(id)arg1 retryCount:(unsigned long long)arg2 ;
@end

