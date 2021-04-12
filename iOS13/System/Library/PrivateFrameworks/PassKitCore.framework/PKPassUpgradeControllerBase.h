/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableDictionary, PKPaymentWebService;

@interface PKPassUpgradeControllerBase : NSObject {

	/*^block*/id _addPaymentPassToLibrary;
	os_unfair_lock_s _pass_upgrade_lock;
	NSMutableDictionary* _pendingPassUpgrades;
	PKPaymentWebService* _paymentWebService;

}

@property (nonatomic,retain) PKPaymentWebService * paymentWebService;              //@synthesize paymentWebService=_paymentWebService - In the implementation block
-(void)requestPassUpgrade:(id)arg1 pass:(id)arg2 diagnosticReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(PKPaymentWebService *)paymentWebService;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(id)initWithWebService:(id)arg1 addPaymentPassToLibrary:(/*^block*/id)arg2 ;
-(void)appletsDidUpdate;
-(void)downloadUpgradedPassForPassUniqueID:(id)arg1 atURL:(id)arg2 ;
-(void)completePassUpgradeForPassUniqueID:(id)arg1 withError:(id)arg2 ;
@end

