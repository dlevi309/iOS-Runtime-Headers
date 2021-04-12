/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSNDArray.h>

@protocol MTLCommandBuffer;
@interface MPSTemporaryNDArray : MPSNDArray {

	unsigned long long _readCount;
	id<MTLCommandBuffer> _commandBuffer;
	unsigned long long _childRefCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)temporaryNDArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
+(id)defaultAllocator;
-(id)debugDescription;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 descriptor:(id)arg3 aliasing:(unsigned long long)arg4 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 buffer:(id)arg3 ;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(unsigned long long)readCount;
-(void)dealloc;
@end

