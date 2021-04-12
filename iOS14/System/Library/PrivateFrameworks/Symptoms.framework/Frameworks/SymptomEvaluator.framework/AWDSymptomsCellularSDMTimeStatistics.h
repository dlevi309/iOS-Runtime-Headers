/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsCellularSDMTimeStatistics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _totalActiveTimeSeconds;
	unsigned long long _totalInferredSleepTimeSeconds;
	unsigned long long _totalQuiesceTimeSeconds;
	unsigned long long _totalTimeSeconds;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTimeSeconds; 
@property (assign,nonatomic) unsigned long long totalTimeSeconds;                           //@synthesize totalTimeSeconds=_totalTimeSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasTotalActiveTimeSeconds; 
@property (assign,nonatomic) unsigned long long totalActiveTimeSeconds;                     //@synthesize totalActiveTimeSeconds=_totalActiveTimeSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasTotalQuiesceTimeSeconds; 
@property (assign,nonatomic) unsigned long long totalQuiesceTimeSeconds;                    //@synthesize totalQuiesceTimeSeconds=_totalQuiesceTimeSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasTotalInferredSleepTimeSeconds; 
@property (assign,nonatomic) unsigned long long totalInferredSleepTimeSeconds;              //@synthesize totalInferredSleepTimeSeconds=_totalInferredSleepTimeSeconds - In the implementation block
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
-(void)setTotalTimeSeconds:(unsigned long long)arg1 ;
-(void)setHasTotalTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasTotalTimeSeconds;
-(void)setTotalActiveTimeSeconds:(unsigned long long)arg1 ;
-(void)setHasTotalActiveTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasTotalActiveTimeSeconds;
-(void)setTotalQuiesceTimeSeconds:(unsigned long long)arg1 ;
-(void)setHasTotalQuiesceTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasTotalQuiesceTimeSeconds;
-(void)setTotalInferredSleepTimeSeconds:(unsigned long long)arg1 ;
-(void)setHasTotalInferredSleepTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasTotalInferredSleepTimeSeconds;
-(unsigned long long)totalTimeSeconds;
-(unsigned long long)totalActiveTimeSeconds;
-(unsigned long long)totalQuiesceTimeSeconds;
-(unsigned long long)totalInferredSleepTimeSeconds;
@end

