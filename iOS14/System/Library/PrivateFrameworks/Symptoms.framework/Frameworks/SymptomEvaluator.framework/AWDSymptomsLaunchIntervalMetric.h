/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsLaunchIntervalMetric : PBCodable <NSCopying> {

	unsigned long long _intervalSincePreviousLaunch;
	unsigned long long _timestamp;
	int _process;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIntervalSincePreviousLaunch; 
@property (assign,nonatomic) unsigned long long intervalSincePreviousLaunch;              //@synthesize intervalSincePreviousLaunch=_intervalSincePreviousLaunch - In the implementation block
@property (assign,nonatomic) BOOL hasProcess; 
@property (assign,nonatomic) int process;                                                 //@synthesize process=_process - In the implementation block
-(int)process;
-(void)setProcess:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)intervalSincePreviousLaunch;
-(BOOL)hasIntervalSincePreviousLaunch;
-(id)description;
-(void)setHasIntervalSincePreviousLaunch:(BOOL)arg1 ;
-(void)setIntervalSincePreviousLaunch:(unsigned long long)arg1 ;
-(int)StringAsProcess:(id)arg1 ;
-(void)setHasProcess:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasProcess;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)processAsString:(int)arg1 ;
@end

