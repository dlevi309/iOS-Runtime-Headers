/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class TVImageProxy;

@interface VUIVideoAdvisoryLogoImageDownloader : NSObject {

	TVImageProxy* _ratingImageProxy;

}

@property (nonatomic,retain) TVImageProxy * ratingImageProxy;              //@synthesize ratingImageProxy=_ratingImageProxy - In the implementation block
-(void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(TVImageProxy *)ratingImageProxy;
-(void)setRatingImageProxy:(TVImageProxy *)arg1 ;
@end

