/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixFindTopK : MPSMatrixUnaryKernel {

	unsigned long long _sourceColumns;
	unsigned long long _sourceRows;
	unsigned long long _indexOffset;
	unsigned long long _numberOfTopKValues;

}

@property (assign,nonatomic) unsigned long long sourceRows;                      //@synthesize sourceRows=_sourceRows - In the implementation block
@property (assign,nonatomic) unsigned long long sourceColumns;                   //@synthesize sourceColumns=_sourceColumns - In the implementation block
@property (assign,nonatomic) unsigned long long indexOffset;                     //@synthesize indexOffset=_indexOffset - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTopKValues;              //@synthesize numberOfTopKValues=_numberOfTopKValues - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setSourceRows:(unsigned long long)arg1 ;
-(unsigned long long)indexOffset;
-(void)setIndexOffset:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)sourceColumns;
-(void)setSourceColumns:(unsigned long long)arg1 ;
-(unsigned long long)sourceRows;
-(id)initWithDevice:(id)arg1 numberOfTopKValues:(unsigned long long)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultIndexMatrix:(id)arg3 resultValueMatrix:(id)arg4 ;
-(unsigned long long)numberOfTopKValues;
-(void)setNumberOfTopKValues:(unsigned long long)arg1 ;
@end

