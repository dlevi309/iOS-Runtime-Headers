/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
*/

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, OTEscrowRecordMetadataClientMetadata;

@interface OTEscrowRecordMetadata : PBCodable <NSCopying> {

	unsigned long long _secureBackupTimestamp;
	unsigned long long _secureBackupUsesMultipleIcscs;
	NSData* _backupKeybagDigest;
	NSString* _bottleId;
	NSString* _bottleValidity;
	OTEscrowRecordMetadataClientMetadata* _clientMetadata;
	NSData* _escrowedSpki;
	NSData* _peerInfo;
	NSString* _serial;
	SCD_Struct_OT1 _has;

}

@property (nonatomic,readonly) BOOL hasBackupKeybagDigest; 
@property (nonatomic,retain) NSData * backupKeybagDigest;                                        //@synthesize backupKeybagDigest=_backupKeybagDigest - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) OTEscrowRecordMetadataClientMetadata * clientMetadata;              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupUsesMultipleIcscs; 
@property (assign,nonatomic) unsigned long long secureBackupUsesMultipleIcscs;                   //@synthesize secureBackupUsesMultipleIcscs=_secureBackupUsesMultipleIcscs - In the implementation block
@property (nonatomic,readonly) BOOL hasBottleId; 
@property (nonatomic,retain) NSString * bottleId;                                                //@synthesize bottleId=_bottleId - In the implementation block
@property (assign,nonatomic) BOOL hasSecureBackupTimestamp; 
@property (assign,nonatomic) unsigned long long secureBackupTimestamp;                           //@synthesize secureBackupTimestamp=_secureBackupTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEscrowedSpki; 
@property (nonatomic,retain) NSData * escrowedSpki;                                              //@synthesize escrowedSpki=_escrowedSpki - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerInfo; 
@property (nonatomic,retain) NSData * peerInfo;                                                  //@synthesize peerInfo=_peerInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBottleValidity; 
@property (nonatomic,retain) NSString * bottleValidity;                                          //@synthesize bottleValidity=_bottleValidity - In the implementation block
@property (nonatomic,readonly) BOOL hasSerial; 
@property (nonatomic,retain) NSString * serial;                                                  //@synthesize serial=_serial - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasClientMetadata;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)serial;
-(id)description;
-(BOOL)hasBackupKeybagDigest;
-(void)setSecureBackupUsesMultipleIcscs:(unsigned long long)arg1 ;
-(void)setHasSecureBackupUsesMultipleIcscs:(BOOL)arg1 ;
-(BOOL)hasSecureBackupUsesMultipleIcscs;
-(BOOL)hasBottleId;
-(void)setSecureBackupTimestamp:(unsigned long long)arg1 ;
-(void)setHasSecureBackupTimestamp:(BOOL)arg1 ;
-(NSString *)bottleId;
-(BOOL)hasSecureBackupTimestamp;
-(BOOL)hasEscrowedSpki;
-(BOOL)hasPeerInfo;
-(BOOL)hasBottleValidity;
-(BOOL)hasSerial;
-(NSData *)backupKeybagDigest;
-(void)setBackupKeybagDigest:(NSData *)arg1 ;
-(unsigned long long)secureBackupUsesMultipleIcscs;
-(void)setBottleId:(NSString *)arg1 ;
-(unsigned long long)secureBackupTimestamp;
-(NSData *)escrowedSpki;
-(void)setEscrowedSpki:(NSData *)arg1 ;
-(void)setPeerInfo:(NSData *)arg1 ;
-(NSString *)bottleValidity;
-(void)setBottleValidity:(NSString *)arg1 ;
-(void)setSerial:(NSString *)arg1 ;
-(void)setClientMetadata:(OTEscrowRecordMetadataClientMetadata *)arg1 ;
-(NSData *)peerInfo;
-(unsigned long long)hash;
-(OTEscrowRecordMetadataClientMetadata *)clientMetadata;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

