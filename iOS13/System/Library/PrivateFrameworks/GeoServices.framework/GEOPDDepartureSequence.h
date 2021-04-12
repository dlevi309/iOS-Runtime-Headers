/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _nextStopIds;
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
	SCD_Struct_GE92 _flags;

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
+(BOOL)isValid:(id)arg1 ;
+(Class)departureType;
+(Class)departureFrequencyType;
-(id)init;
-(void)dealloc;
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
-(void)setLineId:(unsigned long long)arg1 ;
-(unsigned long long)lineId;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasLineId;
-(void)clearOperatingHours;
-(void)_readDepartures;
-(void)_addNoFlagsDeparture:(id)arg1 ;
-(void)_readDepartureFrequencys;
-(void)_addNoFlagsDepartureFrequency:(id)arg1 ;
-(void)_readOperatingHours;
-(void)_addNoFlagsOperatingHours:(GEOPDTimeRange)arg1 ;
-(void)_readDirectionNameString;
-(void)_readHeadsignString;
-(void)_readNextStopIds;
-(void)_addNoFlagsNextStopId:(unsigned long long)arg1 ;
-(NSString *)directionNameString;
-(NSString *)headsignString;
-(unsigned long long)departuresCount;
-(void)clearDepartures;
-(id)departureAtIndex:(unsigned long long)arg1 ;
-(void)addDeparture:(id)arg1 ;
-(unsigned long long)departureFrequencysCount;
-(void)clearDepartureFrequencys;
-(id)departureFrequencyAtIndex:(unsigned long long)arg1 ;
-(void)addDepartureFrequency:(id)arg1 ;
-(unsigned long long)operatingHoursCount;
-(GEOPDTimeRange)operatingHoursAtIndex:(unsigned long long)arg1 ;
-(void)addOperatingHours:(GEOPDTimeRange)arg1 ;
-(void)setDirectionNameString:(NSString *)arg1 ;
-(void)setHeadsignString:(NSString *)arg1 ;
-(unsigned long long)nextStopIdsCount;
-(void)clearNextStopIds;
-(unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1 ;
-(void)addNextStopId:(unsigned long long)arg1 ;
-(NSMutableArray *)departures;
-(NSMutableArray *)departureFrequencys;
-(unsigned long long)stopId;
-(void)setStopId:(unsigned long long)arg1 ;
-(void)setHasStopId:(BOOL)arg1 ;
-(BOOL)hasStopId;
-(void)setDepartures:(NSMutableArray *)arg1 ;
-(void)setDepartureFrequencys:(NSMutableArray *)arg1 ;
-(GEOPDTimeRange*)operatingHours;
-(void)setOperatingHours:(GEOPDTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDirectionNameString;
-(BOOL)hasHeadsignString;
-(unsigned long long*)nextStopIds;
-(void)setNextStopIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

