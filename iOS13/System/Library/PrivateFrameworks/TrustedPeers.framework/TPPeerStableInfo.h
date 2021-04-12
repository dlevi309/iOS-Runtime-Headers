/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


#import <TrustedPeers/TrustedPeers-Structs.h>
@class TPPolicyVersion, NSDictionary, NSString, NSData;

@interface TPPeerStableInfo : NSObject {

	unsigned long long _clock;
	TPPolicyVersion* _frozenPolicyVersion;
	TPPolicyVersion* _flexiblePolicyVersion;
	NSDictionary* _policySecrets;
	NSString* _deviceName;
	NSString* _serialNumber;
	NSString* _osVersion;
	NSData* _recoverySigningPublicKey;
	NSData* _recoveryEncryptionPublicKey;
	NSData* _data;
	NSData* _sig;

}

@property (assign,nonatomic) unsigned long long clock;                          //@synthesize clock=_clock - In the implementation block
@property (nonatomic,retain) NSDictionary * policySecrets;                      //@synthesize policySecrets=_policySecrets - In the implementation block
@property (nonatomic,retain) NSData * recoverySigningPublicKey;                 //@synthesize recoverySigningPublicKey=_recoverySigningPublicKey - In the implementation block
@property (nonatomic,retain) NSData * recoveryEncryptionPublicKey;              //@synthesize recoveryEncryptionPublicKey=_recoveryEncryptionPublicKey - In the implementation block
@property (nonatomic,retain) NSData * data;                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * sig;                                      //@synthesize sig=_sig - In the implementation block
@property (readonly) TPPolicyVersion * frozenPolicyVersion;                     //@synthesize frozenPolicyVersion=_frozenPolicyVersion - In the implementation block
@property (readonly) TPPolicyVersion * flexiblePolicyVersion;                   //@synthesize flexiblePolicyVersion=_flexiblePolicyVersion - In the implementation block
@property (nonatomic,readonly) NSString * deviceName;                           //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
+(id)stableInfoWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 deviceName:(id)arg5 serialNumber:(id)arg6 osVersion:(id)arg7 signingKeyPair:(id)arg8 recoverySigningPubKey:(id)arg9 recoveryEncryptionPubKey:(id)arg10 error:(id*)arg11 ;
+(id)stableInfoWithData:(id)arg1 sig:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(NSString *)osVersion;
-(NSData *)sig;
-(unsigned long long)clock;
-(void)setClock:(unsigned long long)arg1 ;
-(void)setSig:(NSData *)arg1 ;
-(BOOL)checkSignatureWithKey:(id)arg1 ;
-(NSData *)recoverySigningPublicKey;
-(NSData *)recoveryEncryptionPublicKey;
-(id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 deviceName:(id)arg5 serialNumber:(id)arg6 osVersion:(id)arg7 recoverySigningPubKey:(id)arg8 recoveryEncryptionPubKey:(id)arg9 data:(id)arg10 sig:(id)arg11 ;
-(BOOL)isEqualToPeerStableInfo:(id)arg1 ;
-(id)bestPolicyVersion;
-(TPPolicyVersion *)frozenPolicyVersion;
-(TPPolicyVersion *)flexiblePolicyVersion;
-(NSDictionary *)policySecrets;
-(void)setPolicySecrets:(NSDictionary *)arg1 ;
-(void)setRecoverySigningPublicKey:(NSData *)arg1 ;
-(void)setRecoveryEncryptionPublicKey:(NSData *)arg1 ;
@end

