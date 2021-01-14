/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MPVolumeController, MRUVisualStylingProvider, UIView, MPButton, NSString;

@interface MRUVolumeStepperView : UIView <MRUVisualStylingProviderObserver> {

	MPVolumeController* _volumeController;
	MRUVisualStylingProvider* _stylingProvider;
	UIView* _decreaseBackground;
	UIView* _increaseBackground;
	MPButton* _decreaseButton;
	MPButton* _increaseButton;

}

@property (nonatomic,retain) UIView * decreaseBackground;                             //@synthesize decreaseBackground=_decreaseBackground - In the implementation block
@property (nonatomic,retain) UIView * increaseBackground;                             //@synthesize increaseBackground=_increaseBackground - In the implementation block
@property (nonatomic,retain) MPButton * decreaseButton;                               //@synthesize decreaseButton=_decreaseButton - In the implementation block
@property (nonatomic,retain) MPButton * increaseButton;                               //@synthesize increaseButton=_increaseButton - In the implementation block
@property (nonatomic,retain) MPVolumeController * volumeController;                   //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIncreaseBackground:(UIView *)arg1 ;
-(MPVolumeController *)volumeController;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(UIView *)decreaseBackground;
-(void)increaseTouchUpInside:(id)arg1 ;
-(void)layoutSubviews;
-(void)increaseButtonHoldReleased:(id)arg1 ;
-(UIView *)increaseBackground;
-(MPButton *)decreaseButton;
-(void)decreaseTouchUpInside:(id)arg1 ;
-(void)decreaseButtonHoldReleased:(id)arg1 ;
-(void)setDecreaseButton:(MPButton *)arg1 ;
-(void)increaseButtonHoldBegan:(id)arg1 ;
-(MPButton *)increaseButton;
-(void)decreaseButtonHoldBegan:(id)arg1 ;
-(void)updateVisualStyling;
-(void)setIncreaseButton:(MPButton *)arg1 ;
-(void)setDecreaseBackground:(UIView *)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
@end

