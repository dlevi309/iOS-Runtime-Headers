/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)destinationDataType;
-(unsigned long long)distributionType;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 distributionType:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationVector:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationMatrix:(id)arg2 ;
@end

