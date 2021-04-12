/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSString, NSArray;


@protocol MTLPipelineLibrarySPI <MTLPipelineLibrary>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * pipelineNames; 
@property (assign) BOOL disableRunTimeCompilation; 
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
@required
-(id<MTLDevice>)device;
-(void)setLabel:(id)arg1;
-(NSString *)label;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(void)setDisableRunTimeCompilation:(BOOL)arg1;
-(BOOL)disableRunTimeCompilation;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(NSArray *)pipelineNames;
-(id<MTLPipelineCache>)pipelineCache;
-(id<MTLPipelineCache>)functionCache;

@end

