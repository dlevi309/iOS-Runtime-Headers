/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_attribution : 1;
		unsigned wrote_placeCollection : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceCollection; 
@property (nonatomic,retain) GEOPDPlaceCollection * placeCollection; 
@property (nonatomic,readonly) BOOL hasAttribution; 
@property (nonatomic,retain) GEOPDAttribution * attribution; 
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
-(GEOPDAttribution *)attribution;
-(void)_readPlaceCollection;
-(void)_readAttribution;
-(GEOPDPlaceCollection *)placeCollection;
-(void)setPlaceCollection:(GEOPDPlaceCollection *)arg1 ;
-(void)setAttribution:(GEOPDAttribution *)arg1 ;
-(BOOL)hasPlaceCollection;
-(BOOL)hasAttribution;
@end

