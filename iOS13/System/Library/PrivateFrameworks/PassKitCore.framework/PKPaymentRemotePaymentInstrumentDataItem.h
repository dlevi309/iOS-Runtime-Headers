/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)hasAssociatedPeerPaymentAccount;
-(PKPaymentApplication *)paymentApplication;
-(CNContact *)billingAddress;
-(BOOL)isValidWithError:(id*)arg1 ;
-(unsigned long long)peerPaymentAccountState;
-(PKRemoteDevice *)remoteDevice;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(BOOL)requiresBillingAddress;
-(id)peerPaymentAccountBalance;
@end

