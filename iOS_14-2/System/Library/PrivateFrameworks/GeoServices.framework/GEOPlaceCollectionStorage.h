/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAttribution, GEOPDPlaceCollection;

@interface GEOPlaceCollectionStorage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAttribution* _attribution;
	GEOPDPlaceCollection* _placeCollection;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_attribution : 1;
		unsigned read_placeCollection : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceCollection; 
@property (nonatomic,retain) GEOPDPlaceCollection * placeCollection; 
@property (nonatomic,readonly) BOOL hasAttribution; 
@property (nonatomic,retain) GEOPDAttribution * attribution; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPlaceCollection:(GEOPDPlaceCollection *)arg1 ;
-(id)description;
-(GEOPDAttribution *)attribution;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAttribution;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDPlaceCollection *)placeCollection;
-(BOOL)hasPlaceCollection;
-(void)setAttribution:(GEOPDAttribution *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

