/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, _MPDownloadProgressRingView, UIImage, UIColor;

@interface MPDownloadProgressView : UIView {

	UIImageView* _centerImageView;
	UIView* _outerRingView;
	_MPDownloadProgressRingView* _progressView;
	double _downloadProgress;
	UIImage* _centerImage;
	UIColor* _outerRingColor;

}

@property (assign,nonatomic) double downloadProgress;               //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) UIImage * centerImage;                 //@synthesize centerImage=_centerImage - In the implementation block
@property (nonatomic,retain) UIColor * outerRingColor;              //@synthesize outerRingColor=_outerRingColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)downloadProgress;
-(void)layoutSubviews;
-(void)setCenterImage:(UIImage *)arg1 ;
-(void)setOuterRingColor:(UIColor *)arg1 ;
-(UIImage *)centerImage;
-(UIColor *)outerRingColor;
-(void)setDownloadProgress:(double)arg1 ;
@end

