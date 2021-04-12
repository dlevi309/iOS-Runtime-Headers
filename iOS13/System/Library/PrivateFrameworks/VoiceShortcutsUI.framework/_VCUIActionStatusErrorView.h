/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIView;

@interface _VCUIActionStatusErrorView : UIView {

	UILabel* _errorLabel;
	UIImageView* _errorIconView;
	UIView* _errorIconBackgroundView;

}

@property (nonatomic,retain) UILabel * errorLabel;                          //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) UIImageView * errorIconView;                   //@synthesize errorIconView=_errorIconView - In the implementation block
@property (nonatomic,retain) UIView * errorIconBackgroundView;              //@synthesize errorIconBackgroundView=_errorIconBackgroundView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(UILabel *)errorLabel;
-(void)_setUpViews;
-(UIImageView *)errorIconView;
-(void)setErrorIconView:(UIImageView *)arg1 ;
-(UIView *)errorIconBackgroundView;
-(void)setErrorIconBackgroundView:(UIView *)arg1 ;
@end

