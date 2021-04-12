/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisabled:(BOOL)arg1 ;
-(void)_updateColors;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)checked;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)disabled;
@end

