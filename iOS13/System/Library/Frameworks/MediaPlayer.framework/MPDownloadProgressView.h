/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)setCenterImage:(UIImage *)arg1 ;
-(void)setOuterRingColor:(UIColor *)arg1 ;
-(UIImage *)centerImage;
-(UIColor *)outerRingColor;
@end

