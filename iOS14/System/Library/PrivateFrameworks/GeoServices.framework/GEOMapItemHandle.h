/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOMapItemClientAttributes, GEOPDPlaceRefinementParameters, GEOMapItemInitialRequestData;

@interface GEOMapItemHandle : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPDPlaceRefinementParameters* _placeRefinementParameters;
	GEOMapItemInitialRequestData* _placeRequestData;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _handleType;
	struct {
		unsigned has_handleType : 1;
		unsigned read_clientAttributes : 1;
		unsigned read_placeRefinementParameters : 1;
		unsigned read_placeRequestData : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHandleType; 
@property (assign,nonatomic) int handleType; 
@property (nonatomic,readonly) BOOL hasPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDPlaceRefinementParameters * placeRefinementParameters; 
@property (nonatomic,readonly) BOOL hasPlaceRequestData; 
@property (nonatomic,retain) GEOMapItemInitialRequestData * placeRequestData; 
@property (nonatomic,readonly) BOOL hasClientAttributes; 
@property (nonatomic,retain) GEOMapItemClientAttributes * clientAttributes; 
+(id)handleDataForMapItem:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasPlaceRefinementParameters;
-(id)dictionaryRepresentation;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(GEOMapItemInitialRequestData *)placeRequestData;
-(void)mergeFrom:(id)arg1 ;
-(int)handleType;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasClientAttributes;
-(id)handleTypeAsString:(int)arg1 ;
-(id)description;
-(void)setPlaceRequestData:(GEOMapItemInitialRequestData *)arg1 ;
-(GEOMapItemClientAttributes *)clientAttributes;
-(int)StringAsHandleType:(id)arg1 ;
-(void)setHasHandleType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestData;
-(unsigned long long)hash;
-(void)setHandleType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setClientAttributes:(GEOMapItemClientAttributes *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasHandleType;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

