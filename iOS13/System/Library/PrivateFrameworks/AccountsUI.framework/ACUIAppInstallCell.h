/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <Preferences/PSTableCell.h>

@class UILabel, UIImageView, SKUIItemOfferButton;

@interface ACUIAppInstallCell : PSTableCell {

	UILabel* _nameLabel;
	UILabel* _publisherLabel;
	UIImageView* _iconView;
	SKUIItemOfferButton* _installButton;
	int _installState;

}

@property (assign,nonatomic) int installState;              //@synthesize installState=_installState - In the implementation block
+(id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setInstallState:(int)arg1 ;
-(int)installState;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)_createLabelForAppName:(id)arg1 ;
-(id)_createLabelForPublisher:(id)arg1 ;
-(id)_createInstallButton;
-(void)_updateSubviewsWithInstallState:(int)arg1 ;
-(void)_updateInstallButtonWithState:(int)arg1 ;
@end

