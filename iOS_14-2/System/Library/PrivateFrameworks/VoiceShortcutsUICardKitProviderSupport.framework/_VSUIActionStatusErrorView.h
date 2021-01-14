/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUICardKitProviderSupport.framework/VoiceShortcutsUICardKitProviderSupport
*/

#import <VoiceShortcutsUICardKitProviderSupport/VoiceShortcutsUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIView;

@interface _VSUIActionStatusErrorView : UIView {

	UILabel* _errorLabel;
	UIImageView* _errorIconView;
	UIView* _errorIconBackgroundView;

}

@property (nonatomic,retain) UILabel * errorLabel;                          //@synthesize errorLabel=_errorLabel - In the implementation block
@property (nonatomic,retain) UIImageView * errorIconView;                   //@synthesize errorIconView=_errorIconView - In the implementation block
@property (nonatomic,retain) UIView * errorIconBackgroundView;              //@synthesize errorIconBackgroundView=_errorIconBackgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setUpViews;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
-(void)setErrorIconBackgroundView:(UIView *)arg1 ;
-(void)setErrorIconView:(UIImageView *)arg1 ;
-(UIImageView *)errorIconView;
-(UIView *)errorIconBackgroundView;
@end

