/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
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
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(id<MTLDevice>)device;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(BOOL)disableRunTimeCompilation;
-(id<MTLPipelineCache>)pipelineCache;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(void)setLabel:(id)arg1;
-(id<MTLPipelineCache>)functionCache;
-(NSArray *)pipelineNames;
-(NSString *)label;
-(void)setDisableRunTimeCompilation:(BOOL)arg1;

@end

