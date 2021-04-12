/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPTransitPoiCorrections, NSMutableArray, GEOPDPlaceRequest, GEOPDPlace, GEORPTransitLineTileInfo;

@interface GEORPTransitPoiFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPTransitPoiCorrections* _corrections;
	NSMutableArray* _directionsRequests;
	NSMutableArray* _directionsResponses;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
	GEORPTransitLineTileInfo* _transitLineTileInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _correctionType;
	struct {
		unsigned has_correctionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_corrections : 1;
		unsigned read_directionsRequests : 1;
		unsigned read_directionsResponses : 1;
		unsigned read_placeRequest : 1;
		unsigned read_place : 1;
		unsigned read_transitLineTileInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasCorrectionType; 
@property (assign,nonatomic) int correctionType; 
@property (nonatomic,readonly) BOOL hasCorrections; 
@property (nonatomic,retain) GEORPTransitPoiCorrections * corrections; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasTransitLineTileInfo; 
@property (nonatomic,retain) GEORPTransitLineTileInfo * transitLineTileInfo; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (nonatomic,retain) NSMutableArray * directionsRequests; 
@property (nonatomic,retain) NSMutableArray * directionsResponses; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)directionsRequestType;
+(Class)directionsResponseType;
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
-(void)addDirectionsRequest:(id)arg1 ;
-(void)addDirectionsResponse:(id)arg1 ;
-(unsigned long long)directionsRequestsCount;
-(void)clearDirectionsRequests;
-(id)directionsRequestAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)directionsResponsesCount;
-(void)clearDirectionsResponses;
-(id)directionsResponseAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)directionsRequests;
-(void)setDirectionsRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)directionsResponses;
-(void)setDirectionsResponses:(NSMutableArray *)arg1 ;
-(GEOPDPlaceRequest *)placeRequest;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEORPTransitPoiCorrections *)corrections;
-(void)setCorrections:(GEORPTransitPoiCorrections *)arg1 ;
-(BOOL)hasCorrections;
-(GEORPTransitLineTileInfo *)transitLineTileInfo;
-(void)setTransitLineTileInfo:(GEORPTransitLineTileInfo *)arg1 ;
-(BOOL)hasTransitLineTileInfo;
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

