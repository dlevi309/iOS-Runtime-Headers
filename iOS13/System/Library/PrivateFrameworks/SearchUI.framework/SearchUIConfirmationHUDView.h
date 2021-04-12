/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <UIKitCore/UIView.h>

@class UIVisualEffectView, SearchUICheckView, UILabel;

@interface SearchUIConfirmationHUDView : UIView {

	UIVisualEffectView* _effectView;
	SearchUICheckView* _checkView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) SearchUICheckView * checkView;                //@synthesize checkView=_checkView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(UIVisualEffectView *)effectView;
-(UILabel *)textLabel;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setCheckView:(SearchUICheckView *)arg1 ;
-(SearchUICheckView *)checkView;
-(void)animateCheckmark;
@end

