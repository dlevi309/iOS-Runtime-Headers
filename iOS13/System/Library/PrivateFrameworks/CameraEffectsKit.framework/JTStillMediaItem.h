/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTAssetMediaItem.h>

@class JTThumbnailGenerator;

@interface JTStillMediaItem : JTAssetMediaItem {

	JTThumbnailGenerator* _thumbnailGenerator;
	CGSize _sourceImageSize;

}

@property (assign,nonatomic) CGSize sourceImageSize;                                 //@synthesize sourceImageSize=_sourceImageSize - In the implementation block
@property (nonatomic,retain) JTThumbnailGenerator * thumbnailGenerator;              //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
+(void)stillMediaItemWithAssetIdentifier:(id)arg1 progressHandlerBlock:(/*^block*/id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)stillMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)info;
-(void)commonInit;
-(id)assetURL;
-(JTThumbnailGenerator *)thumbnailGenerator;
-(void)setThumbnailGenerator:(JTThumbnailGenerator *)arg1 ;
-(int)durationAt30fps;
-(CGSize)sizeForQuality:(int)arg1 ;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canBeAddedToSequence;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(void)generateThumbnailWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateLocalURLForAsset;
-(void)setSourceImageSize:(CGSize)arg1 ;
-(CGSize)sourceImageSize;
-(CGSize)playBackImageSize:(CGSize)arg1 ;
-(CGSize)exportImageSize:(CGSize)arg1 ;
-(CGSize)imageSizeForRenderingIntent:(int)arg1 originalSize:(CGSize)arg2 ;
-(CGSize)sizeForMaxPixels:(double)arg1 sourceSize:(CGSize)arg2 ;
-(CGSize)thumbImageSize:(CGSize)arg1 ;
-(CGImageRef)imageForURL:(id)arg1 renderingIntent:(int)arg2 ;
-(BOOL)isImageValid:(id)arg1 renderingIntent:(int)arg2 size:(CGSize*)arg3 ;
@end

