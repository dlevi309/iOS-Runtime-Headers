/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixFindTopK : MPSMatrixUnaryKernel {

	BOOL _alongColumns;
	unsigned long long _sourceColumns;
	unsigned long long _sourceRows;
	unsigned long long _indexOffset;
	unsigned long long _numberOfTopKValues;

}

@property (assign,nonatomic) BOOL alongColumns;                                  //@synthesize alongColumns=_alongColumns - In the implementation block
@property (assign,nonatomic) unsigned long long sourceRows;                      //@synthesize sourceRows=_sourceRows - In the implementation block
@property (assign,nonatomic) unsigned long long sourceColumns;                   //@synthesize sourceColumns=_sourceColumns - In the implementation block
@property (assign,nonatomic) unsigned long long indexOffset;                     //@synthesize indexOffset=_indexOffset - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTopKValues;              //@synthesize numberOfTopKValues=_numberOfTopKValues - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)indexOffset;
-(void)setSourceRows:(unsigned long long)arg1 ;
-(void)setSourceColumns:(unsigned long long)arg1 ;
-(void)setIndexOffset:(unsigned long long)arg1 ;
-(unsigned long long)sourceColumns;
-(unsigned long long)sourceRows;
-(id)initWithDevice:(id)arg1 numberOfTopKValues:(unsigned long long)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultIndexMatrix:(id)arg3 resultValueMatrix:(id)arg4 ;
-(unsigned long long)numberOfTopKValues;
-(void)setNumberOfTopKValues:(unsigned long long)arg1 ;
-(BOOL)alongColumns;
-(void)setAlongColumns:(BOOL)arg1 ;
@end

