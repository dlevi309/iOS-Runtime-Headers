/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSData, NSDictionary, NSString, NSArray;

@interface CUAppleIDClient : NSObject {

	SecCertificateRef _myCertificate;
	SecIdentityRef _myIdentity;
	_SecKey* _mySecretKey;
	NSData* _myValidationData;
	SecCertificateRef _peerCertificate;
	_SecKey* _peerPublicKey;
	BOOL _peerSignatureVerified;
	NSDictionary* _peerValidationDict;
	BOOL _peerValidated;
	int _securityLevel;
	NSString* _myAppleID;
	CUAppleIDClient* _myInfoClient;
	NSString* _peerAppleID;
	NSArray* _peerAppleIDs;
	NSData* _peerCertificateData;
	NSData* _peerValidationData;
	NSData* _myCertificateData;
	NSData* _mySecretKeyData;
	NSString* _mySecretKeyType;

}

@property (nonatomic,copy) NSData * myCertificateData;                    //@synthesize myCertificateData=_myCertificateData - In the implementation block
@property (nonatomic,copy) NSData * mySecretKeyData;                      //@synthesize mySecretKeyData=_mySecretKeyData - In the implementation block
@property (nonatomic,copy) NSString * mySecretKeyType;                    //@synthesize mySecretKeyType=_mySecretKeyType - In the implementation block
@property (nonatomic,copy) NSString * myAppleID;                          //@synthesize myAppleID=_myAppleID - In the implementation block
@property (nonatomic,retain) CUAppleIDClient * myInfoClient;              //@synthesize myInfoClient=_myInfoClient - In the implementation block
@property (nonatomic,copy) NSString * peerAppleID;                        //@synthesize peerAppleID=_peerAppleID - In the implementation block
@property (nonatomic,copy) NSArray * peerAppleIDs;                        //@synthesize peerAppleIDs=_peerAppleIDs - In the implementation block
@property (nonatomic,copy) NSData * peerCertificateData;                  //@synthesize peerCertificateData=_peerCertificateData - In the implementation block
@property (nonatomic,copy) NSData * peerValidationData;                   //@synthesize peerValidationData=_peerValidationData - In the implementation block
@property (nonatomic,readonly) int securityLevel; 
-(NSData *)mySecretKeyData;
-(BOOL)_validatePeerHashes:(id)arg1 ;
-(void)setPeerAppleIDs:(NSArray *)arg1 ;
-(void)setMyCertificateData:(NSData *)arg1 ;
-(void)setMyInfoClient:(CUAppleIDClient *)arg1 ;
-(NSString *)mySecretKeyType;
-(id)copyMyAppleIDAndReturnError:(id*)arg1 ;
-(id)copyMyValidationDataAndReturnError:(id*)arg1 ;
-(void)setPeerAppleID:(NSString *)arg1 ;
-(void)setMySecretKeyType:(NSString *)arg1 ;
-(NSString *)myAppleID;
-(SecCertificateRef)_getMyCertificateAndReturnError:(id*)arg1 ;
-(NSData *)myCertificateData;
-(_SecKey*)_getPeerPublicKeyAndReturnError:(id*)arg1 ;
-(NSString *)peerAppleID;
-(NSData *)peerCertificateData;
-(BOOL)validatePeerWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(_SecKey*)_getMySecretKeyAndReturnError:(id*)arg1 ;
-(void)setPeerCertificateData:(NSData *)arg1 ;
-(BOOL)verifyBytes:(const void*)arg1 verifyLength:(unsigned long long)arg2 signatureBytes:(const void*)arg3 signatureLength:(unsigned long long)arg4 error:(id*)arg5 ;
-(int)securityLevel;
-(SecCertificateRef)_getPeerCertificateAndReturnError:(id*)arg1 ;
-(id)signBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)copyMyCertificateDataAndReturnError:(id*)arg1 ;
-(BOOL)verifyData:(id)arg1 signature:(id)arg2 error:(id*)arg3 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)setPeerValidationData:(NSData *)arg1 ;
-(CUAppleIDClient *)myInfoClient;
-(NSData *)peerValidationData;
-(SecIdentityRef)_getMyIdentityAndReturnError:(id*)arg1 ;
-(void)setMySecretKeyData:(NSData *)arg1 ;
-(void)setMyAppleID:(NSString *)arg1 ;
-(void)dealloc;
-(NSArray *)peerAppleIDs;
@end

