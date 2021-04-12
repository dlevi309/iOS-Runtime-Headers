/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VideoScaler : NSObject {

	char* _tempBuffer1;
	char* _tempBuffer2;
	unsigned long long _tempBufferWidth;
	unsigned long long _tempBufferHeight;
	IOSurfaceAcceleratorRef _ioSurfaceAccelerator;

}
-(id)init;
-(void)dealloc;
-(int)rotatePixelBuffer:(CVBufferRef)arg1 withPixelFormat:(unsigned)arg2 usingPixelBufferPool:(CVPixelBufferPoolRef)arg3 andStoreTo:(_CVBuffer*)arg4 ;
-(int)convertAndScalePixelBuffer:(CVBufferRef)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned)arg4 usingPixelBufferPool:(CVPixelBufferPoolRef)arg5 andStoreTo:(_CVBuffer*)arg6 ;
@end

