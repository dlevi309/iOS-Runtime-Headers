/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_departurePredicateCountdown : 1;
		unsigned wrote_departurePredicateStamp : 1;
		unsigned wrote_departureSequences : 1;
		unsigned wrote_operatingHoursRange : 1;
		unsigned wrote_ttlSeconds : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)departureSequenceType;
+(id)transitScheduleForPlaceData:(id)arg1 ;
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
-(void)_readDeparturePredicateCountdown;
-(void)_readDeparturePredicateStamp;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
-(BOOL)hasDeparturePredicateCountdown;
-(BOOL)hasDeparturePredicateStamp;
-(GEOPDTimeRange)operatingHoursRange;
-(void)setOperatingHoursRange:(GEOPDTimeRange)arg1 ;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(void)_readDepartureSequences;
-(void)_addNoFlagsDepartureSequence:(id)arg1 ;
-(unsigned long long)departureSequencesCount;
-(void)clearDepartureSequences;
-(id)departureSequenceAtIndex:(unsigned long long)arg1 ;
-(void)addDepartureSequence:(id)arg1 ;
-(NSMutableArray *)departureSequences;
-(void)setDepartureSequences:(NSMutableArray *)arg1 ;
-(unsigned long long)ttlSeconds;
-(void)setTtlSeconds:(unsigned long long)arg1 ;
-(void)setHasTtlSeconds:(BOOL)arg1 ;
-(BOOL)hasTtlSeconds;
@end

