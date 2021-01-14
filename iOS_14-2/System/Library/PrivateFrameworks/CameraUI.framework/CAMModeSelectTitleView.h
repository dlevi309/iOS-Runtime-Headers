/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(UILabel *)_titleLabel;
@end

