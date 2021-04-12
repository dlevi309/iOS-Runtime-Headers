/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSRequestController.h>
#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>

@class NSString;

@interface TPSCallWaitingRequestController : TPSRequestController <CoreTelephonyClientSuppServicesDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4 ;
-(void)executeFetchForRequest:(id)arg1 ;
-(void)executeRequest:(id)arg1 ;
-(void)executeSetForRequest:(id)arg1 ;
-(void)respondWithSubscriptionContext:(id)arg1 enabled:(BOOL)arg2 error:(id)arg3 ;
@end

