/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface PETSchemaPETDistribution : PBCodable {

	double _min;
	double _max;
	double _mean;
	double _variance;
	SCD_Struct_LT2 _has;

}

@property (assign,nonatomic) double min;                       //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) BOOL hasMin; 
@property (assign,nonatomic) double max;                       //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) double mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) BOOL hasMean; 
@property (assign,nonatomic) double variance;                  //@synthesize variance=_variance - In the implementation block
@property (assign,nonatomic) BOOL hasVariance; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(double)mean;
-(BOOL)hasMin;
-(BOOL)hasMax;
-(BOOL)hasMean;
-(void)setMin:(double)arg1 ;
-(NSData *)jsonData;
-(double)min;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMean:(double)arg1 ;
-(double)variance;
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
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

