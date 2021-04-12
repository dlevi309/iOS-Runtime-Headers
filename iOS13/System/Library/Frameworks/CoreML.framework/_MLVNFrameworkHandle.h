/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface _MLVNFrameworkHandle : NSObject {

	BOOL _valid;
	/*function pointer*/void* _scenePrintsFromPixelBuffersImpl;
	/*function pointer*/void* _scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
	/*function pointer*/void* _scenePrintElementCountImpl;
	/*function pointer*/void* _scenePrintLengthImpl;
	Class _VNImageBufferClass;

}

@property (nonatomic,readonly) /*function pointer*/void* scenePrintsFromPixelBuffersImpl;                         //@synthesize scenePrintsFromPixelBuffersImpl=_scenePrintsFromPixelBuffersImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintsFromPixelBuffersUsesCPUOnlyImpl;              //@synthesize scenePrintsFromPixelBuffersUsesCPUOnlyImpl=_scenePrintsFromPixelBuffersUsesCPUOnlyImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintElementCountImpl;                              //@synthesize scenePrintElementCountImpl=_scenePrintElementCountImpl - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* scenePrintLengthImpl;                                    //@synthesize scenePrintLengthImpl=_scenePrintLengthImpl - In the implementation block
@property (nonatomic,readonly) Class VNImageBufferClass;                                                          //@synthesize VNImageBufferClass=_VNImageBufferClass - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                         //@synthesize valid=_valid - In the implementation block
+(id)sharedHandle;
+(id)addOrientation:(unsigned)arg1 toOptions:(id)arg2 ;
-(id)init;
-(BOOL)isValid;
-(id)scenePrintsFromPixelBuffers:(CVBufferRef)arg1 version:(long long)arg2 augmentationOptions:(id)arg3 useCPUOnly:(BOOL)arg4 error:(id*)arg5 ;
-(unsigned long long)elementCountForScenePrintRequestRevision:(long long)arg1 ;
-(unsigned long long)lengthInBytesForScenePrintRequestRevision:(long long)arg1 ;
-(CVBufferRef)createPixelBufferFromVNImageBuffer:(id)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(CVBufferRef)createPixelBufferFromImageAtURL:(id)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(CVBufferRef)createPixelBufferFromCGImage:(CGImageRef)arg1 constraint:(id)arg2 cropRect:(CGRect)arg3 cropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(/*function pointer*/void*)scenePrintsFromPixelBuffersImpl;
-(/*function pointer*/void*)scenePrintsFromPixelBuffersUsesCPUOnlyImpl;
-(/*function pointer*/void*)scenePrintElementCountImpl;
-(/*function pointer*/void*)scenePrintLengthImpl;
-(Class)VNImageBufferClass;
@end

