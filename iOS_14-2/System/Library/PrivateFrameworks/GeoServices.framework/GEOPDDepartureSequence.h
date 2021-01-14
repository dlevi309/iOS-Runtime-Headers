/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE92* _nextStopIds;
	GEOPDTimeRange* _operatingHours;
	unsigned long long _operatingHoursCount;
	unsigned long long _operatingHoursSpace;
	NSMutableArray* _departureFrequencys;
	NSMutableArray* _departures;
	NSString* _directionNameString;
	NSString* _headsignString;
	unsigned long long _lineId;
	unsigned long long _stopId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_lineId : 1;
		unsigned has_stopId : 1;
		unsigned read_unknownFields : 1;
		unsigned read_nextStopIds : 1;
		unsigned read_operatingHours : 1;
		unsigned read_departureFrequencys : 1;
		unsigned read_departures : 1;
		unsigned read_directionNameString : 1;
		unsigned read_headsignString : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId; 
@property (assign,nonatomic) BOOL hasStopId; 
@property (assign,nonatomic) unsigned long long stopId; 
@property (nonatomic,retain) NSMutableArray * departures; 
@property (nonatomic,retain) NSMutableArray * departureFrequencys; 
@property (nonatomic,readonly) unsigned long long operatingHoursCount; 
@property (nonatomic,readonly) GEOPDTimeRange* operatingHours; 
@property (nonatomic,readonly) BOOL hasDirectionNameString; 
@property (nonatomic,retain) NSString * directionNameString; 
@property (nonatomic,readonly) BOOL hasHeadsignString; 
@property (nonatomic,retain) NSString * headsignString; 
@property (nonatomic,readonly) unsigned long long nextStopIdsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)departureType;
+(Class)departureFrequencyType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)stopId;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)lineId;
-(void)addDeparture:(id)arg1 ;
-(NSString *)headsignString;
-(void)clearOperatingHours;
-(NSString *)directionNameString;
-(void)addDepartureFrequency:(id)arg1 ;
-(void)addOperatingHours:(GEOPDTimeRange)arg1 ;
-(void)setDirectionNameString:(NSString *)arg1 ;
-(void)setHeadsignString:(NSString *)arg1 ;
-(void)addNextStopId:(unsigned long long)arg1 ;
-(unsigned long long)departuresCount;
-(void)clearDepartures;
-(id)departureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)departureFrequencysCount;
-(void)clearDepartureFrequencys;
-(id)departureFrequencyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)operatingHoursCount;
-(unsigned long long)nextStopIdsCount;
-(GEOPDTimeRange)operatingHoursAtIndex:(unsigned long long)arg1 ;
-(void)clearNextStopIds;
-(unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1 ;
-(void)setHasLineId:(BOOL)arg1 ;
-(void)setHasStopId:(BOOL)arg1 ;
-(void)setDepartures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)departureFrequencys;
-(GEOPDTimeRange*)operatingHours;
-(void)setDepartureFrequencys:(NSMutableArray *)arg1 ;
-(void)setOperatingHours:(GEOPDTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDirectionNameString;
-(BOOL)hasHeadsignString;
-(unsigned long long*)nextStopIds;
-(void)setNextStopIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasLineId;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStopId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setStopId:(unsigned long long)arg1 ;
-(NSMutableArray *)departures;
@end

