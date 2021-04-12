/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class AVAsset, AVVideoComposition;

@interface _PXLivePhotoTrimScrubberLoupeViewImageRequest : NSObject {

	AVAsset* _asset;
	AVVideoComposition* _videoComposition;
	double _scale;
	CGSize _imageSize;
	SCD_Struct_PX8 _sourceTime;

}

@property (nonatomic,retain) AVAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 sourceTime;                          //@synthesize sourceTime=_sourceTime - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
-(void)setAsset:(AVAsset *)arg1 ;
-(CGSize)imageSize;
-(void)setSourceTime:(SCD_Struct_PX8)arg1 ;
-(SCD_Struct_PX8)sourceTime;
-(AVAsset *)asset;
-(double)scale;
-(BOOL)isValid;
-(void)setScale:(double)arg1 ;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

