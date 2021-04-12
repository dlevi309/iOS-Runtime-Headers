/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitIngestionLatencyEvent : PBCodable <NSCopying> {

	long long _endDate;
	long long _indexInSession;
	long long _maxDelayUs;
	long long _meanDelayUs;
	long long _minDelayUs;
	long long _sampleCount;
	long long _startDate;
	long long _stdDelayUs;
	unsigned long long _timestamp;
	long long _typeIdentifier;
	BOOL _inSession;
	SCD_Struct_HD40 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTypeIdentifier; 
@property (assign,nonatomic) long long typeIdentifier;                  //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasInSession; 
@property (assign,nonatomic) BOOL inSession;                            //@synthesize inSession=_inSession - In the implementation block
@property (assign,nonatomic) BOOL hasMinDelayUs; 
@property (assign,nonatomic) long long minDelayUs;                      //@synthesize minDelayUs=_minDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasMaxDelayUs; 
@property (assign,nonatomic) long long maxDelayUs;                      //@synthesize maxDelayUs=_maxDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasMeanDelayUs; 
@property (assign,nonatomic) long long meanDelayUs;                     //@synthesize meanDelayUs=_meanDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasStdDelayUs; 
@property (assign,nonatomic) long long stdDelayUs;                      //@synthesize stdDelayUs=_stdDelayUs - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasSampleCount; 
@property (assign,nonatomic) long long sampleCount;                     //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) BOOL hasIndexInSession; 
@property (assign,nonatomic) long long indexInSession;                  //@synthesize indexInSession=_indexInSession - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(long long)typeIdentifier;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)sampleCount;
-(void)setSampleCount:(long long)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setTypeIdentifier:(long long)arg1 ;
-(BOOL)hasTypeIdentifier;
-(void)setInSession:(BOOL)arg1 ;
-(void)setHasInSession:(BOOL)arg1 ;
-(BOOL)hasInSession;
-(BOOL)inSession;
-(void)setHasSampleCount:(BOOL)arg1 ;
-(BOOL)hasSampleCount;
-(void)setHasTypeIdentifier:(BOOL)arg1 ;
-(void)setMinDelayUs:(long long)arg1 ;
-(void)setHasMinDelayUs:(BOOL)arg1 ;
-(BOOL)hasMinDelayUs;
-(void)setMaxDelayUs:(long long)arg1 ;
-(void)setHasMaxDelayUs:(BOOL)arg1 ;
-(BOOL)hasMaxDelayUs;
-(void)setMeanDelayUs:(long long)arg1 ;
-(void)setHasMeanDelayUs:(BOOL)arg1 ;
-(BOOL)hasMeanDelayUs;
-(void)setStdDelayUs:(long long)arg1 ;
-(void)setHasStdDelayUs:(BOOL)arg1 ;
-(BOOL)hasStdDelayUs;
-(void)setIndexInSession:(long long)arg1 ;
-(void)setHasIndexInSession:(BOOL)arg1 ;
-(BOOL)hasIndexInSession;
-(long long)minDelayUs;
-(long long)maxDelayUs;
-(long long)meanDelayUs;
-(long long)stdDelayUs;
-(long long)indexInSession;
@end

