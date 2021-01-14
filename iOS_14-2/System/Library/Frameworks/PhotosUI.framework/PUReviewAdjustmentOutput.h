/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSURL;

@interface PUReviewAdjustmentOutput : NSObject {

	NSURL* _renderedImageFileURL;
	NSURL* _renderedVideoFileURL;
	long long __adjustmentInputBaseVersion;
	NSURL* __baseImageURL;
	NSURL* __baseVideoURL;

}

@property (setter=_setRenderedImageFileURL:,nonatomic,retain) NSURL * renderedImageFileURL;                             //@synthesize renderedImageFileURL=_renderedImageFileURL - In the implementation block
@property (setter=_setRenderedVideoFileURL:,nonatomic,retain) NSURL * renderedVideoFileURL;                             //@synthesize renderedVideoFileURL=_renderedVideoFileURL - In the implementation block
@property (assign,setter=_setAdjustmentInputBaseVersion:,nonatomic) long long _adjustmentInputBaseVersion;              //@synthesize _adjustmentInputBaseVersion=__adjustmentInputBaseVersion - In the implementation block
@property (setter=_setBaseImageURL:,nonatomic,retain) NSURL * _baseImageURL;                                            //@synthesize _baseImageURL=__baseImageURL - In the implementation block
@property (setter=_setBaseVideoURL:,nonatomic,retain) NSURL * _baseVideoURL;                                            //@synthesize _baseVideoURL=__baseVideoURL - In the implementation block
-(void)_setRenderedImageFileURL:(id)arg1 ;
-(NSURL *)_baseImageURL;
-(void)_setRenderedVideoFileURL:(id)arg1 ;
-(long long)_adjustmentInputBaseVersion;
-(void)_setAdjustmentInputBaseVersion:(long long)arg1 ;
-(void)_setBaseImageURL:(id)arg1 ;
-(NSURL *)_baseVideoURL;
-(void)_setBaseVideoURL:(id)arg1 ;
-(NSURL *)renderedImageFileURL;
-(NSURL *)renderedVideoFileURL;
@end

