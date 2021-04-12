/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitCloudSyncRestoreEvent : PBCodable <NSCopying> {

	long long _dbSize;
	long long _duration;
	long long _endDate;
	long long _hfdSize;
	long long _journalCount;
	long long _startDate;
	unsigned long long _timestamp;
	int _phase;
	SCD_Struct_HD8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDbSize; 
@property (assign,nonatomic) long long dbSize;                          //@synthesize dbSize=_dbSize - In the implementation block
@property (assign,nonatomic) BOOL hasHfdSize; 
@property (assign,nonatomic) long long hfdSize;                         //@synthesize hfdSize=_hfdSize - In the implementation block
@property (assign,nonatomic) BOOL hasJournalCount; 
@property (assign,nonatomic) long long journalCount;                    //@synthesize journalCount=_journalCount - In the implementation block
@property (assign,nonatomic) BOOL hasPhase; 
@property (assign,nonatomic) int phase;                                 //@synthesize phase=_phase - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(long long)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(int)phase;
-(void)setPhase:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(id)phaseAsString:(int)arg1 ;
-(int)StringAsPhase:(id)arg1 ;
-(BOOL)hasPhase;
-(void)setHasPhase:(BOOL)arg1 ;
-(void)setDbSize:(long long)arg1 ;
-(void)setHasDbSize:(BOOL)arg1 ;
-(BOOL)hasDbSize;
-(void)setHfdSize:(long long)arg1 ;
-(void)setHasHfdSize:(BOOL)arg1 ;
-(BOOL)hasHfdSize;
-(void)setJournalCount:(long long)arg1 ;
-(void)setHasJournalCount:(BOOL)arg1 ;
-(BOOL)hasJournalCount;
-(long long)dbSize;
-(long long)hfdSize;
-(long long)journalCount;
@end

