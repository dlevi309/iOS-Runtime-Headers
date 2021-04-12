/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface SSVTelephonyController : NSObject <CoreTelephonyClientSuppServicesDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _telephonyCallbackQueue;
	BOOL _hasTelephonyCapability;
	NSString* _phoneNumber;
	NSString* _operatorName;
	NSString* _registrationStatus;
	CoreTelephonyClient* _telephonyClient;
	CTXPCServiceSubscriptionContext* _telephonySubscriptionContext;

}

@property (nonatomic,copy,readonly) NSString * phoneNumber; 
@property (nonatomic,copy,readonly) NSString * operatorName; 
@property (nonatomic,copy,readonly) NSString * providerName; 
@property (nonatomic,copy,readonly) NSString * mobileSubscriberCountryCode; 
@property (nonatomic,copy,readonly) NSString * mobileSubscriberNetworkCode; 
@property (nonatomic,copy,readonly) NSString * registrationStatus; 
@property (nonatomic,copy,readonly) NSString * IMEI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(BOOL)_hasRequiredTelephonyEntitlement;
-(void)dealloc;
-(id)_init;
-(NSString *)phoneNumber;
-(id)_phoneNumber;
-(NSString *)IMEI;
-(void)activeSubscriptionsDidChange;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2 ;
-(void)phoneNumberAvailable:(id)arg1 ;
-(void)phoneNumberChanged:(id)arg1 ;
-(id)_telephonyClient;
-(NSString *)providerName;
-(NSString *)registrationStatus;
-(id)_registrationStatus;
-(BOOL)_ensureTelephonyHandlesAreReady;
-(id)_operatorName;
-(void)_updateRegistrationStatus;
-(void)_updateOperatorName;
-(void)_updatePhoneNumber;
-(id)_telephonySubscriptionContext;
-(NSString *)operatorName;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
-(BOOL)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 countryCode:(id)arg3 error:(id*)arg4 ;
@end

