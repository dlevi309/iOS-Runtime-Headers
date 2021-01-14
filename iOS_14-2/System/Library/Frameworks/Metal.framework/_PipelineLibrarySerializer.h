/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface _PipelineLibrarySerializer : NSObject {

	void* _binarySerializer;

}
-(id)init;
-(unsigned long long)totalSize;
-(unsigned long long)addLibrary:(void*)arg1 ;
-(id)addSpecializedFunction:(id)arg1 descriptor:(const void*)arg2 ;
-(id)addRenderPipelineDescriptor:(const void*)arg1 ;
-(id)addComputePipelineDescriptor:(const void*)arg1 ;
-(unsigned long long)writeToMemory:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)dealloc;
@end

