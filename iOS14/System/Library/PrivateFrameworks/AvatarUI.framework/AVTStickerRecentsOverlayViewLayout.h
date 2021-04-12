/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@interface AVTStickerRecentsOverlayViewLayout : NSObject {

	double _imageToTopPadding;
	double _imageToTitlePadding;
	double _titleToSubtitlePadding;
	double _subtitleToButtonPadding;
	double _imageHeight;
	double _horizontalEdgePadding;

}

@property (nonatomic,readonly) double imageToTopPadding;                    //@synthesize imageToTopPadding=_imageToTopPadding - In the implementation block
@property (nonatomic,readonly) double imageToTitlePadding;                  //@synthesize imageToTitlePadding=_imageToTitlePadding - In the implementation block
@property (nonatomic,readonly) double titleToSubtitlePadding;               //@synthesize titleToSubtitlePadding=_titleToSubtitlePadding - In the implementation block
@property (nonatomic,readonly) double subtitleToButtonPadding;              //@synthesize subtitleToButtonPadding=_subtitleToButtonPadding - In the implementation block
@property (nonatomic,readonly) double imageHeight;                          //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) double horizontalEdgePadding;                //@synthesize horizontalEdgePadding=_horizontalEdgePadding - In the implementation block
+(id)standardPortraitLayout;
+(id)standardLandscapeLayout;
+(id)buttonsPortraitLayout;
+(id)buttonsLandscapeLayout;
-(id)initWithImageToTopPadding:(double)arg1 imageToTitlePadding:(double)arg2 titleToSubtitlePadding:(double)arg3 subtitleToButtonPadding:(double)arg4 imageHeight:(double)arg5 horizontalEdgePadding:(double)arg6 ;
-(double)imageToTopPadding;
-(double)imageToTitlePadding;
-(double)titleToSubtitlePadding;
-(double)subtitleToButtonPadding;
-(double)horizontalEdgePadding;
-(double)imageHeight;
@end

