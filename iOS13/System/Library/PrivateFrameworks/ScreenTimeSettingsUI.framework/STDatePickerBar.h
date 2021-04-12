/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, UIImageView, UIImage;

@interface STDatePickerBar : UIView {

	UILabel* _dateLabel;
	UIButton* _leftArrowButton;
	UIButton* _rightArrowButton;
	UIImageView* _bottomBorderLine;

}

@property (readonly) UILabel * dateLabel;                         //@synthesize dateLabel=_dateLabel - In the implementation block
@property (readonly) UIButton * leftArrowButton;                  //@synthesize leftArrowButton=_leftArrowButton - In the implementation block
@property (readonly) UIButton * rightArrowButton;                 //@synthesize rightArrowButton=_rightArrowButton - In the implementation block
@property (readonly) UIImageView * bottomBorderLine;              //@synthesize bottomBorderLine=_bottomBorderLine - In the implementation block
@property (readonly) UIImage * horizontalLineImage; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)dateLabel;
-(UIButton *)rightArrowButton;
-(UIImage *)horizontalLineImage;
-(void)_stDatePickerBarCommonInit;
-(UIButton *)leftArrowButton;
-(UIImageView *)bottomBorderLine;
@end

