/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentPassActionWidgetView;

@interface PKPassDetailButtonsCell : PKTableViewCell {

	PKPaymentPassActionWidgetView* _widgetView;

}
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 widgetViewStyle:(unsigned long long)arg2 ;
-(void)setCurrentUser:(id)arg1 ;
-(void)setPeerPaymentAccount:(id)arg1 ;
-(void)setPaymentPass:(id)arg1 ;
@end

