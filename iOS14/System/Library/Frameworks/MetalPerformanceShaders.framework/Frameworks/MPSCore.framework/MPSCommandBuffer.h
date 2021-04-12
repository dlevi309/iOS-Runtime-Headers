/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/MTLCommandBuffer.h>

@protocol MTLBuffer, MTLCommandBuffer;
@class NSString, NSError, MPSPredicate;

@interface MPSCommandBuffer : NSObject <MTLCommandBuffer> {

	id<MTLBuffer> _currentDispatchBuffer;
	unsigned long long _offsetToCurrentFree;
	MPSDevice* _mpsDevice;
	MPSPredicate* _predicate;
	id<MTLCommandBuffer> _commandBuffer;

}

@property (nonatomic,retain,readonly) id<MTLCommandBuffer> commandBuffer;                  //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain,readonly) id<MTLCommandBuffer> rootCommandBuffer; 
@property (nonatomic,retain) MPSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) id<MPSHeapProvider> heapProvider; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (readonly) unsigned long long errorOptions; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) id<MTLLogContainer> logs; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandBufferWithCommandBuffer:(id)arg1 ;
+(id)commandBufferFromCommandQueue:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(MPSPredicate *)predicate;
-(void)setPredicate:(MPSPredicate *)arg1 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id<MPSHeapProvider>)heapProvider;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)dispatchBufferWithOffset:(unsigned long long*)arg1 ;
-(id<MTLCommandBuffer>)rootCommandBuffer;
-(void)prefetchHeapForWorkloadSize:(unsigned long long)arg1 ;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)setHeapProvider:(id<MPSHeapProvider>)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)commitAndContinue;
-(void)dealloc;
@end

