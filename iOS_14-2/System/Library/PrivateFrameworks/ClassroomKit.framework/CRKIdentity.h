/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKIdentity <CRKKeychainItem>
@property (nonatomic,readonly) id<CRKCertificate> certificate; 
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey; 
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity; 
@required
-(id<CRKPrivateKey>)privateKey;
-(id<CRKCertificate>)certificate;
-(SecIdentityRef)underlyingIdentity;

@end
