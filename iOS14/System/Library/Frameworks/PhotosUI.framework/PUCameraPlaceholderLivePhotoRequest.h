/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class UIImage, NSURL, NSValue, NSString, NSError, PHAsset;

@interface PUCameraPlaceholderLivePhotoRequest : NSObject {

	BOOL _imageRequestFinished;
	BOOL _videoRequestFinished;
	UIImage* _image;
	NSURL* _videoURL;
	NSValue* _stillDisplayTime;
	NSString* _filterName;
	NSError* _error;
	PHAsset* _asset;
	/*^block*/id _resultHandler;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                        //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) NSValue * stillDisplayTime;              //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,copy) NSString * filterName;                     //@synthesize filterName=_filterName - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL imageRequestFinished;               //@synthesize imageRequestFinished=_imageRequestFinished - In the implementation block
@property (assign,nonatomic) BOOL videoRequestFinished;               //@synthesize videoRequestFinished=_videoRequestFinished - In the implementation block
@property (nonatomic,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                 //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(void)setImage:(UIImage *)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(PHAsset *)asset;
-(void)setError:(NSError *)arg1 ;
-(NSString *)filterName;
-(UIImage *)image;
-(NSError *)error;
-(void)setFilterName:(NSString *)arg1 ;
-(NSURL *)videoURL;
-(NSValue *)stillDisplayTime;
-(BOOL)videoRequestFinished;
-(BOOL)imageRequestFinished;
-(void)setVideoRequestFinished:(BOOL)arg1 ;
-(void)setStillDisplayTime:(NSValue *)arg1 ;
-(void)setImageRequestFinished:(BOOL)arg1 ;
-(id)initWithAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

