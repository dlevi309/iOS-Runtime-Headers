/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying> {

	unsigned _dataVersion;
	unsigned _formatVersion;
	unsigned _patchVersion;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasDataVersion; 
@property (assign,nonatomic) unsigned dataVersion; 
@property (assign,nonatomic) BOOL hasFormatVersion; 
@property (assign,nonatomic) unsigned formatVersion; 
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) unsigned patchVersion; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)dataVersion;
-(void)setFormatVersion:(unsigned)arg1 ;
-(void)setPatchVersion:(unsigned)arg1 ;
-(void)setHasDataVersion:(BOOL)arg1 ;
-(unsigned)formatVersion;
-(void)setHasFormatVersion:(BOOL)arg1 ;
-(BOOL)hasFormatVersion;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setDataVersion:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDataVersion;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)patchVersion;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

