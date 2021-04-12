/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBatchReverseGeocodeResult, GEOPDCollectionResult, GEOPDPlaceQuestionnaireResult, GEOPDPlace, GEOPDPublisherResult;

@interface GEOPDMapsResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDBatchReverseGeocodeResult* _batchReverseGeocode;
	GEOPDCollectionResult* _collection;
	GEOPDPlaceQuestionnaireResult* _placeQuestionnaire;
	GEOPDPlace* _place;
	GEOPDPublisherResult* _publisher;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _resultType;
	struct {
		unsigned has_resultType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_batchReverseGeocode : 1;
		unsigned read_collection : 1;
		unsigned read_placeQuestionnaire : 1;
		unsigned read_place : 1;
		unsigned read_publisher : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (nonatomic,readonly) BOOL hasCollection; 
@property (nonatomic,retain) GEOPDCollectionResult * collection; 
@property (nonatomic,readonly) BOOL hasPublisher; 
@property (nonatomic,retain) GEOPDPublisherResult * publisher; 
@property (nonatomic,readonly) BOOL hasPlaceQuestionnaire; 
@property (nonatomic,retain) GEOPDPlaceQuestionnaireResult * placeQuestionnaire; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocode; 
@property (nonatomic,retain) GEOPDBatchReverseGeocodeResult * batchReverseGeocode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setPublisher:(GEOPDPublisherResult *)arg1 ;
-(GEOPDPublisherResult *)publisher;
-(id)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlace *)place;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDCollectionResult *)collection;
-(id)init;
-(void)setCollection:(GEOPDCollectionResult *)arg1 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(GEOPDBatchReverseGeocodeResult *)batchReverseGeocode;
-(void)setBatchReverseGeocode:(GEOPDBatchReverseGeocodeResult *)arg1 ;
-(BOOL)hasBatchReverseGeocode;
-(id)initWithData:(id)arg1 ;
-(GEOPDPlaceQuestionnaireResult *)placeQuestionnaire;
-(void)setHasResultType:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasPlace;
-(int)StringAsResultType:(id)arg1 ;
-(id)resultTypeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPlaceQuestionnaire:(GEOPDPlaceQuestionnaireResult *)arg1 ;
-(BOOL)hasResultType;
-(BOOL)hasPublisher;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasPlaceQuestionnaire;
-(BOOL)hasCollection;
@end

