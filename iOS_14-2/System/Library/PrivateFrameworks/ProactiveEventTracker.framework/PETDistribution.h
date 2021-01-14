/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PETDistribution : PBCodable <NSCopying> {

	double _max;
	double _mean;
	double _min;
	double _variance;
	SCD_Struct_PE2 _has;

}

@property (assign,nonatomic) BOOL hasMin; 
@property (assign,nonatomic) double min;                    //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) double max;                    //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) double mean;                   //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasVariance; 
@property (assign,nonatomic) double variance;               //@synthesize variance=_variance - In the implementation block
-(id)dictionaryRepresentation;
-(double)mean;
-(BOOL)hasMin;
-(BOOL)hasMax;
-(BOOL)hasMean;
-(void)setMin:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(double)min;
-(void)setMean:(double)arg1 ;
-(double)variance;
-(id)description;
-(void)setHasMin:(BOOL)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(void)setHasMean:(BOOL)arg1 ;
-(void)setVariance:(double)arg1 ;
-(void)setHasVariance:(BOOL)arg1 ;
-(BOOL)hasVariance;
-(double)max;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setMax:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

