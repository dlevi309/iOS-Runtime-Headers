/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)buttonTitle;
-(void)buttonTapped:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setButtonTitle:(NSString *)arg1 ;
-(id)handler;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)dealloc;
@end

