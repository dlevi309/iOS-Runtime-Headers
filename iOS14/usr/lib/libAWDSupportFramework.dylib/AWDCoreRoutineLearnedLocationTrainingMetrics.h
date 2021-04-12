/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDCoreRoutineLearnedLocationTrainingMetrics : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _intervalSinceLastAttempt;
	unsigned long long _latency;
	unsigned long long _maxIntervalBetweenLocations;
	unsigned long long _timestamp;
	unsigned _locationsProcessed;
	unsigned _placeCountDevice;
	unsigned _placeCountTotal;
	NSMutableArray* _places;
	unsigned _visitCountDevice;
	unsigned _visitCountTotal;
	NSMutableArray* _visits;
	BOOL _trainedVisits;
	SCD_Struct_AW14 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTrainedVisits; 
@property (assign,nonatomic) BOOL trainedVisits;                                          //@synthesize trainedVisits=_trainedVisits - In the implementation block
@property (assign,nonatomic) BOOL hasIntervalSinceLastAttempt; 
@property (assign,nonatomic) unsigned long long intervalSinceLastAttempt;                 //@synthesize intervalSinceLastAttempt=_intervalSinceLastAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasLatency; 
@property (assign,nonatomic) unsigned long long latency;                                  //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) BOOL hasLocationsProcessed; 
@property (assign,nonatomic) unsigned locationsProcessed;                                 //@synthesize locationsProcessed=_locationsProcessed - In the implementation block
@property (assign,nonatomic) BOOL hasMaxIntervalBetweenLocations; 
@property (assign,nonatomic) unsigned long long maxIntervalBetweenLocations;              //@synthesize maxIntervalBetweenLocations=_maxIntervalBetweenLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * visits;                                     //@synthesize visits=_visits - In the implementation block
@property (nonatomic,retain) NSMutableArray * places;                                     //@synthesize places=_places - In the implementation block
@property (assign,nonatomic) BOOL hasVisitCountDevice; 
@property (assign,nonatomic) unsigned visitCountDevice;                                   //@synthesize visitCountDevice=_visitCountDevice - In the implementation block
@property (assign,nonatomic) BOOL hasVisitCountTotal; 
@property (assign,nonatomic) unsigned visitCountTotal;                                    //@synthesize visitCountTotal=_visitCountTotal - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceCountDevice; 
@property (assign,nonatomic) unsigned placeCountDevice;                                   //@synthesize placeCountDevice=_placeCountDevice - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceCountTotal; 
@property (assign,nonatomic) unsigned placeCountTotal;                                    //@synthesize placeCountTotal=_placeCountTotal - In the implementation block
+(Class)visitsType;
+(Class)placesType;
-(BOOL)valid:(id*)arg1 ;
-(NSString *)description;
-(id)_init;
-(long long)metricId;
-(id)initWithLearnedLocationEngineMetrics:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)places;
-(unsigned long long)timestamp;
-(void)setLatency:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)latency;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)visits;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasLatency;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(unsigned long long)placesCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearPlaces;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)addVisits:(id)arg1 ;
-(unsigned long long)visitsCount;
-(void)clearVisits;
-(id)visitsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)maxIntervalBetweenLocations;
-(void)setMaxIntervalBetweenLocations:(unsigned long long)arg1 ;
-(BOOL)trainedVisits;
-(unsigned long long)intervalSinceLastAttempt;
-(unsigned)locationsProcessed;
-(unsigned)visitCountDevice;
-(unsigned)visitCountTotal;
-(unsigned)placeCountDevice;
-(unsigned)placeCountTotal;
-(void)setTrainedVisits:(BOOL)arg1 ;
-(void)setIntervalSinceLastAttempt:(unsigned long long)arg1 ;
-(void)setLocationsProcessed:(unsigned)arg1 ;
-(void)setVisitCountDevice:(unsigned)arg1 ;
-(void)setVisitCountTotal:(unsigned)arg1 ;
-(void)setPlaceCountDevice:(unsigned)arg1 ;
-(void)setPlaceCountTotal:(unsigned)arg1 ;
-(void)addPlaces:(id)arg1 ;
-(id)placesAtIndex:(unsigned long long)arg1 ;
-(void)setHasTrainedVisits:(BOOL)arg1 ;
-(BOOL)hasTrainedVisits;
-(void)setHasIntervalSinceLastAttempt:(BOOL)arg1 ;
-(BOOL)hasIntervalSinceLastAttempt;
-(void)setHasLocationsProcessed:(BOOL)arg1 ;
-(BOOL)hasLocationsProcessed;
-(void)setHasMaxIntervalBetweenLocations:(BOOL)arg1 ;
-(BOOL)hasMaxIntervalBetweenLocations;
-(void)setHasVisitCountDevice:(BOOL)arg1 ;
-(BOOL)hasVisitCountDevice;
-(void)setHasVisitCountTotal:(BOOL)arg1 ;
-(BOOL)hasVisitCountTotal;
-(void)setHasPlaceCountDevice:(BOOL)arg1 ;
-(BOOL)hasPlaceCountDevice;
-(void)setHasPlaceCountTotal:(BOOL)arg1 ;
-(BOOL)hasPlaceCountTotal;
@end

