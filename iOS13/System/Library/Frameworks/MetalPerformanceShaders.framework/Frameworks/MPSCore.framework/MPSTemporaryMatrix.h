/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSMatrix.h>

@interface MPSTemporaryMatrix : MPSMatrix {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryMatrixWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 matrixDescriptorList:(id)arg2 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)readCount;
-(id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(id)initWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
@end

