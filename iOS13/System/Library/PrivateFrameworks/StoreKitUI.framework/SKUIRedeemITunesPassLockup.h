/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class SKUIClientContext, SKUIITunesPassConfiguration, UILabel, UIView, UIImageView;

@interface SKUIRedeemITunesPassLockup : UIControl {

	SKUIClientContext* _clientContext;
	SKUIITunesPassConfiguration* _configuration;
	UILabel* _descriptionLabel;
	UIView* _horizontalSeparatorView;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2 ;
-(id)_attributedDescriptionString;
@end

