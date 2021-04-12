/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSMatrix.h>

@interface MPSTemporaryMatrix : MPSMatrix {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(void)prefetchStorageWithCommandBuffer:(id)arg1 matrixDescriptorList:(id)arg2 ;
+(id)temporaryMatrixWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
-(id)initWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)readCount;
@end

