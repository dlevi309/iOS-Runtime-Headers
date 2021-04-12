/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIVisualEffectView *)effectView;
-(id)init;
-(void)setCheckView:(SearchUICheckView *)arg1 ;
-(SearchUICheckView *)checkView;
-(void)animateCheckmark;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(UILabel *)textLabel;
@end

