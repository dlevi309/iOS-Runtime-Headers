/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MRUNowPlayingVolumeSlider, MRUVolumeStepperView, MRUVisualStylingProvider;

@interface MRUNowPlayingVolumeControlsView : UIView {

	BOOL _onScreen;
	MRUNowPlayingVolumeSlider* _slider;
	MRUVolumeStepperView* _stepper;
	MRUVisualStylingProvider* _stylingProvider;

}

@property (nonatomic,readonly) MRUNowPlayingVolumeSlider * slider;                    //@synthesize slider=_slider - In the implementation block
@property (nonatomic,readonly) MRUVolumeStepperView * stepper;                        //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                         //@synthesize onScreen=_onScreen - In the implementation block
-(MRUVolumeStepperView *)stepper;
-(BOOL)isOnScreen;
-(MRUNowPlayingVolumeSlider *)slider;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)updateVolumeCapabilities;
@end

