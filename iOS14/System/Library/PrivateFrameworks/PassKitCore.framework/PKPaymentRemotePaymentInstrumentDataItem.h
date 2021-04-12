/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKRemoteDevice, PKRemotePaymentInstrument, PKPaymentApplication, CNContact;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKRemoteDevice * remoteDevice; 
@property (nonatomic,readonly) PKRemotePaymentInstrument * remotePaymentInstrument; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) BOOL requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
+(long long)dataType;
-(id)errors;
-(PKPaymentApplication *)paymentApplication;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(CNContact *)billingAddress;
-(BOOL)isValidWithError:(id*)arg1 ;
-(unsigned long long)peerPaymentAccountState;
-(PKRemoteDevice *)remoteDevice;
-(id)paymentContactFormatErrors;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(BOOL)requiresBillingAddress;
-(id)peerPaymentAccountBalance;
@end

