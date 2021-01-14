/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOPDMapsIdentifier, NSString, GEOStyleAttributes;

@interface GEOPDLinkedPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _center;
	unsigned long long _featureId;
	GEOPDMapsIdentifier* _mapsId;
	NSString* _name;
	GEOStyleAttributes* _styleAttributes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_featureId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_center : 1;
		unsigned read_mapsId : 1;
		unsigned read_name : 1;
		unsigned read_styleAttributes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasStyleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(BOOL)hasName;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCenter;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(NSString *)name;
-(unsigned long long)featureId;
-(id)description;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)hasMapsId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

