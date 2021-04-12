/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PKPaymentTransactionDetailHeaderView : UIView {

	UILabel* _amountLabel;
	UILabel* _subtitleLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	BOOL _isTemplateLayout;
	BOOL _inBridge;
	NSString* _amountText;
	NSString* _subtitleText;
	NSString* _secondarySubtitleText;
	NSString* _tertiarySubtitleText;

}

@property (assign,nonatomic) BOOL inBridge;                               //@synthesize inBridge=_inBridge - In the implementation block
@property (nonatomic,copy) NSString * amountText;                         //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                       //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSString * secondarySubtitleText;              //@synthesize secondarySubtitleText=_secondarySubtitleText - In the implementation block
@property (nonatomic,copy) NSString * tertiarySubtitleText;               //@synthesize tertiarySubtitleText=_tertiarySubtitleText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAmountText:(NSString *)arg1 ;
-(void)setSecondarySubtitleText:(NSString *)arg1 ;
-(void)setTertiarySubtitleText:(NSString *)arg1 ;
-(void)setInBridge:(BOOL)arg1 ;
-(NSString *)amountText;
-(NSString *)secondarySubtitleText;
-(NSString *)tertiarySubtitleText;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(BOOL)inBridge;
@end

