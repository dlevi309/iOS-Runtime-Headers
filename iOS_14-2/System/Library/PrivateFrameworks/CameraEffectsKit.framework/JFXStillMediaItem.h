/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTAssetMediaItem.h>

@class PVColorSpace;

@interface JFXStillMediaItem : JTAssetMediaItem {

	PVColorSpace* _imageColorSpace;
	CGSize _sourceImageSize;

}

@property (assign,nonatomic) CGSize sourceImageSize;                      //@synthesize sourceImageSize=_sourceImageSize - In the implementation block
@property (nonatomic,retain) PVColorSpace * imageColorSpace;              //@synthesize imageColorSpace=_imageColorSpace - In the implementation block
+(void)stillMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)colorSpace;
-(id)info;
-(id)assetURL;
-(void)commonInit;
-(id)description;
-(PVColorSpace *)imageColorSpace;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)durationAt30fps;
-(BOOL)canBeAddedToSequence;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(void)setImageColorSpace:(PVColorSpace *)arg1 ;
-(CGSize)sizeForQuality:(int)arg1 ;
-(void)setSourceImageSize:(CGSize)arg1 ;
-(CGSize)sourceImageSize;
-(CGSize)playBackImageSize:(CGSize)arg1 ;
-(CGSize)exportImageSize:(CGSize)arg1 ;
-(CGSize)imageSizeForRenderingIntent:(int)arg1 originalSize:(CGSize)arg2 ;
-(double)JT_maximumPixelsForStillImage:(BOOL)arg1 ;
-(CGSize)sizeForMaxPixels:(double)arg1 sourceSize:(CGSize)arg2 ;
-(CGSize)thumbImageSize:(CGSize)arg1 ;
-(void)generateLocalURLForAsset;
-(CGImageRef)imageForURL:(id)arg1 renderingIntent:(int)arg2 ;
-(BOOL)isImageValid:(id)arg1 renderingIntent:(int)arg2 size:(CGSize*)arg3 ;
@end

