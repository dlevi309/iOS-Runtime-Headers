/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)partitionType;
-(BOOL)allowsAnonymousAccount;
-(id)url;
-(id)httpMethod;
-(NSURL *)plistURL;
-(void)dealloc;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(long long)serverType;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)requiresTokenRegistration;
-(BOOL)hasRequestBody;
-(SecPolicyRef)certificateTrustPolicy;
-(BOOL)canVerifySignedPlistValues:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(void)setVerifiedPublicKey:(CKPublicKey *)arg1 ;
-(id)initWithOperation:(id)arg1 plistURL:(id)arg2 verifyWithPolicy:(SecPolicyRef)arg3 ;
-(CKPublicKey *)verifiedPublicKey;
@end

