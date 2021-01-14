/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPassbookSettingsDataSource.h>

@class PKPassLibraryDefaultDataProvider, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults, PKPassbookPeerPaymentSettingsDefaultBehavior, NSString;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {

	PKPassLibraryDefaultDataProvider* _passLibraryDataProvider;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	PKPaymentOptionsDefaults* _options;
	PKPassbookPeerPaymentSettingsDefaultBehavior* _peerPaymentDefaultBehavior;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)deviceName;
-(id)init;
-(id)optionsDelegate;
-(id)paymentDataProvider;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(BOOL)secureElementIsProductionSigned;
-(id)setupDelegate;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)hasFelicaSecureElement;
-(BOOL)deviceSupportsInAppPayments;
-(id)passLibraryDataProvider;
-(id)secureElementID;
-(BOOL)supportsCredentialType:(long long)arg1 ;
-(void)dealloc;
@end

