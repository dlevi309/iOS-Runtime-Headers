/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDMapsIdentifier, GEOPDPlace;

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _distance;
	GEOPDMapsIdentifier* _mapsId;
	unsigned long long _muid;
	GEOPDPlace* _place;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _resultProviderId;
	struct {
		unsigned has_distance : 1;
		unsigned has_muid : 1;
		unsigned has_resultProviderId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_mapsId : 1;
		unsigned read_place : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) double distance; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setDistance:(double)arg1 ;
-(int)resultProviderId;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDPlace *)place;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(double)distance;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasPlace;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)hasMapsId;
-(unsigned long long)hash;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)muid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

