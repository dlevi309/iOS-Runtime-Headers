/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface InpaintingVImageWrapper : NSObject {

	vImage_Buffer* _image;
	BOOL freeWhenDone;
	int _bpp;

}

@property (readonly) vImage_Buffer* image;                                   //@synthesize image=_image - In the implementation block
@property (getter=getWidth,readonly) int width; 
@property (getter=getHeight,readonly) int height; 
@property (getter=getBytesPerPixel,readonly) int bytesPerPixel; 
@property (getter=getBytesPerRow,readonly) int bytesPerRow; 
@property (getter=getData,readonly) void* data; 
+(id)createVImageWrapperForProcessorInput:(id)arg1 thatMatchesOutput:(id)arg2 ;
+(id)vImageWrapperByCroppingWrapper:(id)arg1 toRect:(CGRect)arg2 ;
-(void)free;
-(id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bpr:(int)arg4 bytes:(void*)arg5 freeBytesWhenDone:(BOOL)arg6 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 ;
-(vImage_Buffer*)image;
-(int)getBytesPerPixel;
-(id)initWithWidth:(int)arg1 height:(int)arg2 bpp:(int)arg3 bytes:(void*)arg4 freeBytesWhenDone:(BOOL)arg5 ;
-(id)initWithShapeOf:(id)arg1 ;
-(int)getWidth;
-(void*)getData;
-(int)getHeight;
-(void)dealloc;
-(int)getBytesPerRow;
@end

