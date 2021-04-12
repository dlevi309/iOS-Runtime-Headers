/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE92 _flags;

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
+(BOOL)isValid:(id)arg1 ;
+(Class)eventCategoryType;
+(Class)poiIdType;
+(Class)eventDateTimeType;
+(Class)performerType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLocalizedString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setName:(GEOLocalizedString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(GEOTimezone *)timezone;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readName;
-(void)_readTimezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasTimezone;
-(BOOL)hasEventId;
-(GEOPDMapsIdentifier *)eventId;
-(void)_readEventId;
-(void)_readEventCategorys;
-(void)_addNoFlagsEventCategory:(id)arg1 ;
-(void)_readPoiIds;
-(void)_addNoFlagsPoiId:(id)arg1 ;
-(void)_readEventDateTimes;
-(void)_addNoFlagsEventDateTime:(id)arg1 ;
-(void)_readPerformers;
-(void)_addNoFlagsPerformer:(id)arg1 ;
-(void)setEventId:(GEOPDMapsIdentifier *)arg1 ;
-(unsigned long long)eventCategorysCount;
-(void)clearEventCategorys;
-(id)eventCategoryAtIndex:(unsigned long long)arg1 ;
-(void)addEventCategory:(id)arg1 ;
-(unsigned long long)poiIdsCount;
-(void)clearPoiIds;
-(id)poiIdAtIndex:(unsigned long long)arg1 ;
-(void)addPoiId:(id)arg1 ;
-(unsigned long long)eventDateTimesCount;
-(void)clearEventDateTimes;
-(id)eventDateTimeAtIndex:(unsigned long long)arg1 ;
-(void)addEventDateTime:(id)arg1 ;
-(unsigned long long)performersCount;
-(void)clearPerformers;
-(id)performerAtIndex:(unsigned long long)arg1 ;
-(void)addPerformer:(id)arg1 ;
-(NSMutableArray *)eventCategorys;
-(NSMutableArray *)poiIds;
-(NSMutableArray *)eventDateTimes;
-(NSMutableArray *)performers;
-(void)setEventCategorys:(NSMutableArray *)arg1 ;
-(void)setPoiIds:(NSMutableArray *)arg1 ;
-(void)setEventDateTimes:(NSMutableArray *)arg1 ;
-(void)setPerformers:(NSMutableArray *)arg1 ;
-(int)expectedAttendance;
-(void)setExpectedAttendance:(int)arg1 ;
-(void)setHasExpectedAttendance:(BOOL)arg1 ;
-(BOOL)hasExpectedAttendance;
@end

