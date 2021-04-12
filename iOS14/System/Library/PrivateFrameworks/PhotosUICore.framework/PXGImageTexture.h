/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGBaseTexture.h>

@interface PXGImageTexture : PXGBaseTexture {

	CGImageRef _sourceCGImage;
	CVBufferRef _sourceCVPixelBuffer;

}

@property (assign,nonatomic) CGImageRef sourceCGImage; 
@property (assign,nonatomic) CVBufferRef sourceCVPixelBuffer; 
@property (nonatomic,readonly)  orientationTransform; 
+(id)_sharedCIContext;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX11*)arg3 spriteStyles:(const SCD_Struct_PX14*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7 ;
-(id)init;
-(CGImageRef)imageRepresentation;
-(void)setSourceCGImage:(CGImageRef)arg1 ;
-(CGImageRef)sourceCGImage;
-(void)setSourceCVPixelBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)sourceCVPixelBuffer;
-()orientationTransform;
-(void)dealloc;
@end

