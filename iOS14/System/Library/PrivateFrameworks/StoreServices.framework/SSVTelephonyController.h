/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)_hasRequiredTelephonyEntitlement;
+(id)sharedController;
-(NSString *)registrationStatus;
-(void)activeSubscriptionsDidChange;
-(BOOL)_ensureTelephonyHandlesAreReady;
-(void)phoneNumberChanged:(id)arg1 ;
-(NSString *)mobileSubscriberNetworkCode;
-(NSString *)operatorName;
-(void)phoneNumberAvailable:(id)arg1 ;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2 ;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(id)_telephonyClient;
-(void)_updatePhoneNumber;
-(void)_updateOperatorName;
-(id)_registrationStatus;
-(id)_operatorName;
-(NSString *)phoneNumber;
-(id)_phoneNumber;
-(NSString *)IMEI;
-(NSString *)mobileSubscriberCountryCode;
-(id)_init;
-(BOOL)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 countryCode:(id)arg3 error:(id*)arg4 ;
-(void)_updateRegistrationStatus;
-(id)_telephonySubscriptionContext;
-(void)dealloc;
-(NSString *)providerName;
@end

