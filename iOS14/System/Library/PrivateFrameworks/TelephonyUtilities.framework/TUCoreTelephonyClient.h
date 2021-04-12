/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUTTYCoreTelephonyClient.h>
#import <libobjc.A.dylib/TUEmergencyCoreTelephonyClient.h>
#import <libobjc.A.dylib/TUCoreTelephonyClient.h>

@protocol TUCoreTelephonyClient <NSObject>
@end


@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSString;

@interface TUCoreTelephonyClient : NSObject <TUTTYCoreTelephonyClient, TUEmergencyCoreTelephonyClient, TUCoreTelephonyClient> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * client;                    //@synthesize client=_client - In the implementation block
+(Class)RTTTelephonyUtilitiesClass;
+(Class)RTTSettingsClass;
+(id)sharedRTTTelephonyUtilities;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id*)arg3 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscription:(id)arg1 error:(id*)arg2 ;
-(BOOL)inEmergencyMode;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3 ;
-(CoreTelephonyClient *)client;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isRTTSupportedForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYEnabledForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSupportedForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYHardwareAvailableForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYHardwareEnabledForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareEnabledForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYHardwareSupportedForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareAvailableForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareSupportedForSubscriptionUUID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)subscriptionForUUID:(id)arg1 ;
-(BOOL)isRTTSupportedForSubscription:(id)arg1 ;
-(BOOL)isTTYSoftwareEnabledForSubscription:(id)arg1 ;
-(BOOL)isTTYHardwareEnabledForSubscription:(id)arg1 ;
-(BOOL)isTTYEnabledForSubscription:(id)arg1 ;
-(BOOL)isTTYSupportedForSubscription:(id)arg1 ;
-(unsigned long long)preferredTransportMethodForSubscription:(id)arg1 ;
-(BOOL)isTTYHardwareAvailableForSubscription:(id)arg1 ;
-(BOOL)isTTYHardwareSupportedForSubscription:(id)arg1 ;
-(BOOL)isTTYSoftwareAvailableForSubscription:(id)arg1 ;
-(BOOL)isTTYSoftwareSupportedForSubscription:(id)arg1 ;
@end

