/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface ICTelephonyController : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _telephonyCallbackQueue;
	NSString* _phoneNumber;
	CoreTelephonyClient* _telephonyClient;
	CTXPCServiceSubscriptionContext* _telephonySubscriptionContext;

}

@property (nonatomic,copy,readonly) NSString * phoneNumber; 
@property (nonatomic,copy,readonly) NSString * providerName; 
@property (nonatomic,copy,readonly) NSString * mobileSubscriberCountryCode; 
@property (nonatomic,copy,readonly) NSString * mobileSubscriberNetworkCode; 
@property (nonatomic,copy,readonly) NSString * IMEI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)dealloc;
-(id)_init;
-(NSString *)phoneNumber;
-(NSString *)IMEI;
-(void)activeSubscriptionsDidChange;
-(void)phoneNumberAvailable:(id)arg1 ;
-(void)phoneNumberChanged:(id)arg1 ;
-(id)_telephonyClient;
-(NSString *)providerName;
-(BOOL)_ensureTelephonyHandlesAreReady;
-(id)_telephonySubscriptionContext;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
-(BOOL)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id*)arg3 ;
-(void)_updatePhoneNumberAllowingDidChangeNotification:(BOOL)arg1 ;
-(void)_handleActiveSubscriptionsDidChange;
@end

