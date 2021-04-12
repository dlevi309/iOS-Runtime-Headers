/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, PKUsageNotificationClient;

@interface RTWalletManager : RTService {

	RTDefaultsManager* _defaultsManager;
	double _maximumTransactionDistance;
	PKUsageNotificationClient* _passKitClient;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (assign,nonatomic) double maximumTransactionDistance;                      //@synthesize maximumTransactionDistance=_maximumTransactionDistance - In the implementation block
@property (nonatomic,retain) PKUsageNotificationClient * passKitClient;              //@synthesize passKitClient=_passKitClient - In the implementation block
+(long long)passUseSourceFromUsageNotificationSource:(long long)arg1 ;
-(id)init;
-(void)_setup;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)_shutdown;
-(RTDefaultsManager *)defaultsManager;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)setMaximumTransactionDistance:(double)arg1 ;
-(void)updateDoubleForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_unregisterPassUseCallbacks;
-(void)_unregisterPaymentUseCallbacks;
-(void)setPassKitClient:(PKUsageNotificationClient *)arg1 ;
-(void)_registerPassUseCallbacks;
-(void)_registerPaymentUseCallbacks;
-(PKUsageNotificationClient *)passKitClient;
-(void)passUsedWithTypeIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
-(void)paymentMadeWithIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(void)_passUsedWithTypeIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
-(void)_paymentMadeWithIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(double)maximumTransactionDistance;
@end

