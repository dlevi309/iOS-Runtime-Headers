/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/libfaceCore.dylib
*/


#import <libfaceCore.dylib/libfaceCore.dylib-Structs.h>
@interface FaceCoreImage : NSObject {

	char* _rawDataBuffer;
	char* _alignedDataBuffer;
	BOOL _freeWhenDone;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bytesPerRow;

}

@property (readonly) unsigned long long width;                    //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                   //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (readonly) char* alignedImageData; 
-(unsigned long long)width;
-(unsigned long long)bytesPerRow;
-(unsigned long long)height;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
-(char*)alignedImageData;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(void*)arg4 freeWhenDone:(BOOL)arg5 ;
@end

