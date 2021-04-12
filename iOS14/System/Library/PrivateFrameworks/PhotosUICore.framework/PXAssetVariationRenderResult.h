/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSDictionary, PICompositionController, NSError, NSURL, UIImage, AVAsset, AVVideoComposition;

@interface PXAssetVariationRenderResult : NSObject {

	BOOL _success;
	BOOL _fullsizeRender;
	long long _variationType;
	NSDictionary* _analysisResult;
	PICompositionController* _compositionController;
	NSError* _error;
	NSURL* _imageURL;
	UIImage* _image;
	NSURL* _videoURL;
	AVAsset* _videoAsset;
	AVVideoComposition* _videoComposition;

}

@property (nonatomic,retain) UIImage * image;                                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) AVAsset * videoAsset;                                                //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,retain) AVVideoComposition * videoComposition;                               //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,getter=isFullsizeRender,nonatomic) BOOL fullsizeRender;                         //@synthesize fullsizeRender=_fullsizeRender - In the implementation block
@property (nonatomic,readonly) long long variationType;                                           //@synthesize variationType=_variationType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analysisResult;                                //@synthesize analysisResult=_analysisResult - In the implementation block
@property (nonatomic,readonly) BOOL success;                                                      //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                                                  //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                                  //@synthesize videoURL=_videoURL - In the implementation block
-(BOOL)success;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
-(NSError *)error;
-(id)description;
-(BOOL)isFullsizeRender;
-(void)setFullsizeRender:(BOOL)arg1 ;
-(id)initWithVariationType:(long long)arg1 imageURL:(id)arg2 videoURL:(id)arg3 analysisResult:(id)arg4 compositionController:(id)arg5 success:(BOOL)arg6 error:(id)arg7 ;
-(long long)variationType;
-(NSDictionary *)analysisResult;
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoAsset:(AVAsset *)arg1 ;
-(NSURL *)imageURL;
-(AVAsset *)videoAsset;
-(PICompositionController *)compositionController;
@end

