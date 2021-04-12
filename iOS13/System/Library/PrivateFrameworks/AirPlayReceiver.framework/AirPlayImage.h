/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@interface AirPlayImage : NSObject {

	CGSize _unadjustedSize;
	CGImageRef _image;
	void* _ioSurface;
	int _imageOrientation;
	CGSize _scale;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@property (nonatomic,readonly) void* ioSurface; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) int imageOrientation; 
@property (assign,nonatomic) CGSize scale; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(CGSize)size;
-(CGSize)scale;
-(int)imageOrientation;
-(CGImageRef)CGImage;
-(void)setScale:(CGSize)arg1 ;
-(void*)ioSurface;
-(id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 decode:(BOOL)arg2 ;
-(id)layerContents;
-(CGAffineTransform)contentsTransformForLayer:(id)arg1 ;
-(void)_setImageOrientation:(int)arg1 ;
-(void)_setIOSurface:(void*)arg1 ;
-(void)_setCGImage:(CGImageRef)arg1 ;
-(CGSize)_unadjustedContentSize;
@end

