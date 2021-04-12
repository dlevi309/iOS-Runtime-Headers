/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixRandom : MPSKernel {

	unsigned _destinationDataType;
	unsigned long long _distributionType;
	unsigned long long _batchStart;
	unsigned long long _batchSize;

}

@property (nonatomic,readonly) unsigned destinationDataType;                     //@synthesize destinationDataType=_destinationDataType - In the implementation block
@property (nonatomic,readonly) unsigned long long distributionType;              //@synthesize distributionType=_distributionType - In the implementation block
@property (assign,nonatomic) unsigned long long batchStart;                      //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                       //@synthesize batchSize=_batchSize - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned)destinationDataType;
-(unsigned long long)distributionType;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 distributionType:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationVector:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationMatrix:(id)arg2 ;
@end

