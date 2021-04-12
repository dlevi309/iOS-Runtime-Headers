/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSDate, FCNetworkEventStats;

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying> {

	int _cellularRadioAccessTechnology;
	int _eventType;
	NSMutableArray* _failures;
	NSString* _respondingPop;
	NSMutableArray* _successes;
	BOOL _wifiReachabilityStatus;
	SCD_Struct_NT4 _has;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) FCNetworkEventStats * totalDurationStats; 
@property (nonatomic,readonly) FCNetworkEventStats * dnsDurationStats; 
@property (nonatomic,readonly) FCNetworkEventStats * connectDurationStats; 
@property (nonatomic,readonly) FCNetworkEventStats * timeToFirstByteStats; 
@property (nonatomic,readonly) unsigned long long cacheHitCount; 
@property (nonatomic,readonly) unsigned long long cacheMissCount; 
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                             //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasWifiReachabilityStatus; 
@property (assign,nonatomic) BOOL wifiReachabilityStatus;                               //@synthesize wifiReachabilityStatus=_wifiReachabilityStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                         //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (nonatomic,readonly) BOOL hasRespondingPop; 
@property (nonatomic,retain) NSString * respondingPop;                                  //@synthesize respondingPop=_respondingPop - In the implementation block
@property (nonatomic,retain) NSMutableArray * successes;                                //@synthesize successes=_successes - In the implementation block
@property (nonatomic,retain) NSMutableArray * failures;                                 //@synthesize failures=_failures - In the implementation block
+(Class)successesType;
+(Class)failuresType;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(FCNetworkEventStats *)totalDurationStats;
-(FCNetworkEventStats *)dnsDurationStats;
-(FCNetworkEventStats *)connectDurationStats;
-(FCNetworkEventStats *)timeToFirstByteStats;
-(unsigned long long)cacheHitCount;
-(unsigned long long)cacheMissCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)eventType;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)setRespondingPop:(NSString *)arg1 ;
-(void)setWifiReachabilityStatus:(BOOL)arg1 ;
-(void)setSuccesses:(NSMutableArray *)arg1 ;
-(void)setFailures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)successes;
-(NSMutableArray *)failures;
-(void)addSuccesses:(id)arg1 ;
-(void)addFailures:(id)arg1 ;
-(void)setHasWifiReachabilityStatus:(BOOL)arg1 ;
-(BOOL)hasWifiReachabilityStatus;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(BOOL)hasRespondingPop;
-(void)clearSuccesses;
-(unsigned long long)successesCount;
-(id)successesAtIndex:(unsigned long long)arg1 ;
-(void)clearFailures;
-(unsigned long long)failuresCount;
-(id)failuresAtIndex:(unsigned long long)arg1 ;
-(BOOL)wifiReachabilityStatus;
-(NSString *)respondingPop;
@end

