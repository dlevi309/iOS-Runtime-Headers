/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, HDCodableSource;

@interface HDCodableSourceAuthorization : PBCodable <NSCopying> {

	NSMutableArray* _authorizations;
	NSData* _backupUUID;
	HDCodableSource* _source;
	NSData* _sourceUUID;

}

@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                          //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * authorizations;              //@synthesize authorizations=_authorizations - In the implementation block
@property (nonatomic,readonly) BOOL hasBackupUUID; 
@property (nonatomic,retain) NSData * backupUUID;                          //@synthesize backupUUID=_backupUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) HDCodableSource * source;                     //@synthesize source=_source - In the implementation block
+(Class)authorizationsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(HDCodableSource *)arg1 ;
-(HDCodableSource *)source;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSource;
-(NSData *)backupUUID;
-(NSData *)sourceUUID;
-(void)setSourceUUID:(NSData *)arg1 ;
-(BOOL)hasSourceUUID;
-(void)addAuthorizations:(id)arg1 ;
-(unsigned long long)authorizationsCount;
-(void)clearAuthorizations;
-(id)authorizationsAtIndex:(unsigned long long)arg1 ;
-(void)setBackupUUID:(NSData *)arg1 ;
-(BOOL)hasBackupUUID;
-(NSMutableArray *)authorizations;
-(void)setAuthorizations:(NSMutableArray *)arg1 ;
-(id)decodedSourceUUID;
-(id)decodedBackupUUID;
@end

