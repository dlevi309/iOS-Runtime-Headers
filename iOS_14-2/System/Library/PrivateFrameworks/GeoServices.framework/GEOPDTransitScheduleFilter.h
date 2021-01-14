/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDDeparturePredicate;

@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDDeparturePredicate* _departurePredicateCountdown;
	GEOPDDeparturePredicate* _departurePredicateStamp;
	GEOPDTimeRange _operatingHoursRange;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _includeRealTimeDepartures;
	struct {
		unsigned has_operatingHoursRange : 1;
		unsigned has_includeRealTimeDepartures : 1;
		unsigned read_unknownFields : 1;
		unsigned read_departurePredicateCountdown : 1;
		unsigned read_departurePredicateStamp : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDeparturePredicateCountdown; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateCountdown; 
@property (nonatomic,readonly) BOOL hasDeparturePredicateStamp; 
@property (nonatomic,retain) GEOPDDeparturePredicate * departurePredicateStamp; 
@property (assign,nonatomic) BOOL hasOperatingHoursRange; 
@property (assign,nonatomic) GEOPDTimeRange operatingHoursRange; 
@property (assign,nonatomic) BOOL hasIncludeRealTimeDepartures; 
@property (assign,nonatomic) BOOL includeRealTimeDepartures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setDeparturePredicateCountdown:(GEOPDDeparturePredicate *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOperatingHoursRange:(GEOPDTimeRange)arg1 ;
-(BOOL)hasIncludeRealTimeDepartures;
-(id)initWithData:(id)arg1 ;
-(BOOL)includeRealTimeDepartures;
-(GEOPDDeparturePredicate *)departurePredicateCountdown;
-(void)setDeparturePredicateStamp:(GEOPDDeparturePredicate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setIncludeRealTimeDepartures:(BOOL)arg1 ;
-(id)description;
-(GEOPDTimeRange)operatingHoursRange;
-(void)setHasOperatingHoursRange:(BOOL)arg1 ;
-(BOOL)hasOperatingHoursRange;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasIncludeRealTimeDepartures:(BOOL)arg1 ;
-(BOOL)hasDeparturePredicateCountdown;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDDeparturePredicate *)departurePredicateStamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDeparturePredicateStamp;
@end

