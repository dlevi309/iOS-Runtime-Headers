/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsCellularSDMPollingStatistics : PBCodable <NSCopying> {

	SCD_Struct_AW2* _pollingIntervalCounts;
	unsigned long long _durationSeconds;
	unsigned long long _timestamp;
	unsigned _pollIntervalVersion;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationSeconds; 
@property (assign,nonatomic) unsigned long long durationSeconds;                           //@synthesize durationSeconds=_durationSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasPollIntervalVersion; 
@property (assign,nonatomic) unsigned pollIntervalVersion;                                 //@synthesize pollIntervalVersion=_pollIntervalVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long pollingIntervalCountsCount; 
@property (nonatomic,readonly) unsigned* pollingIntervalCounts; 
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
-(void)setDurationSeconds:(unsigned long long)arg1 ;
-(unsigned long long)durationSeconds;
-(void)setHasDurationSeconds:(BOOL)arg1 ;
-(BOOL)hasDurationSeconds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)pollingIntervalCountsCount;
-(void)clearPollingIntervalCounts;
-(unsigned)pollingIntervalCountAtIndex:(unsigned long long)arg1 ;
-(void)addPollingIntervalCount:(unsigned)arg1 ;
-(void)setPollIntervalVersion:(unsigned)arg1 ;
-(void)setHasPollIntervalVersion:(BOOL)arg1 ;
-(BOOL)hasPollIntervalVersion;
-(unsigned*)pollingIntervalCounts;
-(void)setPollingIntervalCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)pollIntervalVersion;
@end

