/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKTrust <CRKKeychainItem>
@property (nonatomic,readonly) id<CRKCertificate> leafCertificate; 
@property (nonatomic,readonly) SecTrustRef underlyingTrust; 
@required
-(SecTrustRef)underlyingTrust;
-(id<CRKCertificate>)leafCertificate;

@end

