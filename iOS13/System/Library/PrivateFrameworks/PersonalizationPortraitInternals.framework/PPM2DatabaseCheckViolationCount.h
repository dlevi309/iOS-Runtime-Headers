/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPM2DatabaseCheckViolationCount : PBCodable <NSCopying> {

	int _pragmaCheckType;
	unsigned _schemaVersion;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasSchemaVersion; 
@property (assign,nonatomic) unsigned schemaVersion;               //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPragmaCheckType; 
@property (assign,nonatomic) int pragmaCheckType;                  //@synthesize pragmaCheckType=_pragmaCheckType - In the implementation block
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
-(void)setSchemaVersion:(unsigned)arg1 ;
-(void)setHasSchemaVersion:(BOOL)arg1 ;
-(BOOL)hasSchemaVersion;
-(int)pragmaCheckType;
-(void)setPragmaCheckType:(int)arg1 ;
-(void)setHasPragmaCheckType:(BOOL)arg1 ;
-(BOOL)hasPragmaCheckType;
-(id)pragmaCheckTypeAsString:(int)arg1 ;
-(int)StringAsPragmaCheckType:(id)arg1 ;
@end

