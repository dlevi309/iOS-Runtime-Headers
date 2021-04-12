/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLPipelineLibrarySPI.h>

@class NSString, NSArray, MTLToolsPointerArray;

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI> {

	MTLToolsPointerArray* _pipelineStates;
	MTLToolsPointerArray* _computePipelineStates;

}

@property (nonatomic,readonly) MTLToolsPointerArray * pipelineStates;                     //@synthesize pipelineStates=_pipelineStates - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * computePipelineStates;              //@synthesize computePipelineStates=_computePipelineStates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * pipelineNames; 
@property (assign) BOOL disableRunTimeCompilation; 
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)setDisableRunTimeCompilation:(BOOL)arg1 ;
-(BOOL)disableRunTimeCompilation;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(NSArray *)pipelineNames;
-(id<MTLPipelineCache>)pipelineCache;
-(id<MTLPipelineCache>)functionCache;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)pipelineStates;
-(MTLToolsPointerArray *)computePipelineStates;
@end

