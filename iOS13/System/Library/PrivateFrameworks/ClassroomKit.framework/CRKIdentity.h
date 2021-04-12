/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKIdentity <CRKKeychainItem>
@property (nonatomic,readonly) id<CRKCertificate> certificate; 
@property (nonatomic,readonly) id<CRKPrivateKey> privateKey; 
@property (nonatomic,readonly) SecIdentityRef underlyingIdentity; 
@required
-(id<CRKCertificate>)certificate;
-(id<CRKPrivateKey>)privateKey;
-(SecIdentityRef)underlyingIdentity;

@end

