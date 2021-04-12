/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface _PipelineLibrarySerializer : NSObject {

	void* _binarySerializer;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)totalSize;
-(unsigned long long)addLibrary:(void*)arg1 ;
-(id)addSpecializedFunction:(id)arg1 descriptor:(const void*)arg2 ;
-(id)addRenderPipelineDescriptor:(const void*)arg1 ;
-(id)addComputePipelineDescriptor:(const void*)arg1 ;
-(unsigned long long)writeToMemory:(char*)arg1 size:(unsigned long long)arg2 ;
@end

