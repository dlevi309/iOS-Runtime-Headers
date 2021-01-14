/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDSleepAlarmAWDSleepAlarmStatistics : PBCodable <NSCopying> {

	long long _mean;
	long long _median;
	long long _percentile25;
	long long _percentile75;
	long long _stddev;
	SCD_Struct_HD9 _has;

}

@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) long long mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasStddev; 
@property (assign,nonatomic) long long stddev;                    //@synthesize stddev=_stddev - In the implementation block
@property (assign,nonatomic) BOOL hasPercentile25; 
@property (assign,nonatomic) long long percentile25;              //@synthesize percentile25=_percentile25 - In the implementation block
@property (assign,nonatomic) BOOL hasPercentile75; 
@property (assign,nonatomic) long long percentile75;              //@synthesize percentile75=_percentile75 - In the implementation block
@property (assign,nonatomic) BOOL hasMedian; 
@property (assign,nonatomic) long long median;                    //@synthesize median=_median - In the implementation block
-(id)dictionaryRepresentation;
-(long long)mean;
-(long long)median;
-(void)setMedian:(long long)arg1 ;
-(BOOL)hasMean;
-(void)setHasMedian:(BOOL)arg1 ;
-(BOOL)hasMedian;
-(void)mergeFrom:(id)arg1 ;
-(long long)stddev;
-(void)setMean:(long long)arg1 ;
-(id)description;
-(void)setHasMean:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStddev:(long long)arg1 ;
-(void)setPercentile25:(long long)arg1 ;
-(void)setPercentile75:(long long)arg1 ;
-(void)setHasStddev:(BOOL)arg1 ;
-(BOOL)hasStddev;
-(void)setHasPercentile25:(BOOL)arg1 ;
-(BOOL)hasPercentile25;
-(void)setHasPercentile75:(BOOL)arg1 ;
-(BOOL)hasPercentile75;
-(long long)percentile25;
-(long long)percentile75;
@end

