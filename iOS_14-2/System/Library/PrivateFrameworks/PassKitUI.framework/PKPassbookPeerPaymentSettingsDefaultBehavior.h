/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPassbookPeerPaymentSettingsDataSource.h>
#import <libobjc.A.dylib/PKPassbookPeerPaymentSettingsDelegate.h>

@class PKPaymentWebService, PKPeerPaymentWebService, NSString;

@interface PKPassbookPeerPaymentSettingsDefaultBehavior : NSObject <PKPassbookPeerPaymentSettingsDataSource, PKPassbookPeerPaymentSettingsDelegate> {

	PKPaymentWebService* _paymentWebService;
	PKPeerPaymentWebService* _peerPaymentWebService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)peerPaymentWebService;
-(void)peerPaymentRegistrationStatusHasChanged:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
-(void)_unregisterForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
@end

