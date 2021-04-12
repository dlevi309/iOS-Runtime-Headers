/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitleLabel:(NSString *)arg1 ;
-(NSString *)subtitleLabel;
-(id)initWithGiftConfirmLabelStyle:(long long)arg1 ;
-(long long)giftConfirmLabelStyle;
@end

