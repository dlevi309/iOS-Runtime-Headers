/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSliderView:(HUSimpleSliderControlView *)arg1 ;
-(void)prepareForReuse;
-(HUSimpleSliderControlView *)sliderView;
-(void)_updateSliderConstraints;
-(id)allControlViews;
-(NSArray *)sliderConstraints;
-(void)setSliderConstraints:(NSArray *)arg1 ;
@end

