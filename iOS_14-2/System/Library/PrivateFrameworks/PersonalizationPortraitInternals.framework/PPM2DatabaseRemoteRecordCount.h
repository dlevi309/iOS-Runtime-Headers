/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2DatabaseRemoteRecordCount : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	unsigned _schemaVersion;
	NSString* _tableName;
	SCD_Struct_PP1 _has;

}

@property (assign,nonatomic) BOOL hasSchemaVersion; 
@property (assign,nonatomic) unsigned schemaVersion;                   //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTableName; 
@property (nonatomic,retain) NSString * tableName;                     //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(unsigned)schemaVersion;
-(id)dictionaryRepresentation;
-(NSString *)activeTreatments;
-(NSString *)tableName;
-(void)setActiveTreatments:(NSString *)arg1 ;
-(BOOL)hasActiveTreatments;
-(void)mergeFrom:(id)arg1 ;
-(void)setSchemaVersion:(unsigned)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSchemaVersion:(BOOL)arg1 ;
-(BOOL)hasSchemaVersion;
-(BOOL)hasTableName;
@end

