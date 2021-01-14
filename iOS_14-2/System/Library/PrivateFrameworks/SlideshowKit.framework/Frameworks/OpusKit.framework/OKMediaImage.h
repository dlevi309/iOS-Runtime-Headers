/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


#import <OpusKit/OpusKit-Structs.h>
@interface OKMediaImage : NSObject {

	CGImageRef _cgImageRef;
	long long _imageOrientation;
	double _scale;

}

@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) long long imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,readonly) double scale;                            //@synthesize scale=_scale - In the implementation block
+(id)mediaImageWithCGImage:(CGImageRef)arg1 ;
+(id)mediaImageWithUIImage:(id)arg1 ;
-(long long)imageOrientation;
-(id)init;
-(double)scale;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)CGImage;
-(void)dealloc;
-(id)initWithUIImage:(id)arg1 ;
-(CGImageRef)createComposedImage:(BOOL)arg1 colorSpace:(id)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 imageOrientation:(long long)arg2 scale:(double)arg3 ;
@end

