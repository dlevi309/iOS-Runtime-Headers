/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface DBSCheckmarkView : UIView {

	BOOL _selected;
	UIImageView* __checkmarkImageView;
	UIImageView* __circleImageView;

}

@property (nonatomic,retain) UIImageView * _checkmarkImageView;              //@synthesize _checkmarkImageView=__checkmarkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * _circleImageView;                 //@synthesize _circleImageView=__circleImageView - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                //@synthesize selected=_selected - In the implementation block
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)_checkmarkImageView;
-(void)_updateViewState;
-(UIImageView *)_circleImageView;
-(void)_configureView;
-(void)set_checkmarkImageView:(UIImageView *)arg1 ;
-(void)set_circleImageView:(UIImageView *)arg1 ;
@end

