/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CEKWheelScrubberView, CEKApertureSlider, CEKSlider;

@interface CAMUtilityBar : UIView {

	CEKWheelScrubberView* _filterScrubberView;
	CEKApertureSlider* _apertureSlider;
	CEKSlider* _intensitySlider;
	unsigned long long _visibleContent;

}

@property (nonatomic,retain) CEKWheelScrubberView * filterScrubberView;              //@synthesize filterScrubberView=_filterScrubberView - In the implementation block
@property (nonatomic,retain) CEKApertureSlider * apertureSlider;                     //@synthesize apertureSlider=_apertureSlider - In the implementation block
@property (nonatomic,retain) CEKSlider * intensitySlider;                            //@synthesize intensitySlider=_intensitySlider - In the implementation block
@property (assign,nonatomic) unsigned long long visibleContent;                      //@synthesize visibleContent=_visibleContent - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)_layoutFilterScrubberView;
-(CEKApertureSlider *)apertureSlider;
-(CEKSlider *)intensitySlider;
-(CEKWheelScrubberView *)filterScrubberView;
-(void)setFilterScrubberView:(CEKWheelScrubberView *)arg1 ;
-(void)setApertureSlider:(CEKApertureSlider *)arg1 ;
-(void)setIntensitySlider:(CEKSlider *)arg1 ;
-(unsigned long long)visibleContent;
-(void)setVisibleContent:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibilityForUpdatedContent:(unsigned long long)arg1 contentView:(id)arg2 ;
-(void)setVisibleContent:(unsigned long long)arg1 ;
-(void)_updateVisibleViewAnimated:(BOOL)arg1 ;
-(void)_layoutPortraitApertureSlider;
-(void)_layoutSliderView:(id)arg1 ;
@end

