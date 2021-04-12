/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGImageTexture.h>

@interface PXGViewImageTexture : PXGImageTexture {

	BOOL _isOpaque;
	unsigned _orientation;
	CGImageRef _imageRef;

}

@property (nonatomic,readonly) CGImageRef imageRef;               //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) unsigned orientation;              //@synthesize orientation=_orientation - In the implementation block
-(BOOL)isOpaque;
-(long long)estimatedByteSize;
-(id)initWithImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
-(int)presentationType;
-(unsigned)orientation;
-(CGImageRef)imageRef;
-(CGSize)pixelSize;
-(void)dealloc;
@end

