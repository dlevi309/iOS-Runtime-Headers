/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_featureBuilding : 1;
		unsigned wrote_featurePoi : 1;
		unsigned wrote_featureVenue : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readFeatureVenue;
-(void)_readFeatureBuilding;
-(void)_readFeaturePoi;
-(GEOPDFeatureVenue *)featureVenue;
-(GEOPDFeatureBuilding *)featureBuilding;
-(GEOPDFeaturePOI *)featurePoi;
-(void)setFeatureVenue:(GEOPDFeatureVenue *)arg1 ;
-(void)setFeatureBuilding:(GEOPDFeatureBuilding *)arg1 ;
-(void)setFeaturePoi:(GEOPDFeaturePOI *)arg1 ;
-(BOOL)hasFeatureVenue;
-(BOOL)hasFeatureBuilding;
-(BOOL)hasFeaturePoi;
@end

