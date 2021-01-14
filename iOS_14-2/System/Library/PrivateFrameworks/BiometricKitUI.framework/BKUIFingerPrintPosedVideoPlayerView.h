/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <UIKitCore/UIView.h>

@class NSArray, AVQueuePlayer, UIImageView, UIImage, AVPlayerLayer;

@interface BKUIFingerPrintPosedVideoPlayerView : UIView {

	NSArray* _assetNames;
	AVQueuePlayer* _videoPlayer;
	UIImageView* _portraitImageView;
	UIImage* _horizontalPosedImage;
	UIImage* _verticalPosedImage;
	AVPlayerLayer* _playerLayer;

}

@property (nonatomic,retain) AVQueuePlayer * videoPlayer;                  //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,retain) UIImageView * portraitImageView;              //@synthesize portraitImageView=_portraitImageView - In the implementation block
@property (nonatomic,retain) UIImage * horizontalPosedImage;               //@synthesize horizontalPosedImage=_horizontalPosedImage - In the implementation block
@property (nonatomic,retain) UIImage * verticalPosedImage;                 //@synthesize verticalPosedImage=_verticalPosedImage - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * playerLayer;                  //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) NSArray * assetNames;                         //@synthesize assetNames=_assetNames - In the implementation block
+(Class)layerClass;
-(void)load;
-(id)_filters;
-(NSArray *)assetNames;
-(void)setVideoPlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)videoPlayer;
-(void)setAssetNames:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)itemDidFinishPlaying:(id)arg1 ;
-(void)showVideoPlayer;
-(UIImageView *)portraitImageView;
-(UIImage *)horizontalPosedImage;
-(UIImage *)verticalPosedImage;
-(void)_updateImageForOrientation:(long long)arg1 ;
-(void)hideVideoPlayer;
-(id)initWithAssetNames:(id)arg1 ;
-(void)_setFilters:(id)arg1 ;
-(void)transitionToOrientation:(long long)arg1 ;
-(void)setPortraitImageView:(UIImageView *)arg1 ;
-(void)setHorizontalPosedImage:(UIImage *)arg1 ;
-(void)setVerticalPosedImage:(UIImage *)arg1 ;
@end

