/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUControlPanelCell.h>

@class HUSimpleSliderControlView, NSArray;

@interface HUSliderControlCell : HUControlPanelCell {

	HUSimpleSliderControlView* _sliderView;
	NSArray* _sliderConstraints;

}

@property (nonatomic,copy) NSArray * sliderConstraints;                           //@synthesize sliderConstraints=_sliderConstraints - In the implementation block
@property (nonatomic,retain) HUSimpleSliderControlView * sliderView;              //@synthesize sliderView=_sliderView - In the implementation block
-(void)prepareForReuse;
-(void)setSliderView:(HUSimpleSliderControlView *)arg1 ;
-(HUSimpleSliderControlView *)sliderView;
-(void)_updateSliderConstraints;
-(id)allControlViews;
-(NSArray *)sliderConstraints;
-(void)setSliderConstraints:(NSArray *)arg1 ;
@end

