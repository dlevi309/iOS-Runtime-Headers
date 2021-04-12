/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/_UINavigationBarTitleView.h>

@class UILabel, UIButton;

@interface MFComposeActionCardTitleView : _UINavigationBarTitleView {

	UILabel* _titleLabel;
	UIButton* _closeButton;

}

@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
+(double)heightForTraitCollection:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIButton *)closeButton;
-(void)_updateHeightForCurrentTraits;
@end

