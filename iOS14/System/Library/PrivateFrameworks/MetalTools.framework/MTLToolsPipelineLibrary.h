/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLPipelineLibrarySPI.h>

@class NSString, NSArray;

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI>

@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * pipelineNames; 
@property (assign) BOOL disableRunTimeCompilation; 
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(id<MTLDevice>)device;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableRunTimeCompilation;
-(id<MTLPipelineCache>)pipelineCache;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLPipelineCache>)functionCache;
-(NSArray *)pipelineNames;
-(NSString *)label;
-(void)setDisableRunTimeCompilation:(BOOL)arg1 ;
@end

