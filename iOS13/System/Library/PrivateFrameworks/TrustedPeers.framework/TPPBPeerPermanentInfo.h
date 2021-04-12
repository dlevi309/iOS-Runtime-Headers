/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface TPPBPeerPermanentInfo : PBCodable <NSCopying> {

	unsigned long long _epoch;
	NSData* _encryptionPubKey;
	NSString* _machineId;
	NSString* _modelId;
	NSData* _signingPubKey;
	SCD_Struct_TP3 _has;

}

@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) unsigned long long epoch;                //@synthesize epoch=_epoch - In the implementation block
@property (nonatomic,readonly) BOOL hasSigningPubKey; 
@property (nonatomic,retain) NSData * signingPubKey;                  //@synthesize signingPubKey=_signingPubKey - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptionPubKey; 
@property (nonatomic,retain) NSData * encryptionPubKey;               //@synthesize encryptionPubKey=_encryptionPubKey - In the implementation block
@property (nonatomic,readonly) BOOL hasMachineId; 
@property (nonatomic,retain) NSString * machineId;                    //@synthesize machineId=_machineId - In the implementation block
@property (nonatomic,readonly) BOOL hasModelId; 
@property (nonatomic,retain) NSString * modelId;                      //@synthesize modelId=_modelId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)epoch;
-(void)setEpoch:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)machineId;
-(BOOL)hasEpoch;
-(void)setHasEpoch:(BOOL)arg1 ;
-(NSData *)signingPubKey;
-(void)setSigningPubKey:(NSData *)arg1 ;
-(NSData *)encryptionPubKey;
-(void)setEncryptionPubKey:(NSData *)arg1 ;
-(BOOL)hasSigningPubKey;
-(BOOL)hasEncryptionPubKey;
-(BOOL)hasMachineId;
-(BOOL)hasModelId;
-(void)setMachineId:(NSString *)arg1 ;
-(NSString *)modelId;
-(void)setModelId:(NSString *)arg1 ;
@end

