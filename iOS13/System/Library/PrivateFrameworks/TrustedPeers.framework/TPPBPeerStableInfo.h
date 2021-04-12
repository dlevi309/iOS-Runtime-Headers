/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface TPPBPeerStableInfo : PBCodable <NSCopying> {

	unsigned long long _clock;
	unsigned long long _flexiblePolicyVersion;
	unsigned long long _frozenPolicyVersion;
	NSString* _deviceName;
	NSString* _flexiblePolicyHash;
	NSString* _frozenPolicyHash;
	NSString* _osVersion;
	NSMutableArray* _policySecrets;
	NSData* _recoveryEncryptionPublicKey;
	NSData* _recoverySigningPublicKey;
	NSString* _serialNumber;
	SCD_Struct_TP5 _has;

}

@property (assign,nonatomic) BOOL hasClock; 
@property (assign,nonatomic) unsigned long long clock;                              //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) BOOL hasFrozenPolicyVersion; 
@property (assign,nonatomic) unsigned long long frozenPolicyVersion;                //@synthesize frozenPolicyVersion=_frozenPolicyVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasFrozenPolicyHash; 
@property (nonatomic,retain) NSString * frozenPolicyHash;                           //@synthesize frozenPolicyHash=_frozenPolicyHash - In the implementation block
@property (nonatomic,readonly) BOOL hasOsVersion; 
@property (nonatomic,retain) NSString * osVersion;                                  //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                                 //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoverySigningPublicKey; 
@property (nonatomic,retain) NSData * recoverySigningPublicKey;                     //@synthesize recoverySigningPublicKey=_recoverySigningPublicKey - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoveryEncryptionPublicKey; 
@property (nonatomic,retain) NSData * recoveryEncryptionPublicKey;                  //@synthesize recoveryEncryptionPublicKey=_recoveryEncryptionPublicKey - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                               //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasFlexiblePolicyVersion; 
@property (assign,nonatomic) unsigned long long flexiblePolicyVersion;              //@synthesize flexiblePolicyVersion=_flexiblePolicyVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasFlexiblePolicyHash; 
@property (nonatomic,retain) NSString * flexiblePolicyHash;                         //@synthesize flexiblePolicyHash=_flexiblePolicyHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * policySecrets;                        //@synthesize policySecrets=_policySecrets - In the implementation block
+(Class)policySecretsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(BOOL)hasOsVersion;
-(void)setSerialNumber:(NSString *)arg1 ;
-(unsigned long long)clock;
-(void)setClock:(unsigned long long)arg1 ;
-(BOOL)hasDeviceName;
-(NSData *)recoverySigningPublicKey;
-(NSData *)recoveryEncryptionPublicKey;
-(unsigned long long)frozenPolicyVersion;
-(unsigned long long)flexiblePolicyVersion;
-(NSMutableArray *)policySecrets;
-(void)setPolicySecrets:(NSMutableArray *)arg1 ;
-(void)setRecoverySigningPublicKey:(NSData *)arg1 ;
-(void)setRecoveryEncryptionPublicKey:(NSData *)arg1 ;
-(void)setHasClock:(BOOL)arg1 ;
-(BOOL)hasClock;
-(void)setFrozenPolicyVersion:(unsigned long long)arg1 ;
-(void)setHasFrozenPolicyVersion:(BOOL)arg1 ;
-(BOOL)hasFrozenPolicyVersion;
-(BOOL)hasFrozenPolicyHash;
-(BOOL)hasRecoverySigningPublicKey;
-(BOOL)hasRecoveryEncryptionPublicKey;
-(BOOL)hasSerialNumber;
-(void)setFlexiblePolicyVersion:(unsigned long long)arg1 ;
-(void)setHasFlexiblePolicyVersion:(BOOL)arg1 ;
-(BOOL)hasFlexiblePolicyVersion;
-(BOOL)hasFlexiblePolicyHash;
-(void)clearPolicySecrets;
-(void)addPolicySecrets:(id)arg1 ;
-(unsigned long long)policySecretsCount;
-(id)policySecretsAtIndex:(unsigned long long)arg1 ;
-(NSString *)frozenPolicyHash;
-(void)setFrozenPolicyHash:(NSString *)arg1 ;
-(NSString *)flexiblePolicyHash;
-(void)setFlexiblePolicyHash:(NSString *)arg1 ;
@end

