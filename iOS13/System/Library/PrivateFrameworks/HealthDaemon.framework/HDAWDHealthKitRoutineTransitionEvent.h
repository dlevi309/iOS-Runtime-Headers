/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitRoutineLocation;

@interface HDAWDHealthKitRoutineTransitionEvent : PBCodable <NSCopying> {

	long long _endDate;
	long long _startDate;
	unsigned long long _timestamp;
	HDAWDHealthKitRoutineLocation* _from;
	int _mode;
	HDAWDHealthKitRoutineLocation* _to;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFrom; 
@property (nonatomic,retain) HDAWDHealthKitRoutineLocation * from;              //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) BOOL hasTo; 
@property (nonatomic,retain) HDAWDHealthKitRoutineLocation * to;                //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                                          //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                                 //@synthesize endDate=_endDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(int)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)mode;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDAWDHealthKitRoutineLocation *)to;
-(HDAWDHealthKitRoutineLocation *)from;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasMode;
-(void)setFrom:(HDAWDHealthKitRoutineLocation *)arg1 ;
-(void)setTo:(HDAWDHealthKitRoutineLocation *)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(void)setHasMode:(BOOL)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
@end

