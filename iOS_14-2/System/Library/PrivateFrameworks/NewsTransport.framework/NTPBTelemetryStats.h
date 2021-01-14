/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBTelemetryStats : PBCodable <NSCopying> {

	long long _count;
	long long _max;
	long long _mean;
	long long _median;
	long long _min;
	long long _percentile95;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;                     //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasMin; 
@property (assign,nonatomic) long long min;                       //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) long long max;                       //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) long long mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasMedian; 
@property (assign,nonatomic) long long median;                    //@synthesize median=_median - In the implementation block
@property (assign,nonatomic) BOOL hasPercentile95; 
@property (assign,nonatomic) long long percentile95;              //@synthesize percentile95=_percentile95 - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCount:(long long)arg1 ;
-(long long)mean;
-(long long)median;
-(BOOL)hasMin;
-(BOOL)hasMax;
-(void)setMedian:(long long)arg1 ;
-(BOOL)hasMean;
-(long long)percentile95;
-(void)setPercentile95:(long long)arg1 ;
-(void)setMin:(long long)arg1 ;
-(void)setHasMedian:(BOOL)arg1 ;
-(BOOL)hasMedian;
-(void)setHasPercentile95:(BOOL)arg1 ;
-(BOOL)hasPercentile95;
-(void)mergeFrom:(id)arg1 ;
-(long long)count;
-(long long)min;
-(void)setMean:(long long)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasCount;
-(void)setHasMin:(BOOL)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(void)setHasMean:(BOOL)arg1 ;
-(long long)max;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMax:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

