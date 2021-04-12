/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPPoiCorrections, GEOPDPlaceRequest, GEOPDPlace;

@interface GEORPPoiFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPPoiCorrections* _corrections;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlace* _place;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_corrections : 1;
		unsigned wrote_placeRequest : 1;
		unsigned wrote_place : 1;
		unsigned wrote_correctionType : 1;
		unsigned wrote_addOtherPoi : 1;
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
-(void)_readPlace;
-(GEOPDPlace *)place;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)hasPlace;
-(void)_readPlaceRequest;
-(GEOPDPlaceRequest *)placeRequest;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(BOOL)hasPlaceRequest;
-(void)_readCorrections;
-(GEORPPoiCorrections *)corrections;
-(void)setCorrections:(GEORPPoiCorrections *)arg1 ;
-(BOOL)hasCorrections;
-(int)correctionType;
-(void)setCorrectionType:(int)arg1 ;
-(void)setHasCorrectionType:(BOOL)arg1 ;
-(BOOL)hasCorrectionType;
-(id)correctionTypeAsString:(int)arg1 ;
-(int)StringAsCorrectionType:(id)arg1 ;
-(BOOL)addOtherPoi;
-(void)setAddOtherPoi:(BOOL)arg1 ;
-(void)setHasAddOtherPoi:(BOOL)arg1 ;
-(BOOL)hasAddOtherPoi;
@end

