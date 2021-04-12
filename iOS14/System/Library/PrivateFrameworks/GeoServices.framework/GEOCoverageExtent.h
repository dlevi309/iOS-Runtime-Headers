/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOCoverageExtent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOCoverageException* _coverageExceptions;
	unsigned long long _coverageExceptionsCount;
	unsigned long long _coverageExceptionsSpace;
	unsigned _maxX;
	unsigned _maxY;
	unsigned _minX;
	unsigned _minY;
	unsigned _zoom;
	struct {
		unsigned has_maxX : 1;
		unsigned has_maxY : 1;
		unsigned has_minX : 1;
		unsigned has_minY : 1;
		unsigned has_zoom : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMinX; 
@property (assign,nonatomic) unsigned minX; 
@property (assign,nonatomic) BOOL hasMinY; 
@property (assign,nonatomic) unsigned minY; 
@property (assign,nonatomic) BOOL hasMaxX; 
@property (assign,nonatomic) unsigned maxX; 
@property (assign,nonatomic) BOOL hasMaxY; 
@property (assign,nonatomic) unsigned maxY; 
@property (assign,nonatomic) BOOL hasZoom; 
@property (assign,nonatomic) unsigned zoom; 
@property (nonatomic,readonly) unsigned long long coverageExceptionsCount; 
@property (nonatomic,readonly) GEOCoverageException* coverageExceptions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(unsigned)maxX;
-(id)dictionaryRepresentation;
-(unsigned)minX;
-(unsigned)minY;
-(unsigned)maxY;
-(void)setZoom:(unsigned)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned)zoom;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasMinX;
-(BOOL)hasMinY;
-(BOOL)hasMaxX;
-(BOOL)hasMaxY;
-(void)mergeFrom:(id)arg1 ;
-(void)setMaxX:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasMinX:(BOOL)arg1 ;
-(void)setHasMinY:(BOOL)arg1 ;
-(void)setHasMaxX:(BOOL)arg1 ;
-(void)setHasMaxY:(BOOL)arg1 ;
-(void)clearCoverageExceptions;
-(void)addCoverageException:(GEOCoverageException)arg1 ;
-(unsigned long long)coverageExceptionsCount;
-(GEOCoverageException*)coverageExceptions;
-(GEOCoverageException)coverageExceptionAtIndex:(unsigned long long)arg1 ;
-(void)setCoverageExceptions:(GEOCoverageException*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(void)setMinX:(unsigned)arg1 ;
-(void)setMinY:(unsigned)arg1 ;
-(void)setMaxY:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasZoom:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZoom;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

