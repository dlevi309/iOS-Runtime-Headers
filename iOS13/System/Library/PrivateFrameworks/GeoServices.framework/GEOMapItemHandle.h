/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_clientAttributes : 1;
		unsigned wrote_placeRefinementParameters : 1;
		unsigned wrote_placeRequestData : 1;
		unsigned wrote_handleType : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(id)handleDataForMapItem:(id)arg1 ;
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
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(void)clearSensitiveFields;
-(BOOL)hasPlaceRefinementParameters;
-(void)setHandleType:(int)arg1 ;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(void)setClientAttributes:(GEOMapItemClientAttributes *)arg1 ;
-(void)setPlaceRequestData:(GEOMapItemInitialRequestData *)arg1 ;
-(BOOL)hasPlaceRequestData;
-(GEOMapItemInitialRequestData *)placeRequestData;
-(GEOMapItemClientAttributes *)clientAttributes;
-(int)handleType;
-(BOOL)hasClientAttributes;
-(void)_readPlaceRefinementParameters;
-(void)_readClientAttributes;
-(void)_readPlaceRequestData;
-(void)setHasHandleType:(BOOL)arg1 ;
-(BOOL)hasHandleType;
-(id)handleTypeAsString:(int)arg1 ;
-(int)StringAsHandleType:(id)arg1 ;
@end

