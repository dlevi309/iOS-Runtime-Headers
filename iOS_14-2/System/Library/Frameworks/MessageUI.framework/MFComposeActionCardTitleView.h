/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)_updateHeightForCurrentTraits;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIButton *)closeButton;
@end

