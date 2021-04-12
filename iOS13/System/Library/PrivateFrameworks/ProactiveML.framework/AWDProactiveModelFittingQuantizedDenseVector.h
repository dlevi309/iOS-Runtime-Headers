/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable <NSCopying> {

	SCD_Struct_AW4* _values;
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned*)values;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(unsigned)valuesAtIndex:(unsigned long long)arg1 ;
-(void)addValues:(unsigned)arg1 ;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(void)setValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMinValue:(BOOL)arg1 ;
-(BOOL)hasMinValue;
-(void)setBucketSize:(float)arg1 ;
-(void)setHasBucketSize:(BOOL)arg1 ;
-(BOOL)hasBucketSize;
-(float)bucketSize;
-(float)originalValueAtIndex:(unsigned long long)arg1 ;
@end

