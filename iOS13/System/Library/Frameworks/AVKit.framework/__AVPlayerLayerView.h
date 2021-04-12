/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerController, AVPictureInPicturePlayerLayerView, AVPlayerLayer, NSDictionary;

@interface __AVPlayerLayerView : UIView {

	AVPlayerController* _playerController;
	AVPictureInPicturePlayerLayerView* _pictureInPicturePlayerLayerView;
	AVPlayerLayer* _playerLayer;
	AVPlayerLayer* _pictureInPicturePlayerLayer;

}

@property (nonatomic,retain) AVPlayerLayer * pictureInPicturePlayerLayer;                                        //@synthesize pictureInPicturePlayerLayer=_pictureInPicturePlayerLayer - In the implementation block
@property (nonatomic,readonly) CGSize videoDisplaySize; 
@property (nonatomic,readonly) AVPlayerLayer * playerLayer;                                                      //@synthesize playerLayer=_playerLayer - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController; 
@property (assign,nonatomic) long long videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (assign,getter=isVideoScaled,nonatomic) BOOL videoScaled; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView; 
+(Class)layerClass;
+(id)keyPathsForValuesAffectingVideoLayerGravity;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoBounds;
+(id)keyPathsForValuesAffectingVideoDisplaySize;
+(id)keyPathsForValuesAffectingVideoScaled;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)videoGravity;
-(void)setVideoGravity:(long long)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(BOOL)isReadyForDisplay;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
-(void)startRoutingVideoToPictureInPicturePlayerLayerView;
-(void)stopRoutingVideoToPictureInPicturePlayerLayerView;
-(CGRect)videoBounds;
-(CGSize)videoDisplaySize;
-(BOOL)isVideoScaled;
-(void)setVideoScaled:(BOOL)arg1 ;
-(AVPlayerLayer *)pictureInPicturePlayerLayer;
-(void)setPictureInPicturePlayerLayer:(AVPlayerLayer *)arg1 ;
@end

