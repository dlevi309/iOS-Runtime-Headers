/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext;

@interface disparityDebugUtils : NSObject {

	FigMetalContext* _metalContext;

}
-(id)initWithMetalContext:(id)arg1 ;
-(void)ApplyColorWheelAndWrite:(unsigned)arg1 height:(unsigned)arg2 data:(float*)arg3 fileFullPath:(const char*)arg4 ;
-(void)makeCoherent:(id)arg1 ;
-(void)createPathIfNeeded:(id)arg1 ;
-(void)convertVUYA444:(char*)arg1 rbs:(unsigned long long)arg2 ToRGBA:(char*)arg3 ofSize:(CGSize)arg4 ;
-(void)WriteBinDataToFile:(void*)arg1 length:(unsigned)arg2 fileFullPath:(const char*)arg3 ;
-(void)saveVUYA4444PixelBuffer:(CVBufferRef)arg1 out_width:(unsigned)arg2 out_height:(unsigned)arg3 AsBinaryFile:(const char*)arg4 ;
-(void)saveVUYA4444PixelBuffer:(CVBufferRef)arg1 out_width:(unsigned)arg2 out_height:(unsigned)arg3 AsPPMFile:(const char*)arg4 ;
-(void)saveF32DisparityBuffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveF32FPBuffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 scale:(float)arg3 ;
-(void)saveF16Buffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 scale:(float)arg3 ;
-(void)saveF16Texture:(id)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveF32Buffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveU8Buffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveVUYA4444Texture:(id)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveVUYA4444Texture:(id)arg1 AsBinaryFile:(const char*)arg2 ;
-(void)saveVUYA4444PixelBuffer:(CVBufferRef)arg1 AsBinaryFile:(const char*)arg2 ;
-(void)saveVUYA4444PixelBuffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 ;
-(void)save420CVPixelBuffer:(CVBufferRef)arg1 to:(const char*)arg2 ;
-(void)saveLumaTexture:(id)arg1 to:(const char*)arg2 ;
-(void)saveRGBATexture:(id)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveF16DisparityBuffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveF16DisparityBuffer:(CVBufferRef)arg1 AsGrayScalePPMFile:(const char*)arg2 ;
-(void)saveF16DisparityTexture:(id)arg1 AsBinaryFile:(const char*)arg2 ;
-(void)saveF16Texture:(id)arg1 AsGrayScalePPMFile:(const char*)arg2 ;
-(void)saveF16DisparityBuffer:(CVBufferRef)arg1 AsBinaryFile:(const char*)arg2 ;
-(void)saveU8Texture:(id)arg1 AsPGMFile:(const char*)arg2 ;
-(void)saveU16Texture:(id)arg1 AsPGMFile:(const char*)arg2 ;
-(void)saveF16DisparityTexture:(id)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveRGF16ShiftmapTexture:(id)arg1 AsPPMFileSx:(id)arg2 AsPPMFileSy:(id)arg3 ;
-(void)saveRGF16Texture:(id)arg1 AsF32BinaryFile0:(id)arg2 AsF32BinaryFile1:(id)arg3 ;
-(void)saveRGBA8Texture:(id)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveRGBA8Texture:(id)arg1 AsBinaryFile:(const char*)arg2 ;
-(void)saveRgbaF32PixelBuffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 ;
-(void)save32BGRAPixelBuffer:(CVBufferRef)arg1 AsPPMFile:(const char*)arg2 ;
-(void)saveF16Texture:(id)arg1 AsF32BinaryFile:(const char*)arg2 ;
-(void)saveNCCOutputFrom:(id)arg1 asBinaryFiles:(const char*)arg2 ;
-(void)savePixelBuffer:(CVBufferRef)arg1 AsBinaryFile:(const char*)arg2 ;
-(void)saveAccumulationFrom:(id)arg1 asBinaryFiles:(const char*)arg2 forSize:(CGSize)arg3 costLineSize:(unsigned short)arg4 ;
-(void)saveF32Texture:(id)arg1 AsF32BinaryFile:(const char*)arg2 ;
@end

