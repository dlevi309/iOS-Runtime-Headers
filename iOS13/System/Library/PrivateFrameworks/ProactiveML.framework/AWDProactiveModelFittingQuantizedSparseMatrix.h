/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable <NSCopying> {

	SCD_Struct_AW4* _columnIndices;
	SCD_Struct_AW4* _rowIndices;
	SCD_Struct_AW4* _values;
	float _bucketSize;
	unsigned _columnLength;
	float _minValue;
	unsigned _rowLength;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) unsigned long long columnIndicesCount; 
@property (nonatomic,readonly) unsigned* columnIndices; 
@property (assign,nonatomic) BOOL hasColumnLength; 
@property (assign,nonatomic) unsigned columnLength;                                //@synthesize columnLength=_columnLength - In the implementation block
@property (nonatomic,readonly) unsigned long long rowIndicesCount; 
@property (nonatomic,readonly) unsigned* rowIndices; 
@property (assign,nonatomic) BOOL hasRowLength; 
@property (assign,nonatomic) unsigned rowLength;                                   //@synthesize rowLength=_rowLength - In the implementation block
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) unsigned* values; 
@property (assign,nonatomic) BOOL hasMinValue; 
@property (assign,nonatomic) float minValue;                                       //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) BOOL hasBucketSize; 
@property (assign,nonatomic) float bucketSize;                                     //@synthesize bucketSize=_bucketSize - In the implementation block
+(id)quantizedSparseMatrixFromSparseMatrix:(id)arg1 numberOfBuckets:(unsigned long long)arg2 ;
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
-(unsigned long long)columnIndicesCount;
-(unsigned*)columnIndices;
-(void)clearColumnIndices;
-(void)addColumnIndices:(unsigned)arg1 ;
-(unsigned)columnIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setColumnIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setColumnLength:(unsigned)arg1 ;
-(void)setHasColumnLength:(BOOL)arg1 ;
-(BOOL)hasColumnLength;
-(unsigned long long)rowIndicesCount;
-(unsigned*)rowIndices;
-(void)clearRowIndices;
-(void)addRowIndices:(unsigned)arg1 ;
-(unsigned)rowIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setRowIndices:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setRowLength:(unsigned)arg1 ;
-(void)setHasRowLength:(BOOL)arg1 ;
-(BOOL)hasRowLength;
-(unsigned)columnLength;
-(unsigned)rowLength;
-(float)originalValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2 ;
@end

