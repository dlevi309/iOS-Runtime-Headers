/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>
#import <libobjc.A.dylib/MTLPipelineLibrarySPI.h>

@protocol MTLDevice;
@class NSString, NSArray;

@interface _MTLPipelineLibrary : _MTLObjectWithLabel <MTLPipelineLibrarySPI> {

	PipelineLibraryData* _pipelineLibraryData;
	id<MTLDevice> _device;
	NSArray* _pipelineNames;
	BOOL _disableRunTimeCompilation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device;                                      //@synthesize device=_device - In the implementation block
@property (readonly) NSArray * pipelineNames;                                   //@synthesize pipelineNames=_pipelineNames - In the implementation block
@property (assign) BOOL disableRunTimeCompilation;                              //@synthesize disableRunTimeCompilation=_disableRunTimeCompilation - In the implementation block
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
-(void)dealloc;
-(id<MTLDevice>)device;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)setDisableRunTimeCompilation:(BOOL)arg1 ;
-(BOOL)disableRunTimeCompilation;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2 ;
-(NSArray *)pipelineNames;
-(id<MTLPipelineCache>)pipelineCache;
-(id<MTLPipelineCache>)functionCache;
-(id)initWithDevice:(id)arg1 pipelineLibraryData:(PipelineLibraryData*)arg2 ;
@end

