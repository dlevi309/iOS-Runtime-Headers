/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDMapsIdentifier, GEOLocalizedString, GEOTimezone;

@interface GEOPDPoiEvent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _eventCategorys;
	NSMutableArray* _eventDateTimes;
	GEOPDMapsIdentifier* _eventId;
	GEOLocalizedString* _name;
	NSMutableArray* _performers;
	NSMutableArray* _poiIds;
	GEOTimezone* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _expectedAttendance;
	struct {
		unsigned has_expectedAttendance : 1;
		unsigned read_unknownFields : 1;
		unsigned read_eventCategorys : 1;
		unsigned read_eventDateTimes : 1;
		unsigned read_eventId : 1;
		unsigned read_name : 1;
		unsigned read_performers : 1;
		unsigned read_poiIds : 1;
		unsigned read_timezone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * eventId; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOLocalizedString * name; 
@property (nonatomic,retain) NSMutableArray * eventCategorys; 
@property (nonatomic,retain) NSMutableArray * poiIds; 
@property (nonatomic,retain) NSMutableArray * eventDateTimes; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (nonatomic,retain) NSMutableArray * performers; 
@property (assign,nonatomic) BOOL hasExpectedAttendance; 
@property (assign,nonatomic) int expectedAttendance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)performerType;
+(Class)eventCategoryType;
+(Class)eventDateTimeType;
+(BOOL)isValid:(id)arg1 ;
+(Class)poiIdType;
-(id)dictionaryRepresentation;
-(GEOTimezone *)timezone;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)poiIds;
-(GEOPDMapsIdentifier *)eventId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addPoiId:(id)arg1 ;
-(GEOLocalizedString *)name;
-(void)setEventId:(GEOPDMapsIdentifier *)arg1 ;
-(void)addEventCategory:(id)arg1 ;
-(void)addEventDateTime:(id)arg1 ;
-(void)addPerformer:(id)arg1 ;
-(void)setExpectedAttendance:(int)arg1 ;
-(unsigned long long)eventCategorysCount;
-(void)clearEventCategorys;
-(id)eventCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)poiIdsCount;
-(void)clearPoiIds;
-(id)poiIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)eventDateTimesCount;
-(void)clearEventDateTimes;
-(id)eventDateTimeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)performersCount;
-(void)clearPerformers;
-(id)performerAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)eventCategorys;
-(void)setEventCategorys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)eventDateTimes;
-(void)setEventDateTimes:(NSMutableArray *)arg1 ;
-(void)setPerformers:(NSMutableArray *)arg1 ;
-(int)expectedAttendance;
-(void)setHasExpectedAttendance:(BOOL)arg1 ;
-(BOOL)hasExpectedAttendance;
-(id)description;
-(BOOL)hasTimezone;
-(BOOL)hasEventId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(GEOLocalizedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setPoiIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)performers;
@end

