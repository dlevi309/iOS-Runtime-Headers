/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORoadAccessPoint, GEORPCorrectedString;

@interface GEORPEditedAccessPoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORoadAccessPoint* _corrected;
	GEORPCorrectedString* _name;
	GEORoadAccessPoint* _original;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_corrected : 1;
		unsigned read_name : 1;
		unsigned read_original : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOriginal; 
@property (nonatomic,retain) GEORoadAccessPoint * original; 
@property (nonatomic,readonly) BOOL hasCorrected; 
@property (nonatomic,retain) GEORoadAccessPoint * corrected; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEORPCorrectedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(GEORoadAccessPoint *)corrected;
-(void)setCorrected:(GEORoadAccessPoint *)arg1 ;
-(void)setOriginal:(GEORoadAccessPoint *)arg1 ;
-(BOOL)hasOriginal;
-(BOOL)hasCorrected;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPCorrectedString *)name;
-(id)description;
-(GEORoadAccessPoint *)original;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(GEORPCorrectedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

