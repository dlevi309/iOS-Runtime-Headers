/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

@class CNContact, NSDictionary;


@protocol PKPaymentOptionsProtocol <NSObject>
@property (nonatomic,retain) CNContact * defaultShippingAddress; 
@property (nonatomic,readonly) NSDictionary * defaultBillingAddresses; 
@property (nonatomic,retain) CNContact * defaultContactEmail; 
@property (nonatomic,retain) CNContact * defaultContactPhone; 
@property (nonatomic,retain) CNContact * defaultContactName; 
@required
-(id)defaultBillingAddressForPaymentPass:(id)arg1;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
-(CNContact *)defaultContactName;
-(void)setDefaultContactName:(id)arg1;
-(NSDictionary *)defaultBillingAddresses;
-(CNContact *)defaultContactEmail;
-(void)setDefaultContactEmail:(id)arg1;
-(CNContact *)defaultContactPhone;
-(void)setDefaultContactPhone:(id)arg1;
-(CNContact *)defaultShippingAddress;
-(void)setDefaultShippingAddress:(id)arg1;
-(id)defaultBillingAddressForRemotePaymentInstrument:(id)arg1;
-(void)setDefaultBillingAddress:(id)arg1 forRemotePaymentInstrument:(id)arg2;

@end

