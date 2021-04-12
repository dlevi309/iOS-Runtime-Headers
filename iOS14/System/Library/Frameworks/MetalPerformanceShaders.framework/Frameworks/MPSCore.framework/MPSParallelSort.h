/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSParallelExclusiveScan;

@interface MPSParallelSort : MPSKernel {

	unsigned long long dataTypeSizeInBytes;
	unsigned _sourceDataType;
	unsigned _destinationDataType;
	int _sortOp;
	MPSParallelExclusiveScan* _exclusiveScanKernel;
	unsigned _keyPairDataType;
	unsigned _valuePairDataType;

}

@property (nonatomic,readonly) unsigned keyPairDataType;                //@synthesize keyPairDataType=_keyPairDataType - In the implementation block
@property (nonatomic,readonly) unsigned valuePairDataType;              //@synthesize valuePairDataType=_valuePairDataType - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initPrivateWithDevice:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceOffset:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationOffset:(unsigned long long)arg5 numEntries:(unsigned long long)arg6 ;
-(unsigned)keyPairDataType;
-(id)initWithDevice:(id)arg1 keyPairDataType:(unsigned)arg2 valuePairDataType:(unsigned)arg3 ;
-(id)initWithDevice:(id)arg1 keyPairDataType:(unsigned)arg2 valuePairDataType:(unsigned)arg3 sortOp:(int)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceKeyBuffer:(id)arg2 sourceKeyOffset:(unsigned long long)arg3 sourceValueBuffer:(id)arg4 sourceValueOffset:(unsigned long long)arg5 destinationKeyBuffer:(id)arg6 destinationKeyOffset:(unsigned long long)arg7 destinationValueBuffer:(id)arg8 destinationValueOffset:(unsigned long long)arg9 numEntries:(unsigned long long)arg10 ;
-(unsigned)valuePairDataType;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
@end

