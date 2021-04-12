/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSParallelRandom : MPSKernel {

	int _generatorType;
	unsigned _destinationDataType;
	unsigned long long _distributionType;

}

@property (assign,nonatomic) unsigned long long distributionType;              //@synthesize distributionType=_distributionType - In the implementation block
@property (nonatomic,readonly) unsigned destinationDataType;                   //@synthesize destinationDataType=_destinationDataType - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(unsigned)destinationDataType;
-(unsigned long long)distributionType;
-(void)setDistributionType:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 destinationDataType:(unsigned)arg2 generatorType:(int)arg3 distributionDescriptor:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5 ;
-(void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4 ;
@end

