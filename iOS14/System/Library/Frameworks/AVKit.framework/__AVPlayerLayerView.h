/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerController, AVPictureInPicturePlayerLayerView, AVPlayerLayer, NSDictionary;

@interface __AVPlayerLayerView : UIView {

	AVPlayerController* _playerController;
	AVPictureInPicturePlayerLayerView* _pictureInPicturePlayerLayerView;
	AVPlayerLayer* _pictureInPicturePlayerLayer;

}

@property (nonatomic,retain) AVPlayerLayer * pictureInPicturePlayerLayer;                                        //@synthesize pictureInPicturePlayerLayer=_pictureInPicturePlayerLayer - In the implementation block
@property (nonatomic,readonly) CGSize videoDisplaySize; 
@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,retain) AVPlayerController * playerController; 
@property (assign,nonatomic) long long videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (assign,getter=isVideoScaled,nonatomic) BOOL videoScaled; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView; 
+(id)keyPathsForValuesAffectingVideoLayerGravity;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoBounds;
+(id)keyPathsForValuesAffectingVideoDisplaySize;
+(id)keyPathsForValuesAffectingVideoScaled;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
+(Class)layerClass;
+(id)keyPathsForValuesAffectingPlayerLayer;
-(void)setVideoGravity:(long long)arg1 ;
-(long long)videoGravity;
-(CGSize)videoDisplaySize;
-(BOOL)isVideoScaled;
-(void)setVideoScaled:(BOOL)arg1 ;
-(AVPlayerLayer *)pictureInPicturePlayerLayer;
-(void)setPictureInPicturePlayerLayer:(AVPlayerLayer *)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(BOOL)isReadyForDisplay;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
-(void)startRoutingVideoToPictureInPicturePlayerLayerView;
-(void)stopRoutingVideoToPictureInPicturePlayerLayerView;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(CGRect)videoBounds;
-(AVPlayerLayer *)playerLayer;
@end

