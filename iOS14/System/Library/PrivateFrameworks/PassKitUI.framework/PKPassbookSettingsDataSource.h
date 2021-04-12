/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassbookSettingsDataSource <NSObject>
@optional
-(id)deviceName;
-(BOOL)hasFelicaSecureElement;
-(BOOL)supportsAddingPaymentPass:(id)arg1;
-(BOOL)supportsCredentialType:(long long)arg1;

@required
-(id)optionsDelegate;
-(id)paymentDataProvider;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(BOOL)secureElementIsProductionSigned;
-(id)setupDelegate;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)deviceSupportsInAppPayments;
-(id)passLibraryDataProvider;
-(id)secureElementID;

@end

