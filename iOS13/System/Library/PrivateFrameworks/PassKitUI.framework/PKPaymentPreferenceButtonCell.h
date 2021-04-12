/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentPreferenceCell.h>

@class UIButton, NSString;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {

	UIButton* _button;
	/*^block*/id _handler;
	NSString* _buttonTitle;

}

@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;              //@synthesize buttonTitle=_buttonTitle - In the implementation block
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSString *)buttonTitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(id)pk_childrenForAppearance;
@end

