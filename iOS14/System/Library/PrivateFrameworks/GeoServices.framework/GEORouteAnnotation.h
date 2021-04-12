/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPBTransitArtwork, GEOMiniCard;

@interface GEORouteAnnotation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _artwork;
	GEOMiniCard* _infoCard;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _deprecatedOffsetMeters;
	float _offsetMeters;
	struct {
		unsigned has_deprecatedOffsetMeters : 1;
		unsigned has_offsetMeters : 1;
		unsigned read_unknownFields : 1;
		unsigned read_artwork : 1;
		unsigned read_infoCard : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeprecatedOffsetMeters; 
@property (assign,nonatomic) unsigned deprecatedOffsetMeters; 
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork; 
@property (nonatomic,readonly) BOOL hasInfoCard; 
@property (nonatomic,retain) GEOMiniCard * infoCard; 
@property (assign,nonatomic) BOOL hasOffsetMeters; 
@property (assign,nonatomic) float offsetMeters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setInfoCard:(GEOMiniCard *)arg1 ;
-(BOOL)hasInfoCard;
-(float)offsetMeters;
-(void)setDeprecatedOffsetMeters:(unsigned)arg1 ;
-(void)setOffsetMeters:(float)arg1 ;
-(unsigned)deprecatedOffsetMeters;
-(void)setHasOffsetMeters:(BOOL)arg1 ;
-(void)setHasDeprecatedOffsetMeters:(BOOL)arg1 ;
-(BOOL)hasDeprecatedOffsetMeters;
-(BOOL)hasOffsetMeters;
-(GEOPBTransitArtwork *)artwork;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEOMiniCard *)infoCard;
-(BOOL)hasArtwork;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

