/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPM2DatabaseCheckViolationCount : PBCodable <NSCopying> {

	NSString* _activeTreatments;
	int _pragmaCheckType;
	unsigned _schemaVersion;
	SCD_Struct_PP2 _has;

}

@property (assign,nonatomic) BOOL hasSchemaVersion; 
@property (assign,nonatomic) unsigned schemaVersion;                   //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPragmaCheckType; 
@property (assign,nonatomic) int pragmaCheckType;                      //@synthesize pragmaCheckType=_pragmaCheckType - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveTreatments; 
@property (nonatomic,retain) NSString * activeTreatments;              //@synthesize activeTreatments=_activeTreatments - In the implementation block
-(unsigned)schemaVersion;
-(id)dictionaryRepresentation;
-(NSString *)activeTreatments;
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
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasSchemaVersion:(BOOL)arg1 ;
-(BOOL)hasSchemaVersion;
-(int)pragmaCheckType;
-(void)setPragmaCheckType:(int)arg1 ;
-(void)setHasPragmaCheckType:(BOOL)arg1 ;
-(BOOL)hasPragmaCheckType;
-(id)pragmaCheckTypeAsString:(int)arg1 ;
-(int)StringAsPragmaCheckType:(id)arg1 ;
@end

