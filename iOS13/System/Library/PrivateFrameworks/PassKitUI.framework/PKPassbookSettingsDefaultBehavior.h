/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)deviceName;
-(BOOL)supportsCredentialType:(long long)arg1 ;
-(id)secureElementID;
-(BOOL)secureElementIsProductionSigned;
-(id)setupDelegate;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(id)optionsDelegate;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)hasFelicaSecureElement;
-(BOOL)deviceSupportsInAppPayments;
@end

