/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKTrust <CRKKeychainItem>
@property (nonatomic,readonly) id<CRKCertificate> leafCertificate; 
@property (nonatomic,readonly) SecTrustRef underlyingTrust; 
@required
-(id<CRKCertificate>)leafCertificate;
-(SecTrustRef)underlyingTrust;

@end

