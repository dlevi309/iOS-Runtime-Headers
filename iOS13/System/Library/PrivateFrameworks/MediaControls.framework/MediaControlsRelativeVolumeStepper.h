/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MPVolumeController, MTVisualStylingProvider, MTMaterialView, MPButton, NSBundle;

@interface MediaControlsRelativeVolumeStepper : UIView {

	MPVolumeController* _volumeController;
	MTVisualStylingProvider* _visualStylingProvider;
	MTMaterialView* _increaseBackground;
	MTMaterialView* _decreaseBackground;
	MPButton* _increaseButton;
	MPButton* _decreaseButton;
	NSBundle* _mediaControlsBundle;

}

@property (nonatomic,retain) MTMaterialView * increaseBackground;                          //@synthesize increaseBackground=_increaseBackground - In the implementation block
@property (nonatomic,retain) MTMaterialView * decreaseBackground;                          //@synthesize decreaseBackground=_decreaseBackground - In the implementation block
@property (nonatomic,retain) MPButton * increaseButton;                                    //@synthesize increaseButton=_increaseButton - In the implementation block
@property (nonatomic,retain) MPButton * decreaseButton;                                    //@synthesize decreaseButton=_decreaseButton - In the implementation block
@property (nonatomic,retain) NSBundle * mediaControlsBundle;                               //@synthesize mediaControlsBundle=_mediaControlsBundle - In the implementation block
@property (nonatomic,retain) MPVolumeController * volumeController;                        //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(MPVolumeController *)volumeController;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(NSBundle *)mediaControlsBundle;
-(void)decreaseTouchUpInside:(id)arg1 ;
-(void)decreaseButtonHoldBegan:(id)arg1 ;
-(void)decreaseButtonHoldReleased:(id)arg1 ;
-(void)increaseTouchUpInside:(id)arg1 ;
-(void)increaseButtonHoldBegan:(id)arg1 ;
-(void)increaseButtonHoldReleased:(id)arg1 ;
-(MTMaterialView *)increaseBackground;
-(void)setIncreaseBackground:(MTMaterialView *)arg1 ;
-(MTMaterialView *)decreaseBackground;
-(void)setDecreaseBackground:(MTMaterialView *)arg1 ;
-(MPButton *)increaseButton;
-(void)setIncreaseButton:(MPButton *)arg1 ;
-(MPButton *)decreaseButton;
-(void)setDecreaseButton:(MPButton *)arg1 ;
-(void)setMediaControlsBundle:(NSBundle *)arg1 ;
@end

