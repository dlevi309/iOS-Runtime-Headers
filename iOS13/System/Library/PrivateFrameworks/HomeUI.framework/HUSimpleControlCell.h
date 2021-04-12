/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUControlPanelCell.h>

@protocol HUControlView;
@class UIView, NSArray;

@interface HUSimpleControlCell : HUControlPanelCell {

	UIView*<HUControlView> _controlView;
	NSArray* _controlViewConstraints;

}

@property (nonatomic,copy) NSArray * controlViewConstraints;                  //@synthesize controlViewConstraints=_controlViewConstraints - In the implementation block
@property (nonatomic,retain) UIView*<HUControlView> controlView;              //@synthesize controlView=_controlView - In the implementation block
-(void)prepareForReuse;
-(UIView*<HUControlView>)controlView;
-(void)setControlView:(UIView*<HUControlView>)arg1 ;
-(void)_updateSliderConstraints;
-(NSArray *)controlViewConstraints;
-(void)setControlViewConstraints:(NSArray *)arg1 ;
-(id)allControlViews;
@end

