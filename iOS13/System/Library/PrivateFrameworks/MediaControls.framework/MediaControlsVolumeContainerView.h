/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class MediaControlsVolumeSlider, MTVisualStylingProvider, MediaControlsRelativeVolumeStepper, NSString;

@interface MediaControlsVolumeContainerView : UIView <UIGestureRecognizerDelegate> {

	BOOL _transitioning;
	BOOL _onScreen;
	unsigned _volumeCapabilities;
	MediaControlsVolumeSlider* _volumeSlider;
	long long _style;
	MTVisualStylingProvider* _visualStylingProvider;
	MediaControlsRelativeVolumeStepper* _volumeStepper;

}

@property (nonatomic,retain) MediaControlsRelativeVolumeStepper * volumeStepper;              //@synthesize volumeStepper=_volumeStepper - In the implementation block
@property (assign,nonatomic) unsigned volumeCapabilities;                                     //@synthesize volumeCapabilities=_volumeCapabilities - In the implementation block
@property (nonatomic,retain) MediaControlsVolumeSlider * volumeSlider;                        //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                       //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                 //@synthesize onScreen=_onScreen - In the implementation block
@property (assign,nonatomic) long long style;                                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                 //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)isOnScreen;
-(BOOL)isTransitioning;
-(MediaControlsVolumeSlider *)volumeSlider;
-(void)setVolumeSlider:(MediaControlsVolumeSlider *)arg1 ;
-(unsigned)volumeCapabilities;
-(void)setOnScreen:(BOOL)arg1 ;
-(void)setVolumeCapabilities:(unsigned)arg1 ;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 slider:(id)arg2 ;
-(void)_updateVolumeStyle;
-(void)_updateVolumeCapabilities;
-(MediaControlsRelativeVolumeStepper *)volumeStepper;
-(void)setVolumeStepper:(MediaControlsRelativeVolumeStepper *)arg1 ;
@end

