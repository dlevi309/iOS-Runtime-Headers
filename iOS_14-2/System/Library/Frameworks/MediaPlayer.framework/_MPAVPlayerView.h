/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class _MPAVPlayerViewPlayerLayerView, NSString, UIViewPropertyAnimator, AVPlayer;

@interface _MPAVPlayerView : UIView {

	_MPAVPlayerViewPlayerLayerView* _playerLayerView;
	NSString* _targetVideoGravity;
	UIViewPropertyAnimator* _videoGravityAnimator;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (nonatomic,readonly) _MPAVPlayerViewPlayerLayerView * playerLayerView; 
@property (nonatomic,copy) NSString * targetVideoGravity;                                     //@synthesize targetVideoGravity=_targetVideoGravity - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * videoGravityAnimator;                   //@synthesize videoGravityAnimator=_videoGravityAnimator - In the implementation block
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(CGRect)videoBounds;
-(_MPAVPlayerViewPlayerLayerView *)playerLayerView;
-(void)setVideoGravity:(id)arg1 duration:(float)arg2 ;
-(BOOL)_isDescendantOfScrollView;
-(void)_updatePlayerLayerViewFrame;
-(void)_updatePlayerLayerViewFrame:(id)arg1 ;
-(id)_mediaTimingFunctionForCurrentAnimationCurve;
-(NSString *)targetVideoGravity;
-(void)setTargetVideoGravity:(NSString *)arg1 ;
-(UIViewPropertyAnimator *)videoGravityAnimator;
-(void)setVideoGravityAnimator:(UIViewPropertyAnimator *)arg1 ;
@end

