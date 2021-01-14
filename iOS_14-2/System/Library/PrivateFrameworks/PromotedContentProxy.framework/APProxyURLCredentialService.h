/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
*/


@class APMescalSigning;

@interface APProxyURLCredentialService : NSObject {

	APMescalSigning* _mescalSigningObject;

}

@property (nonatomic,readonly) APMescalSigning * mescalSigningObject;              //@synthesize mescalSigningObject=_mescalSigningObject - In the implementation block
-(id)init;
-(id)signedCredentialForRequest:(id)arg1 withPersistence:(unsigned long long)arg2 ;
-(id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3 ;
-(id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 request:(id)arg3 withPersistence:(unsigned long long)arg4 ;
-(id)_signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3 ;
-(APMescalSigning *)mescalSigningObject;
@end

