/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSRequestController.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class NSString;

@interface TPSCallForwardingRequestController : TPSRequestController <CoreTelephonyClientSuppServicesDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4 ;
-(void)executeRequest:(id)arg1 ;
-(void)executeFetchForRequest:(id)arg1 ;
-(void)executeSetForRequest:(id)arg1 ;
-(void)respondWithSubscriptionContext:(id)arg1 value:(id)arg2 error:(id)arg3 ;
-(id)valueForNotificationData:(id)arg1 ;
@end

