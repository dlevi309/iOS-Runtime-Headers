/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class UIImage, PVImageBuffer;

@interface JTImage : NSObject {

	UIImage* _image;
	PVImageBuffer* _pvImageBuffer;

}

@property (nonatomic,readonly) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * pvImageBuffer;              //@synthesize pvImageBuffer=_pvImageBuffer - In the implementation block
+(id)jtImageWithUIImage:(id)arg1 ;
-(UIImage *)image;
-(id)bluredImageWithFlippedXAxis:(BOOL)arg1 ;
-(id)initWithPVImage:(id)arg1 ;
-(PVImageBuffer *)pvImageBuffer;
-(id)initWithUIImage:(id)arg1 ;
-(BOOL)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;
@end

