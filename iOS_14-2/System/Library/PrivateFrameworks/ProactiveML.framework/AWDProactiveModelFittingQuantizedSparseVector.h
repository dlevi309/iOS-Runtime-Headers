/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable <NSCopying> {

	SCD_Struct_AW5* _indices;
	SCD_Struct_AW5* _values;
	float _bucketSize;
	unsigned _length;
	float _minValue;
	SCD_Struct_AW4 _has;

}

@property (nonatomic,readonly) unsigned long long indicesCount; 
@property (nonatomic,readonly) unsigned* indices; 
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) unsigned* values; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned length;                                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasMinValue; 
@property (assign,nonatomic) float minValue;                                 //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) BOOL hasBucketSize; 
@property (assign,nonatomic) float bucketSize;                               //@synthesize bucketSize=_bucketSize - In the implementation block
+(id)quantizedSparseVectorFromSparseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
+(id)quantizedSparseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
-(void)setLength:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearValues;
-(unsigned long long)valuesCount;
-(void)setHasLength:(BOOL)arg1 ;
-(unsigned*)values;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)length;
-(BOOL)hasMinValue;
-(void)addValues:(unsigned)arg1 ;
-(unsigned)valuesAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned*)indices;
-(void)setMinValue:(float)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLength;
-(float)minValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(float)bucketSize;
-(void)setBucketSize:(float)arg1 ;
-(unsigned long long)indicesCount;
-(void)clearIndices;
-(void)addIndices:(unsigned)arg1 ;
-(unsigned)indicesAtIndex:(unsigned long long)arg1 ;
-(void)setIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMinValue:(BOOL)arg1 ;
-(void)setHasBucketSize:(BOOL)arg1 ;
-(BOOL)hasBucketSize;
-(float)originalValueAtIndex:(unsigned long long)arg1 ;
@end

