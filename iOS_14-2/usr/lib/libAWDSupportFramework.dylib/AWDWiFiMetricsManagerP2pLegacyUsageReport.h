/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerP2pLegacyUsageReport : PBCodable <NSCopying> {

	unsigned long long _longestActiveDurationSinceLastReport;
	unsigned long long _shortestActiveDurationSinceLastReport;
	unsigned long long _timestamp;
	unsigned long long _totalActiveDurationSinceLastReport;
	unsigned _activationsSinceLastReport;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivationsSinceLastReport; 
@property (assign,nonatomic) unsigned activationsSinceLastReport;                                   //@synthesize activationsSinceLastReport=_activationsSinceLastReport - In the implementation block
@property (assign,nonatomic) BOOL hasTotalActiveDurationSinceLastReport; 
@property (assign,nonatomic) unsigned long long totalActiveDurationSinceLastReport;                 //@synthesize totalActiveDurationSinceLastReport=_totalActiveDurationSinceLastReport - In the implementation block
@property (assign,nonatomic) BOOL hasLongestActiveDurationSinceLastReport; 
@property (assign,nonatomic) unsigned long long longestActiveDurationSinceLastReport;               //@synthesize longestActiveDurationSinceLastReport=_longestActiveDurationSinceLastReport - In the implementation block
@property (assign,nonatomic) BOOL hasShortestActiveDurationSinceLastReport; 
@property (assign,nonatomic) unsigned long long shortestActiveDurationSinceLastReport;              //@synthesize shortestActiveDurationSinceLastReport=_shortestActiveDurationSinceLastReport - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setActivationsSinceLastReport:(unsigned)arg1 ;
-(void)setHasActivationsSinceLastReport:(BOOL)arg1 ;
-(BOOL)hasActivationsSinceLastReport;
-(void)setTotalActiveDurationSinceLastReport:(unsigned long long)arg1 ;
-(void)setHasTotalActiveDurationSinceLastReport:(BOOL)arg1 ;
-(BOOL)hasTotalActiveDurationSinceLastReport;
-(void)setLongestActiveDurationSinceLastReport:(unsigned long long)arg1 ;
-(void)setHasLongestActiveDurationSinceLastReport:(BOOL)arg1 ;
-(BOOL)hasLongestActiveDurationSinceLastReport;
-(void)setShortestActiveDurationSinceLastReport:(unsigned long long)arg1 ;
-(void)setHasShortestActiveDurationSinceLastReport:(BOOL)arg1 ;
-(BOOL)hasShortestActiveDurationSinceLastReport;
-(unsigned)activationsSinceLastReport;
-(unsigned long long)totalActiveDurationSinceLastReport;
-(unsigned long long)longestActiveDurationSinceLastReport;
-(unsigned long long)shortestActiveDurationSinceLastReport;
@end

