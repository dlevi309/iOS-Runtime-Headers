/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT5 _has;

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
+(Class)failuresType;
+(Class)successesType;
-(NSDate *)endDate;
-(unsigned long long)cacheHitCount;
-(FCNetworkEventStats *)totalDurationStats;
-(FCNetworkEventStats *)dnsDurationStats;
-(FCNetworkEventStats *)connectDurationStats;
-(FCNetworkEventStats *)timeToFirstByteStats;
-(unsigned long long)cacheMissCount;
-(NSDate *)startDate;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(void)setHasCellularRadioAccessTechnology:(BOOL)arg1 ;
-(BOOL)hasCellularRadioAccessTechnology;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(void)setRespondingPop:(NSString *)arg1 ;
-(void)setWifiReachabilityStatus:(BOOL)arg1 ;
-(void)setSuccesses:(NSMutableArray *)arg1 ;
-(void)setFailures:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(id)description;
-(NSMutableArray *)failures;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addSuccesses:(id)arg1 ;
-(void)addFailures:(id)arg1 ;
-(void)setHasWifiReachabilityStatus:(BOOL)arg1 ;
-(BOOL)hasWifiReachabilityStatus;
-(BOOL)hasRespondingPop;
-(void)clearSuccesses;
-(unsigned long long)successesCount;
-(id)successesAtIndex:(unsigned long long)arg1 ;
-(void)clearFailures;
-(unsigned long long)failuresCount;
-(id)failuresAtIndex:(unsigned long long)arg1 ;
-(BOOL)wifiReachabilityStatus;
-(NSString *)respondingPop;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)successes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

