/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable <NSCopying> {

	SCD_Struct_AW4* _indices;
	SCD_Struct_AW4* _values;
	float _bucketSize;
	unsigned _length;
	float _minValue;
	SCD_Struct_AW3 _has;

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
-(void)dealloc;
-(unsigned)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(unsigned*)values;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned*)indices;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(BOOL)hasLength;
-(unsigned)valuesAtIndex:(unsigned long long)arg1 ;
-(void)addValues:(unsigned)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(float)minValue;
-(void)setMinValue:(float)arg1 ;
-(unsigned long long)indicesCount;
-(void)clearIndices;
-(void)addIndices:(unsigned)arg1 ;
-(unsigned)indicesAtIndex:(unsigned long long)arg1 ;
-(void)setIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasMinValue:(BOOL)arg1 ;
-(BOOL)hasMinValue;
-(void)setBucketSize:(float)arg1 ;
-(void)setHasBucketSize:(BOOL)arg1 ;
-(BOOL)hasBucketSize;
-(float)bucketSize;
-(float)originalValueAtIndex:(unsigned long long)arg1 ;
@end

