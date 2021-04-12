/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CoreTelephonyClient, NSString;

@interface STKCarrierSubscriptionMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _subscriptionInfo;
	CoreTelephonyClient* _telephonyClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)subscriptionInfoDidChange;
-(void)carrierBundleChange:(id)arg1 ;
-(id)subscriptionInfoForSlot:(long long)arg1 ;
@end

