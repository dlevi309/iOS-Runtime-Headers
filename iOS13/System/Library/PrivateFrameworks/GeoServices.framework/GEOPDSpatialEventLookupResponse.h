/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, NSMutableArray, GEOPDMapsIdentifier, GEOTimezone;

@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _eventDateTimes;
	GEOPDMapsIdentifier* _eventId;
	GEOPDMapsIdentifier* _poiId;
	GEOTimezone* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_center : 1;
		unsigned read_eventDateTimes : 1;
		unsigned read_eventId : 1;
		unsigned read_poiId : 1;
		unsigned read_timezone : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_categorys : 1;
		unsigned wrote_center : 1;
		unsigned wrote_eventDateTimes : 1;
		unsigned wrote_eventId : 1;
		unsigned wrote_poiId : 1;
		unsigned wrote_timezone : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * eventId; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
@property (nonatomic,retain) NSMutableArray * eventDateTimes; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (nonatomic,readonly) BOOL hasPoiId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * poiId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)eventDateTimeType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOTimezone *)timezone;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readTimezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasTimezone;
-(void)_readCategorys;
-(void)_addNoFlagsCategory:(int)arg1 ;
-(int*)categorys;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(int)arg1 ;
-(BOOL)hasEventId;
-(GEOPDMapsIdentifier *)eventId;
-(void)_readEventId;
-(void)_readEventDateTimes;
-(void)_addNoFlagsEventDateTime:(id)arg1 ;
-(void)setEventId:(GEOPDMapsIdentifier *)arg1 ;
-(unsigned long long)eventDateTimesCount;
-(void)clearEventDateTimes;
-(id)eventDateTimeAtIndex:(unsigned long long)arg1 ;
-(void)addEventDateTime:(id)arg1 ;
-(NSMutableArray *)eventDateTimes;
-(void)setEventDateTimes:(NSMutableArray *)arg1 ;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
-(void)_readPoiId;
-(GEOPDMapsIdentifier *)poiId;
-(void)setPoiId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasPoiId;
@end

