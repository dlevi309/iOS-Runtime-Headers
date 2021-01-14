/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXProxyAuthenticationCredentialFactory.h>

@protocol SXProxyAuthenticationCredentialFactory <NSObject>
@required
-(void)createCredentialForResponse:(id)arg1 date:(id)arg2 completion:(/*^block*/id)arg3;

@end


@protocol SXProxyAuthenticationKeyProvider;
@class NSString;

@interface SXProxyAuthenticationCredentialFactory : NSObject <SXProxyAuthenticationCredentialFactory> {

	id<SXProxyAuthenticationKeyProvider> _keyProvider;

}

@property (nonatomic,readonly) id<SXProxyAuthenticationKeyProvider> keyProvider;              //@synthesize keyProvider=_keyProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createCredentialForResponse:(id)arg1 date:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithKeyProvider:(id)arg1 ;
-(id<SXProxyAuthenticationKeyProvider>)keyProvider;
@end

