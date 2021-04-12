/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableNanoSyncActivationRestore, HDCodableNanoSyncChangeSet, NSData, HDCodableNanoSyncStatus, NSString;

@interface HDCodableNanoSyncMessage : PBCodable <HDNanoSyncDescription, NSCopying> {

	HDCodableNanoSyncActivationRestore* _activationRestore;
	HDCodableNanoSyncChangeSet* _changeSet;
	NSData* _healthPairingUUID;
	NSData* _persistentPairingUUID;
	HDCodableNanoSyncStatus* _status;
	int _version;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasPersistentPairingUUID; 
@property (nonatomic,retain) NSData * persistentPairingUUID;                                      //@synthesize persistentPairingUUID=_persistentPairingUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasHealthPairingUUID; 
@property (nonatomic,retain) NSData * healthPairingUUID;                                          //@synthesize healthPairingUUID=_healthPairingUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeSet; 
@property (nonatomic,retain) HDCodableNanoSyncChangeSet * changeSet;                              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,retain) HDCodableNanoSyncStatus * status;                                    //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasActivationRestore; 
@property (nonatomic,retain) HDCodableNanoSyncActivationRestore * activationRestore;              //@synthesize activationRestore=_activationRestore - In the implementation block
+(id)messageWithSyncStore:(id)arg1 ;
+(id)messageFromPersistentUserInfo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(HDCodableNanoSyncChangeSet *)changeSet;
-(void)mergeFrom:(id)arg1 ;
-(void)setChangeSet:(HDCodableNanoSyncChangeSet *)arg1 ;
-(BOOL)hasStatus;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(HDCodableNanoSyncStatus *)arg1 ;
-(void)setVersion:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HDCodableNanoSyncStatus *)status;
-(id)nanoSyncDescription;
-(id)decodedPersistentPairingUUID;
-(id)decodedHealthPairingUUID;
-(HDCodableNanoSyncActivationRestore *)activationRestore;
-(BOOL)hasChangeSet;
-(void)setPersistentPairingUUID:(NSData *)arg1 ;
-(void)setHealthPairingUUID:(NSData *)arg1 ;
-(void)setActivationRestore:(HDCodableNanoSyncActivationRestore *)arg1 ;
-(id)copyPersistentUserInfo;
-(BOOL)hasPersistentPairingUUID;
-(BOOL)hasHealthPairingUUID;
-(BOOL)hasActivationRestore;
-(NSData *)persistentPairingUUID;
-(NSData *)healthPairingUUID;
@end

