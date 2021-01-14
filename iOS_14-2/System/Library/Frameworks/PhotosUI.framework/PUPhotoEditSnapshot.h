/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PHAdjustmentData, NSData, AVURLAsset;

@interface PUPhotoEditSnapshot : NSObject {

	long long _workImageVersion;
	PHAdjustmentData* _adjustmentData;
	NSData* _imageData;
	NSData* _baseImageData;
	AVURLAsset* _videoComplement;
	AVURLAsset* _baseVideoComplement;

}

@property (assign,setter=_setWorkImageVersion:,nonatomic) long long workImageVersion;                       //@synthesize workImageVersion=_workImageVersion - In the implementation block
@property (setter=_setAdjustmentData:,nonatomic,retain) PHAdjustmentData * adjustmentData;                  //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (setter=_setImageData:,nonatomic,retain) NSData * imageData;                                      //@synthesize imageData=_imageData - In the implementation block
@property (setter=_setBaseImageData:,nonatomic,retain) NSData * baseImageData;                              //@synthesize baseImageData=_baseImageData - In the implementation block
@property (setter=_setVideoComplement:,nonatomic,retain) AVURLAsset * videoComplement;                      //@synthesize videoComplement=_videoComplement - In the implementation block
@property (setter=_setBaseVideoComplement:,nonatomic,retain) AVURLAsset * baseVideoComplement;              //@synthesize baseVideoComplement=_baseVideoComplement - In the implementation block
+(void)captureSnapshotForAsset:(id)arg1 mediaProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(PHAdjustmentData *)adjustmentData;
-(id)_copyAsset:(id)arg1 ;
-(void)_setImageData:(id)arg1 ;
-(NSData *)imageData;
-(long long)workImageVersion;
-(id)_copyData:(id)arg1 ;
-(void)_setWorkImageVersion:(long long)arg1 ;
-(void)_setAdjustmentData:(id)arg1 ;
-(void)_setBaseImageData:(id)arg1 ;
-(void)_setBaseVideoComplement:(id)arg1 ;
-(void)_setVideoComplement:(id)arg1 ;
-(id)_copyDataAtURL:(id)arg1 ;
-(void)_copySourceData:(id)arg1 destinationData:(out id*)arg2 destinationURL:(out id*)arg3 ;
-(NSData *)baseImageData;
-(AVURLAsset *)baseVideoComplement;
-(AVURLAsset *)videoComplement;
@end

