/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDFeatureBuilding* _featureBuilding;
	GEOPDFeaturePOI* _featurePoi;
	GEOPDFeatureVenue* _featureVenue;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_featureBuilding : 1;
		unsigned read_featurePoi : 1;
		unsigned read_featureVenue : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasFeatureVenue; 
@property (nonatomic,retain) GEOPDFeatureVenue * featureVenue; 
@property (nonatomic,readonly) BOOL hasFeatureBuilding; 
@property (nonatomic,retain) GEOPDFeatureBuilding * featureBuilding; 
@property (nonatomic,readonly) BOOL hasFeaturePoi; 
@property (nonatomic,retain) GEOPDFeaturePOI * featurePoi; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDFeatureBuilding *)featureBuilding;
-(id)init;
-(GEOPDFeatureVenue *)featureVenue;
-(void)setFeatureVenue:(GEOPDFeatureVenue *)arg1 ;
-(void)setFeatureBuilding:(GEOPDFeatureBuilding *)arg1 ;
-(void)setFeaturePoi:(GEOPDFeaturePOI *)arg1 ;
-(BOOL)hasFeaturePoi;
-(BOOL)hasFeatureVenue;
-(BOOL)hasFeatureBuilding;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDFeaturePOI *)featurePoi;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

