/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)_circleImageView;
-(UIImageView *)_checkmarkImageView;
-(void)_configureView;
-(void)_updateViewState;
-(void)set_checkmarkImageView:(UIImageView *)arg1 ;
-(void)set_circleImageView:(UIImageView *)arg1 ;
@end

