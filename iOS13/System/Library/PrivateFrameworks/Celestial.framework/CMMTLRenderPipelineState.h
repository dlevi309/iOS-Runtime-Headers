/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/MTLRenderPipelineState.h>

@protocol MTLRenderPipelineState;
@class NSString, CMMTLDevice, MTLRenderPipelineReflection, MTLRenderPipelineDescriptor;

@interface CMMTLRenderPipelineState : NSObject <MTLRenderPipelineState> {

	CMMTLDevice* _cmDevice;
	id<MTLRenderPipelineState> _renderPipelineState;
	MTLRenderPipelineReflection* _reflection;
	MTLRenderPipelineDescriptor* _renderPipelineDescriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) unsigned long long imageblockSampleLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2 reflection:(id*)arg3 ;
@end

