/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface HUCheckmarkAccessoryView : UIView {

	BOOL _checked;
	BOOL _disabled;
	UIImageView* _checkmarkImageView;

}

@property (nonatomic,retain) UIImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (assign,nonatomic) BOOL checked;                                  //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                 //@synthesize disabled=_disabled - In the implementation block
+(double)borderWidth;
+(id)grayBorderColor;
-(BOOL)disabled;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_updateColors;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
@end

