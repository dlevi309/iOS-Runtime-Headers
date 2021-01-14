/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/MTLCommandBufferSPI.h>

@protocol MTLCommandBuffer;
@class NSDictionary, NSMutableDictionary, NSMutableString, CMMTLCommandQueue, InterceptConfig, NSString, NSError;

@interface CMMTLCommandBuffer : NSObject <MTLCommandBufferSPI> {

	NSMutableString* _cmLabel;
	CMMTLCommandQueue* _cmCommandQueue;
	id<MTLCommandBuffer> _commandBuffer;
	BOOL _unretained;
	InterceptConfig* _interceptConfig;

}

@property (nonatomic,retain) InterceptConfig * interceptConfig;                               //@synthesize interceptConfig=_interceptConfig - In the implementation block
@property (getter=getListIndex,nonatomic,readonly) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (readonly) unsigned long long globalTraceObjectID; 
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
-(void)commit;
-(void)waitUntilCompleted;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)waitUntilScheduled;
-(InterceptConfig *)interceptConfig;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithCMMTLCommandQueue:(id)arg1 unretained:(BOOL)arg2 ;
-(void)setInterceptConfig:(InterceptConfig *)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

