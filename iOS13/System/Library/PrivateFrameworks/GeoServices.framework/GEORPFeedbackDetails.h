/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPAddressFeedback, GEORPDirectionsFeedback, GEORPGroundViewFeedback, GEORPMerchantLookupFeedback, GEORPPoiFeedback, GEORPSearchFeedback, GEORPTileFeedback, GEORPTransitPoiFeedback;

@interface GEORPFeedbackDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPAddressFeedback* _addressPointFeedback;
	GEORPDirectionsFeedback* _directionsFeedback;
	GEORPGroundViewFeedback* _groundViewFeedback;
	GEORPMerchantLookupFeedback* _merchantLookupFeedback;
	GEORPPoiFeedback* _poiFeedback;
	GEORPSearchFeedback* _searchFeedback;
	GEORPTileFeedback* _tileFeedback;
	GEORPTransitPoiFeedback* _transitPoiFeedback;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE92 _flags;

}

@property (nonatomic,readonly) BOOL hasPoiFeedback; 
@property (nonatomic,retain) GEORPPoiFeedback * poiFeedback; 
@property (nonatomic,readonly) BOOL hasTransitPoiFeedback; 
@property (nonatomic,retain) GEORPTransitPoiFeedback * transitPoiFeedback; 
@property (nonatomic,readonly) BOOL hasSearchFeedback; 
@property (nonatomic,retain) GEORPSearchFeedback * searchFeedback; 
@property (nonatomic,readonly) BOOL hasMerchantLookupFeedback; 
@property (nonatomic,retain) GEORPMerchantLookupFeedback * merchantLookupFeedback; 
@property (nonatomic,readonly) BOOL hasDirectionsFeedback; 
@property (nonatomic,retain) GEORPDirectionsFeedback * directionsFeedback; 
@property (nonatomic,readonly) BOOL hasAddressPointFeedback; 
@property (nonatomic,retain) GEORPAddressFeedback * addressPointFeedback; 
@property (nonatomic,readonly) BOOL hasTileFeedback; 
@property (nonatomic,retain) GEORPTileFeedback * tileFeedback; 
@property (nonatomic,readonly) BOOL hasGroundViewFeedback; 
@property (nonatomic,retain) GEORPGroundViewFeedback * groundViewFeedback; 
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
-(void)_readPoiFeedback;
-(void)_readTransitPoiFeedback;
-(void)_readSearchFeedback;
-(void)_readMerchantLookupFeedback;
-(void)_readDirectionsFeedback;
-(void)_readAddressPointFeedback;
-(void)_readTileFeedback;
-(void)_readGroundViewFeedback;
-(GEORPPoiFeedback *)poiFeedback;
-(GEORPTransitPoiFeedback *)transitPoiFeedback;
-(GEORPSearchFeedback *)searchFeedback;
-(GEORPMerchantLookupFeedback *)merchantLookupFeedback;
-(GEORPDirectionsFeedback *)directionsFeedback;
-(GEORPAddressFeedback *)addressPointFeedback;
-(GEORPTileFeedback *)tileFeedback;
-(GEORPGroundViewFeedback *)groundViewFeedback;
-(void)setPoiFeedback:(GEORPPoiFeedback *)arg1 ;
-(void)setTransitPoiFeedback:(GEORPTransitPoiFeedback *)arg1 ;
-(void)setSearchFeedback:(GEORPSearchFeedback *)arg1 ;
-(void)setMerchantLookupFeedback:(GEORPMerchantLookupFeedback *)arg1 ;
-(void)setDirectionsFeedback:(GEORPDirectionsFeedback *)arg1 ;
-(void)setAddressPointFeedback:(GEORPAddressFeedback *)arg1 ;
-(void)setTileFeedback:(GEORPTileFeedback *)arg1 ;
-(void)setGroundViewFeedback:(GEORPGroundViewFeedback *)arg1 ;
-(BOOL)hasPoiFeedback;
-(BOOL)hasTransitPoiFeedback;
-(BOOL)hasSearchFeedback;
-(BOOL)hasMerchantLookupFeedback;
-(BOOL)hasDirectionsFeedback;
-(BOOL)hasAddressPointFeedback;
-(BOOL)hasTileFeedback;
-(BOOL)hasGroundViewFeedback;
@end

