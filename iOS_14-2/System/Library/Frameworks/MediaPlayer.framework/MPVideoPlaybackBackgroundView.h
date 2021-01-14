/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, MPAVController;

@interface MPVideoPlaybackBackgroundView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIEdgeInsets _edgeInsets;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(MPAVController *)player;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateDisplay;
-(void)layoutSubviews;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_videoViewDidMoveToWindow:(id)arg1 ;
-(id)_imageNamed:(id)arg1 ;
-(void)dealloc;
@end

