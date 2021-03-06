/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol MTLDevice, MTLCommandQueue, MTLLibrary;
#import <Vision/Vision-Structs.h>
@interface MetalInterface : NSObject {

	id<MTLDevice> mtlDevice;
	id<MTLCommandQueue> mtlCommandQueue;
	id<MTLLibrary> mtlLibrary;

}
-(id)init;
-(id)textureFromCVPixelBuffer:(CVBufferRef)arg1 ;
-(id)textureWithPixelData:(vImage_Buffer*)arg1 format:(unsigned long long)arg2 ;
-(id)textureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned long long)arg3 usage:(unsigned long long)arg4 ;
-(void)performVotingImage:(id)arg1 outputTex:(id)arg2 subBuffer:(char*)arg3 ;
-(void)performAdaptiveBinarizationImage:(vImage_Buffer*)arg1 output:(vImage_Buffer*)arg2 sumTable:(vImage_Buffer*)arg3 sumSqTable:(vImage_Buffer*)arg4 ;
@end

