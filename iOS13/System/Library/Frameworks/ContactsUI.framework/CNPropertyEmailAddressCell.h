/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell {

	BOOL _VIP;

}

@property (assign,getter=isVIP,nonatomic) BOOL VIP;              //@synthesize VIP=_VIP - In the implementation block
-(BOOL)shouldPerformDefaultAction;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(void)updateValueWithPropertyItem:(id)arg1 ;
-(void)setVIP:(BOOL)arg1 ;
-(BOOL)isVIP;
@end

