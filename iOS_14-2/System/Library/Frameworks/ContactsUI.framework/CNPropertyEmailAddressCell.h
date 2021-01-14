/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@interface CNPropertyEmailAddressCell : CNPropertySimpleTransportCell {

	BOOL _VIP;

}

@property (assign,getter=isVIP,nonatomic) BOOL VIP;              //@synthesize VIP=_VIP - In the implementation block
-(BOOL)isVIP;
-(void)setVIP:(BOOL)arg1 ;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(BOOL)shouldPerformDefaultAction;
-(void)updateValueWithPropertyItem:(id)arg1 ;
@end

