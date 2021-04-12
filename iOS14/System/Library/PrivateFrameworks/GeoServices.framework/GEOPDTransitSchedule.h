/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDDeparturePredicate, NSMutableArray;

@interface GEOPDTransitSchedule : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	NSMutableArray* _departureSequences;
	GEOPDTimeRange _operatingHoursRange;
	unsigned long long _ttlSeconds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_operatingHoursRange : 1;
		unsigned has_ttlSeconds : 1;
		unsigned read_unknownFields : 1;
		unsigned read_departurePredicateCountdown : 1;
		unsigned read_departurePredicateStamp : 1;
		unsigned read_departureSequences : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * departureSequences; 
@property (nonatomic,readonly) BOOL hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown; 
@property (nonatomic,readonly) BOOL hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp; 
@property (assign,nonatomic) BOOL hasOperatingHoursRange; 
@property (assign,nonatomic) GEOPDTimeRange operatingHoursRange; 
@property (assign,nonatomic) BOOL hasTtlSeconds; 
@property (assign,nonatomic) unsigned long long ttlSeconds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)departureSequenceType;
+(BOOL)isValid:(id)arg1 ;
+(id)transitScheduleForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOperatingHoursRange:(GEOPDTimeRange)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)addDepartureSequence:(id)arg1 ;
-(unsigned long long)departureSequencesCount;
-(void)clearDepartureSequences;
-(id)departureSequenceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)departureSequences;
-(void)setDepartureSequences:(NSMutableArray *)arg1 ;
-(GEOPDTimeRange)operatingHoursRange;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDeparturePredicateCountdown;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)ttlSeconds;
-(BOOL)hasTtlSeconds;
-(void)writeTo:(id)arg1 ;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTtlSeconds:(unsigned long long)arg1 ;
-(void)setHasTtlSeconds:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDeparturePredicateStamp;
@end
