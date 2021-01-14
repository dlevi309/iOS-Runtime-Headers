/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixCopy : MPSKernel {

	BOOL _sourcesAreTransposed;
	BOOL _destinationsAreTransposed;
	unsigned long long _copyRows;
	unsigned long long _copyColumns;

}

@property (nonatomic,readonly) unsigned long long copyRows;                 //@synthesize copyRows=_copyRows - In the implementation block
@property (nonatomic,readonly) unsigned long long copyColumns;              //@synthesize copyColumns=_copyColumns - In the implementation block
@property (nonatomic,readonly) BOOL sourcesAreTransposed;                   //@synthesize sourcesAreTransposed=_sourcesAreTransposed - In the implementation block
@property (nonatomic,readonly) BOOL destinationsAreTransposed;              //@synthesize destinationsAreTransposed=_destinationsAreTransposed - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 copyRows:(unsigned long long)arg2 copyColumns:(unsigned long long)arg3 sourcesAreTransposed:(BOOL)arg4 destinationsAreTransposed:(BOOL)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 copyDescriptor:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 encoder:(id)arg2 copyDescriptor:(id)arg3 rowPermuteIndices:(id)arg4 rowPermuteOffset:(unsigned long long)arg5 columnPermuteIndices:(id)arg6 columnPermuteOffset:(unsigned long long)arg7 ;
-(void)encodeToCommandBuffer:(id)arg1 copyDescriptor:(id)arg2 rowPermuteIndices:(id)arg3 rowPermuteOffset:(unsigned long long)arg4 columnPermuteIndices:(id)arg5 columnPermuteOffset:(unsigned long long)arg6 ;
-(unsigned long long)copyRows;
-(unsigned long long)copyColumns;
-(BOOL)sourcesAreTransposed;
-(BOOL)destinationsAreTransposed;
@end

