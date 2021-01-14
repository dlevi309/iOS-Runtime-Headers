/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContact *)defaultContactName;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
-(void)setDefaultContactName:(id)arg1;
-(CNContact *)defaultContactEmail;
-(NSDictionary *)defaultBillingAddresses;
-(void)setDefaultContactEmail:(id)arg1;
-(CNContact *)defaultContactPhone;
-(void)setDefaultContactPhone:(id)arg1;
-(CNContact *)defaultShippingAddress;
-(void)setDefaultShippingAddress:(id)arg1;
-(id)defaultBillingAddressForRemotePaymentInstrument:(id)arg1;
-(void)setDefaultBillingAddress:(id)arg1 forRemotePaymentInstrument:(id)arg2;

@end

