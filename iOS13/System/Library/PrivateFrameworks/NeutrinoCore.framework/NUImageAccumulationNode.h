/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@protocol NUMutablePurgeableImage, OS_dispatch_queue;
@class NSObject, NUPixelFormat, NUColorSpace, NUImageLayout;

@interface NUImageAccumulationNode : NURenderNode {

	id<NUMutablePurgeableImage> _image;
	NSObject*<OS_dispatch_queue> _queue;
	NUPixelFormat* _pixelFormat;
	NUColorSpace* _colorSpace;
	NUImageLayout* _layout;
	SCD_Struct_NU7 _imageSize;

}

@property (nonatomic,readonly) NUImageLayout * layout;                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU7 imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * pixelFormat;                    //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) NUColorSpace * colorSpace;                      //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,readonly) id<NUMutablePurgeableImage> image; 
-(id<NUMutablePurgeableImage>)image;
-(NUColorSpace *)colorSpace;
-(id)debugQuickLookObject;
-(NUPixelFormat *)pixelFormat;
-(NUImageLayout *)layout;
-(id)_image;
-(SCD_Struct_NU7)imageSize;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)initWithImageSize:(SCD_Struct_NU7)arg1 tileSize:(SCD_Struct_NU7)arg2 borderSize:(SCD_Struct_NU7)arg3 pixelFormat:(id)arg4 colorSpace:(id)arg5 input:(id)arg6 ;
-(id)_newImage;
@end

