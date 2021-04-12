/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
+(id)commandBufferFromCommandQueue:(id)arg1 ;
+(id)commandBufferWithCommandBuffer:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setPredicate:(MPSPredicate *)arg1 ;
-(MPSPredicate *)predicate;
-(id<MTLCommandBuffer>)commandBuffer;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 ;
-(id<MPSHeapProvider>)heapProvider;
-(void)setHeapProvider:(id<MPSHeapProvider>)arg1 ;
-(id)dispatchBufferWithOffset:(unsigned long long*)arg1 ;
-(id<MTLCommandBuffer>)rootCommandBuffer;
-(void)commitAndContinue;
-(void)prefetchHeapForWorkloadSize:(unsigned long long)arg1 ;
@end

