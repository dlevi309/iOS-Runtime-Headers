/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMetadataDictionary, NSString, NSData;

@interface HDCodableHealthObject : PBCodable <HDDecoding, NSCopying> {

	double _creationDate;
	long long _externalSyncObjectCode;
	HDCodableMetadataDictionary* _metadataDictionary;
	NSString* _sourceBundleIdentifier;
	NSData* _uuid;
	SCD_Struct_HD11 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataDictionary; 
@property (nonatomic,retain) HDCodableMetadataDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * sourceBundleIdentifier;                             //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                                           //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasExternalSyncObjectCode; 
@property (assign,nonatomic) long long externalSyncObjectCode;                              //@synthesize externalSyncObjectCode=_externalSyncObjectCode - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)sourceBundleIdentifier;
-(NSData *)uuid;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasCreationDate;
-(void)setCreationDate:(double)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(double)creationDate;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(HDCodableMetadataDictionary *)metadataDictionary;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(long long)externalSyncObjectCode;
-(void)setExternalSyncObjectCode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSourceBundleIdentifier;
-(void)setMetadataDictionary:(HDCodableMetadataDictionary *)arg1 ;
-(BOOL)hasMetadataDictionary;
-(id)decodedMetadata;
-(void)setHasExternalSyncObjectCode:(BOOL)arg1 ;
-(BOOL)hasExternalSyncObjectCode;
@end

