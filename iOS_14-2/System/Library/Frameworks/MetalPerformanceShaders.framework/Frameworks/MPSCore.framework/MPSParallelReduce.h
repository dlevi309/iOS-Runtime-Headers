/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSParallelReduce : MPSKernel {

	unsigned _kernelID;
	unsigned _argkernelID;
	unsigned _sourceDataType;
	unsigned _destinationDataType;
	int _reduceOp;

}

@property (nonatomic,readonly) unsigned sourceDataType;                   //@synthesize sourceDataType=_sourceDataType - In the implementation block
@property (nonatomic,readonly) unsigned destinationDataType;              //@synthesize destinationDataType=_destinationDataType - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initPrivateWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 sourceDataType:(unsigned)arg2 destinationDataType:(unsigned)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceOffset:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationOffset:(unsigned long long)arg5 numEntries:(unsigned long long)arg6 ;
-(unsigned)sourceDataType;
-(unsigned)destinationDataType;
-(id)initWithDevice:(id)arg1 sourceDataType:(unsigned)arg2 destinationDataType:(unsigned)arg3 reduceOp:(int)arg4 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
@end

