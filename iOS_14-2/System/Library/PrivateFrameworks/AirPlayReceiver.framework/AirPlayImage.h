/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(CGSize)size;
-(CGSize)scale;
-(id)initWithData:(id)arg1 ;
-(void)setScale:(CGSize)arg1 ;
-(void*)ioSurface;
-(CGImageRef)CGImage;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2 ;
-(id)initWithData:(id)arg1 decode:(BOOL)arg2 ;
-(id)layerContents;
-(CGAffineTransform)contentsTransformForLayer:(id)arg1 ;
-(void)_setImageOrientation:(int)arg1 ;
-(void)_setIOSurface:(void*)arg1 ;
-(void)_setCGImage:(CGImageRef)arg1 ;
-(CGSize)_unadjustedContentSize;
@end

