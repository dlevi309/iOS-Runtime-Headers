/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPPoiCorrections, GEOPDPlaceRequest, GEOPDPlace, GEORPCuratedCollectionContext;

@interface GEORPPoiFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPPoiCorrections* _corrections;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
	GEORPCuratedCollectionContext* _poiCuratedCollectionContext;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionType;
	BOOL _addOtherPoi;
	struct {
		unsigned has_correctionType : 1;
		unsigned has_addOtherPoi : 1;
		unsigned read_unknownFields : 1;
		unsigned read_corrections : 1;
		unsigned read_placeRequest : 1;
		unsigned read_place : 1;
		unsigned read_poiCuratedCollectionContext : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCorrectionType; 
@property (assign,nonatomic) int correctionType; 
@property (nonatomic,readonly) BOOL hasCorrections; 
@property (nonatomic,retain) GEORPPoiCorrections * corrections; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (assign,nonatomic) BOOL hasAddOtherPoi; 
@property (assign,nonatomic) BOOL addOtherPoi; 
@property (nonatomic,readonly) BOOL hasPoiCuratedCollectionContext; 
@property (nonatomic,retain) GEORPCuratedCollectionContext * poiCuratedCollectionContext; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlace *)place;
-(BOOL)hasPlaceRequest;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setCorrectionType:(int)arg1 ;
-(int)correctionType;
-(void)setHasCorrectionType:(BOOL)arg1 ;
-(BOOL)hasCorrectionType;
-(id)correctionTypeAsString:(int)arg1 ;
-(int)StringAsCorrectionType:(id)arg1 ;
-(GEOPDPlaceRequest *)placeRequest;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPPoiCorrections *)corrections;
-(void)setCorrections:(GEORPPoiCorrections *)arg1 ;
-(BOOL)hasCorrections;
-(BOOL)addOtherPoi;
-(void)setAddOtherPoi:(BOOL)arg1 ;
-(GEORPCuratedCollectionContext *)poiCuratedCollectionContext;
-(void)setPoiCuratedCollectionContext:(GEORPCuratedCollectionContext *)arg1 ;
-(void)setHasAddOtherPoi:(BOOL)arg1 ;
-(BOOL)hasAddOtherPoi;
-(BOOL)hasPoiCuratedCollectionContext;
-(id)description;
-(BOOL)hasPlace;
-(unsigned long long)hash;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

