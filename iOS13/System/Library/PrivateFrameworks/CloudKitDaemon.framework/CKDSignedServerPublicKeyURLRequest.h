/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDURLRequest.h>

@class CKPublicKey, NSURL;

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest {

	CKPublicKey* _verifiedPublicKey;
	NSURL* _plistURL;
	SecPolicyRef _certificateTrustPolicy;

}

@property (nonatomic,readonly) NSURL * plistURL;                                 //@synthesize plistURL=_plistURL - In the implementation block
@property (nonatomic,readonly) SecPolicyRef certificateTrustPolicy;              //@synthesize certificateTrustPolicy=_certificateTrustPolicy - In the implementation block
@property (retain) CKPublicKey * verifiedPublicKey;                              //@synthesize verifiedPublicKey=_verifiedPublicKey - In the implementation block
+(BOOL)serverResponseIsComplete:(id)arg1 ;
+(id)certificateListServerPlist:(id)arg1 ;
+(SecTrustRef)createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(SecPolicyRef)arg2 ;
+(id)nearestExpirationInCertificateList:(id)arg1 ;
+(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(SecKeyRef)arg3 ;
+(BOOL)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(SecKeyRef)arg3 ;
-(void)dealloc;
-(id)url;
-(long long)partitionType;
-(id)httpMethod;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(long long)serverType;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)requiresTokenRegistration;
-(BOOL)hasRequestBody;
-(NSURL *)plistURL;
-(SecPolicyRef)certificateTrustPolicy;
-(BOOL)canVerifySignedPlistValues:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(void)setVerifiedPublicKey:(CKPublicKey *)arg1 ;
-(id)initWithPlistURL:(id)arg1 verifyWithPolicy:(SecPolicyRef)arg2 ;
-(CKPublicKey *)verifiedPublicKey;
@end

