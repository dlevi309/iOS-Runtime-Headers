/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class MailAccount, DeliveryAccount, NSDictionary;

@interface _MFAccountInformation : NSObject {

	MailAccount* _account;
	DeliveryAccount* _deliveryAccount;
	NSDictionary* _localizedNotes;

}

@property (nonatomic,retain) MailAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) DeliveryAccount * deliveryAccount;              //@synthesize deliveryAccount=_deliveryAccount - In the implementation block
@property (nonatomic,retain) NSDictionary * localizedNotes;                  //@synthesize localizedNotes=_localizedNotes - In the implementation block
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(DeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(DeliveryAccount *)arg1 ;
-(NSDictionary *)localizedNotes;
-(void)setLocalizedNotes:(NSDictionary *)arg1 ;
@end

