/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2 ;
-(id)_attributedDescriptionString;
@end

