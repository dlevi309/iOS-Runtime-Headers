/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithUIImage:(id)arg1 ;
-(id)initWithPVImage:(id)arg1 ;
-(id)bluredImageWithFlippedXAxis:(BOOL)arg1 ;
-(PVImageBuffer *)pvImageBuffer;
-(BOOL)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;
@end

