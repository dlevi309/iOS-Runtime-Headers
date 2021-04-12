/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDGeographicCoordinate, GEOPDOrientedPosition, GEOPDPhotoPosition;

@interface GEOPDStorefrontView : PBCodable <NSCopying> {

	PBDataReader* _reader;
	unsigned long long _imdataId;
	GEOPDGeographicCoordinate* _lookAtGeo;
	GEOPDOrientedPosition* _lookAt;
	GEOPDPhotoPosition* _photoPosition;
	GEOPDGeographicCoordinate* _viewpointGeo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_imdataId : 1;
		unsigned read_lookAtGeo : 1;
		unsigned read_lookAt : 1;
		unsigned read_photoPosition : 1;
		unsigned read_viewpointGeo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPhotoPosition; 
@property (nonatomic,retain) GEOPDPhotoPosition * photoPosition; 
@property (assign,nonatomic) BOOL hasImdataId; 
@property (assign,nonatomic) unsigned long long imdataId; 
@property (nonatomic,readonly) BOOL hasLookAt; 
@property (nonatomic,retain) GEOPDOrientedPosition * lookAt; 
@property (nonatomic,readonly) BOOL hasLookAtGeo; 
@property (nonatomic,retain) GEOPDGeographicCoordinate * lookAtGeo; 
@property (nonatomic,readonly) BOOL hasViewpointGeo; 
@property (nonatomic,retain) GEOPDGeographicCoordinate * viewpointGeo; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDGeographicCoordinate *)viewpointGeo;
-(void)readAll:(BOOL)arg1 ;
-(void)setViewpointGeo:(GEOPDGeographicCoordinate *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setLookAt:(GEOPDOrientedPosition *)arg1 ;
-(BOOL)hasImdataId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasPhotoPosition;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLookAtGeo:(GEOPDGeographicCoordinate *)arg1 ;
-(void)setHasImdataId:(BOOL)arg1 ;
-(void)setImdataId:(unsigned long long)arg1 ;
-(BOOL)hasViewpointGeo;
-(id)description;
-(GEOPDGeographicCoordinate *)lookAtGeo;
-(unsigned long long)imdataId;
-(GEOPDPhotoPosition *)photoPosition;
-(unsigned long long)hash;
-(GEOPDOrientedPosition *)lookAt;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLookAt;
-(BOOL)hasLookAtGeo;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPhotoPosition:(GEOPDPhotoPosition *)arg1 ;
@end

