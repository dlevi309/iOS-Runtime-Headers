/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData, NSString, CLLocation;

@interface SPPairingSession : NSObject <NSSecureCoding> {

	BOOL _ackSuccess;
	BOOL _pairingUsingTool;
	NSUUID* _identifier;
	NSData* _nonce;
	NSUUID* _beaconId;
	NSString* _name;
	long long _roleId;
	NSString* _systemVersion;
	long long _vendorId;
	long long _productId;
	NSData* _ecid;
	NSData* _chipId;
	NSString* _serialNumber;
	NSData* _collaborativeKeyC1;
	NSData* _payloadSignature;
	NSData* _attestation;
	NSData* _systemPublicKey;
	NSData* _refKeyPublicKey;
	NSData* _collaborativeKeyC2;
	NSData* _serverSeed;
	NSData* _serverSignature;
	NSData* _serverPublicKey;
	NSString* _maskedAppleID;
	NSString* _userMessage;
	NSData* _baaLeaftCert;
	NSData* _baaIntermediateCert;
	NSData* _collaborativeKeyC3;
	NSData* _confirmSignature;
	NSData* _keyGenerationStatus;
	CLLocation* _pairingLocation;

}

@property (nonatomic,copy) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSUUID * beaconId;                         //@synthesize beaconId=_beaconId - In the implementation block
@property (nonatomic,copy) NSData * nonce;                            //@synthesize nonce=_nonce - In the implementation block
@property (assign,nonatomic) BOOL pairingUsingTool;                   //@synthesize pairingUsingTool=_pairingUsingTool - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long roleId;                        //@synthesize roleId=_roleId - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;                  //@synthesize systemVersion=_systemVersion - In the implementation block
@property (assign,nonatomic) long long vendorId;                      //@synthesize vendorId=_vendorId - In the implementation block
@property (assign,nonatomic) long long productId;                     //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy) NSData * ecid;                             //@synthesize ecid=_ecid - In the implementation block
@property (nonatomic,copy) NSData * chipId;                           //@synthesize chipId=_chipId - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                   //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSData * collaborativeKeyC1;               //@synthesize collaborativeKeyC1=_collaborativeKeyC1 - In the implementation block
@property (nonatomic,copy) NSData * payloadSignature;                 //@synthesize payloadSignature=_payloadSignature - In the implementation block
@property (nonatomic,copy) NSData * attestation;                      //@synthesize attestation=_attestation - In the implementation block
@property (nonatomic,copy) NSData * systemPublicKey;                  //@synthesize systemPublicKey=_systemPublicKey - In the implementation block
@property (nonatomic,copy) NSData * refKeyPublicKey;                  //@synthesize refKeyPublicKey=_refKeyPublicKey - In the implementation block
@property (nonatomic,copy) NSData * collaborativeKeyC2;               //@synthesize collaborativeKeyC2=_collaborativeKeyC2 - In the implementation block
@property (nonatomic,copy) NSData * serverSeed;                       //@synthesize serverSeed=_serverSeed - In the implementation block
@property (nonatomic,copy) NSData * serverSignature;                  //@synthesize serverSignature=_serverSignature - In the implementation block
@property (nonatomic,copy) NSData * serverPublicKey;                  //@synthesize serverPublicKey=_serverPublicKey - In the implementation block
@property (nonatomic,copy) NSString * maskedAppleID;                  //@synthesize maskedAppleID=_maskedAppleID - In the implementation block
@property (nonatomic,copy) NSString * userMessage;                    //@synthesize userMessage=_userMessage - In the implementation block
@property (nonatomic,copy) NSData * baaLeaftCert;                     //@synthesize baaLeaftCert=_baaLeaftCert - In the implementation block
@property (nonatomic,copy) NSData * baaIntermediateCert;              //@synthesize baaIntermediateCert=_baaIntermediateCert - In the implementation block
@property (nonatomic,copy) NSData * collaborativeKeyC3;               //@synthesize collaborativeKeyC3=_collaborativeKeyC3 - In the implementation block
@property (nonatomic,copy) NSData * confirmSignature;                 //@synthesize confirmSignature=_confirmSignature - In the implementation block
@property (assign,nonatomic) BOOL ackSuccess;                         //@synthesize ackSuccess=_ackSuccess - In the implementation block
@property (nonatomic,copy) NSData * keyGenerationStatus;              //@synthesize keyGenerationStatus=_keyGenerationStatus - In the implementation block
@property (nonatomic,copy) CLLocation * pairingLocation;              //@synthesize pairingLocation=_pairingLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(NSString *)systemVersion;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(NSString *)serialNumber;
-(long long)vendorId;
-(NSString *)userMessage;
-(void)setUserMessage:(NSString *)arg1 ;
-(void)setVendorId:(long long)arg1 ;
-(void)setServerSignature:(NSData *)arg1 ;
-(NSData *)serverSignature;
-(void)setSerialNumber:(NSString *)arg1 ;
-(long long)productId;
-(void)setProductId:(long long)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(NSData *)attestation;
-(void)setAttestation:(NSData *)arg1 ;
-(void)setRoleId:(long long)arg1 ;
-(long long)roleId;
-(void)setServerSeed:(NSData *)arg1 ;
-(void)setCollaborativeKeyC2:(NSData *)arg1 ;
-(void)setServerPublicKey:(NSData *)arg1 ;
-(void)setMaskedAppleID:(NSString *)arg1 ;
-(void)setBaaIntermediateCert:(NSData *)arg1 ;
-(void)setBaaLeaftCert:(NSData *)arg1 ;
-(void)setEcid:(NSData *)arg1 ;
-(void)setChipId:(NSData *)arg1 ;
-(void)setPayloadSignature:(NSData *)arg1 ;
-(void)setCollaborativeKeyC1:(NSData *)arg1 ;
-(void)setBeaconId:(NSUUID *)arg1 ;
-(void)setPairingLocation:(CLLocation *)arg1 ;
-(void)setAckSuccess:(BOOL)arg1 ;
-(void)setPairingUsingTool:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 nonce:(id)arg2 ;
-(void)updateWithSeed:(id)arg1 collaborativeKeyC2:(id)arg2 serverSignature:(id)arg3 serverPublicKey:(id)arg4 maskedAppleID:(id)arg5 userMessage:(id)arg6 baaIntermediateCert:(id)arg7 baaLeafCert:(id)arg8 ;
-(void)updateWithPayloadSignature:(id)arg1 attestation:(id)arg2 collaborativeKey:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 ecid:(id)arg7 chipId:(id)arg8 serialNumber:(id)arg9 ;
-(void)updateBeaconId:(id)arg1 ;
-(void)updateName:(id)arg1 roleId:(long long)arg2 ;
-(void)updatePairingLocation:(id)arg1 ;
-(void)updateAckSuccess:(BOOL)arg1 ;
-(void)updateToPairingUsingTool;
-(NSUUID *)beaconId;
-(NSData *)ecid;
-(NSData *)chipId;
-(NSData *)collaborativeKeyC1;
-(NSData *)payloadSignature;
-(NSData *)systemPublicKey;
-(void)setSystemPublicKey:(NSData *)arg1 ;
-(NSData *)refKeyPublicKey;
-(void)setRefKeyPublicKey:(NSData *)arg1 ;
-(NSData *)collaborativeKeyC2;
-(NSData *)serverSeed;
-(NSData *)serverPublicKey;
-(NSString *)maskedAppleID;
-(NSData *)baaLeaftCert;
-(NSData *)baaIntermediateCert;
-(NSData *)collaborativeKeyC3;
-(void)setCollaborativeKeyC3:(NSData *)arg1 ;
-(NSData *)confirmSignature;
-(void)setConfirmSignature:(NSData *)arg1 ;
-(BOOL)ackSuccess;
-(NSData *)keyGenerationStatus;
-(void)setKeyGenerationStatus:(NSData *)arg1 ;
-(CLLocation *)pairingLocation;
-(BOOL)pairingUsingTool;
@end

