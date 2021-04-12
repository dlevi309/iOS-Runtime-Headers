/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable <NSCopying> {

	SCD_Struct_AW5* _values;
	float _bucketSize;
	float _minValue;
	SCD_Struct_AW9 _has;

}

@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) unsigned* values; 
@property (assign,nonatomic) BOOL hasMinValue; 
@property (assign,nonatomic) float minValue;                                //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) BOOL hasBucketSize; 
@property (assign,nonatomic) float bucketSize;                              //@synthesize bucketSize=_bucketSize - In the implementation block
+(id)quantizedDenseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(unsigned long long)valuesCount;
-(unsigned*)values;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMinValue;
-(void)addValues:(unsigned)arg1 ;
-(unsigned)valuesAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)setMinValue:(float)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)minValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(float)bucketSize;
-(void)setBucketSize:(float)arg1 ;
-(void)setValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMinValue:(BOOL)arg1 ;
-(void)setHasBucketSize:(BOOL)arg1 ;
-(BOOL)hasBucketSize;
-(float)originalValueAtIndex:(unsigned long long)arg1 ;
@end

