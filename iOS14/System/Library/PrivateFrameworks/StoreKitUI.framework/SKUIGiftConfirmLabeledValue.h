/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIGiftDashView, UILabel, NSString;

@interface SKUIGiftConfirmLabeledValue : UIView {

	SKUIGiftDashView* _dashView;
	UILabel* _labelLabel;
	long long _style;
	UILabel* _valueLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,readonly) long long giftConfirmLabelStyle;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * subtitleLabel; 
@property (nonatomic,copy) NSString * value; 
-(void)setSubtitleLabel:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)subtitleLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(id)initWithGiftConfirmLabelStyle:(long long)arg1 ;
-(long long)giftConfirmLabelStyle;
@end

