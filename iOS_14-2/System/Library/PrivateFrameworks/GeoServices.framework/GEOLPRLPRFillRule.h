/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLPRLicensePlateStructure, GEOLPRTargetChar;

@interface GEOLPRLPRFillRule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _plateTypeIndexes;
	GEOLPRLicensePlateStructure* _frLicensePlateStructure;
	GEOLPRTargetChar* _fromChar;
	GEOLPRTargetChar* _toChar;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _fillType;
	struct {
		unsigned has_fillType : 1;
		unsigned read_plateTypeIndexes : 1;
		unsigned read_frLicensePlateStructure : 1;
		unsigned read_fromChar : 1;
		unsigned read_toChar : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasFrLicensePlateStructure; 
@property (nonatomic,retain) GEOLPRLicensePlateStructure * frLicensePlateStructure; 
@property (nonatomic,readonly) unsigned long long plateTypeIndexesCount; 
@property (nonatomic,readonly) unsigned* plateTypeIndexes; 
@property (nonatomic,readonly) BOOL hasFromChar; 
@property (nonatomic,retain) GEOLPRTargetChar * fromChar; 
@property (nonatomic,readonly) BOOL hasToChar; 
@property (nonatomic,retain) GEOLPRTargetChar * toChar; 
@property (assign,nonatomic) BOOL hasFillType; 
@property (assign,nonatomic) int fillType; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(GEOLPRTargetChar *)toChar;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasToChar;
-(GEOLPRLicensePlateStructure *)frLicensePlateStructure;
-(void)addPlateTypeIndexes:(unsigned)arg1 ;
-(void)setFromChar:(GEOLPRTargetChar *)arg1 ;
-(void)setFillType:(int)arg1 ;
-(BOOL)hasFromChar;
-(void)setFrLicensePlateStructure:(GEOLPRLicensePlateStructure *)arg1 ;
-(unsigned long long)plateTypeIndexesCount;
-(void)clearPlateTypeIndexes;
-(unsigned*)plateTypeIndexes;
-(unsigned)plateTypeIndexesAtIndex:(unsigned long long)arg1 ;
-(void)setPlateTypeIndexes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasFillType:(BOOL)arg1 ;
-(BOOL)hasFillType;
-(id)fillTypeAsString:(int)arg1 ;
-(int)StringAsFillType:(id)arg1 ;
-(BOOL)hasFrLicensePlateStructure;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOLPRTargetChar *)fromChar;
-(int)fillType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setToChar:(GEOLPRTargetChar *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

