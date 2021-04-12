/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface ICTelephonyController : NSObject <CoreTelephonyClientDelegate> {

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
-(void)activeSubscriptionsDidChange;
-(BOOL)_ensureTelephonyHandlesAreReady;
-(void)phoneNumberChanged:(id)arg1 ;
-(NSString *)mobileSubscriberNetworkCode;
-(void)phoneNumberAvailable:(id)arg1 ;
-(void)_updatePhoneNumberAllowingDidChangeNotification:(BOOL)arg1 ;
-(id)_telephonyClient;
-(NSString *)phoneNumber;
-(BOOL)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id*)arg3 ;
-(NSString *)IMEI;
-(NSString *)mobileSubscriberCountryCode;
-(id)_init;
-(void)_handleActiveSubscriptionsDidChange;
-(id)_telephonySubscriptionContext;
-(void)dealloc;
-(NSString *)providerName;
@end

