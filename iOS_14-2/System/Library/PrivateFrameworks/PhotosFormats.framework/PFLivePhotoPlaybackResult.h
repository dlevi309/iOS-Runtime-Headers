/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class AVAsset;

@interface PFLivePhotoPlaybackResult : NSObject {

	int _photoExifOrientation;
	CGImageRef _photo;
	AVAsset* _videoAsset;
	SCD_Struct_PF3 _photoTime;

}

@property (assign,nonatomic) CGImageRef photo;                      //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) int photoExifOrientation;              //@synthesize photoExifOrientation=_photoExifOrientation - In the implementation block
@property (assign,nonatomic) SCD_Struct_PF3 photoTime;              //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,retain) AVAsset * videoAsset;                  //@synthesize videoAsset=_videoAsset - In the implementation block
-(void)setPhoto:(CGImageRef)arg1 ;
-(CGImageRef)photo;
-(void)setVideoAsset:(AVAsset *)arg1 ;
-(void)setPhotoTime:(SCD_Struct_PF3)arg1 ;
-(SCD_Struct_PF3)photoTime;
-(AVAsset *)videoAsset;
-(int)photoExifOrientation;
-(void)dealloc;
-(void)setPhotoExifOrientation:(int)arg1 ;
@end

