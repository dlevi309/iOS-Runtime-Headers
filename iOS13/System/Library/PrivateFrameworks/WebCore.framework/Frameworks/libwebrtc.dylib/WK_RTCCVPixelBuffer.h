/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoFrameBuffer.h>

@class NSString;

@interface WK_RTCCVPixelBuffer : NSObject <RTCVideoFrameBuffer> {

	int _width;
	int _height;
	int _bufferWidth;
	int _bufferHeight;
	int _cropWidth;
	int _cropHeight;
	int _cropX;
	int _cropY;
	CVBufferRef _pixelBuffer;

}

@property (nonatomic,readonly) CVBufferRef pixelBuffer;              //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,readonly) int cropX;                            //@synthesize cropX=_cropX - In the implementation block
@property (nonatomic,readonly) int cropY;                            //@synthesize cropY=_cropY - In the implementation block
@property (nonatomic,readonly) int cropWidth;                        //@synthesize cropWidth=_cropWidth - In the implementation block
@property (nonatomic,readonly) int cropHeight;                       //@synthesize cropHeight=_cropHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
+(id)supportedPixelFormats;
-(void)dealloc;
-(int)width;
-(int)height;
-(CVBufferRef)pixelBuffer;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(id)toI420;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 adaptedWidth:(int)arg2 adaptedHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 ;
-(BOOL)requiresScalingToWidth:(int)arg1 height:(int)arg2 ;
-(void)cropAndScaleNV12To:(CVBufferRef)arg1 withTempBuffer:(char*)arg2 ;
-(void)cropAndScaleARGBTo:(CVBufferRef)arg1 ;
-(BOOL)requiresCropping;
-(BOOL)cropAndScaleTo:(CVBufferRef)arg1 withTempBuffer:(char*)arg2 ;
-(int)bufferSizeForCroppingAndScalingToWidth:(int)arg1 height:(int)arg2 ;
-(int)cropX;
-(int)cropY;
-(int)cropWidth;
-(int)cropHeight;
@end

