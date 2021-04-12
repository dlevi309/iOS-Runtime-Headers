/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UILabel, NSString;

@interface CAMModeSelectTitleView : UIView {

	UIColor* _textColor;
	UILabel* __titleLabel;

}

@property (nonatomic,readonly) UILabel * _titleLabel;              //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * text; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)_titleLabel;
-(UIColor *)textColor;
@end

