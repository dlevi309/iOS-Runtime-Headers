/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMax:(double)arg1 ;
-(double)max;
-(void)writeTo:(id)arg1 ;
-(void)setMin:(double)arg1 ;
-(double)min;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)mean;
-(void)setHasMin:(BOOL)arg1 ;
-(BOOL)hasMin;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(void)setMean:(double)arg1 ;
-(void)setHasMean:(BOOL)arg1 ;
-(BOOL)hasMean;
-(void)setVariance:(double)arg1 ;
-(void)setHasVariance:(BOOL)arg1 ;
-(BOOL)hasVariance;
-(double)variance;
@end

