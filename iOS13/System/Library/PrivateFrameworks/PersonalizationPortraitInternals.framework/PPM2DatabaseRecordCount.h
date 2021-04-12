/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2DatabaseRecordCount : PBCodable <NSCopying> {

	unsigned _schemaVersion;
	NSString* _tableName;
	SCD_Struct_PP1 _has;

}

@property (assign,nonatomic) BOOL hasSchemaVersion; 
@property (assign,nonatomic) unsigned schemaVersion;              //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTableName; 
@property (nonatomic,retain) NSString * tableName;                //@synthesize tableName=_tableName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)schemaVersion;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(void)setSchemaVersion:(unsigned)arg1 ;
-(void)setHasSchemaVersion:(BOOL)arg1 ;
-(BOOL)hasSchemaVersion;
-(BOOL)hasTableName;
@end

