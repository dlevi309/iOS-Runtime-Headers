/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UIImageView, MPVolumeSlider;

@interface NUNowPlayingVolumeControl : UIView {

	UIVisualEffectView* _lighteningEffectView;
	UIImageView* _volumeMaxImageView;
	UIImageView* _volumeMinImageView;
	MPVolumeSlider* _volumeSlider;

}

@property (nonatomic,retain) UIVisualEffectView * lighteningEffectView;              //@synthesize lighteningEffectView=_lighteningEffectView - In the implementation block
@property (nonatomic,retain) UIImageView * volumeMaxImageView;                       //@synthesize volumeMaxImageView=_volumeMaxImageView - In the implementation block
@property (nonatomic,retain) UIImageView * volumeMinImageView;                       //@synthesize volumeMinImageView=_volumeMinImageView - In the implementation block
@property (nonatomic,retain) MPVolumeSlider * volumeSlider;                          //@synthesize volumeSlider=_volumeSlider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVolumeSlider:(MPVolumeSlider *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(MPVolumeSlider *)volumeSlider;
-(UIVisualEffectView *)lighteningEffectView;
-(UIImageView *)volumeMinImageView;
-(UIImageView *)volumeMaxImageView;
-(void)setLighteningEffectView:(UIVisualEffectView *)arg1 ;
-(void)setVolumeMaxImageView:(UIImageView *)arg1 ;
-(void)setVolumeMinImageView:(UIImageView *)arg1 ;
@end

