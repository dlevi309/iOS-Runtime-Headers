/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CoreTelephonyClient, NSString;

@interface STKCarrierSubscriptionMonitor : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _subscriptionInfo;
	NSMutableDictionary* _subscriptionContext;
	CoreTelephonyClient* _telephonyClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)subscriptionInfoDidChange;
-(void)carrierBundleChange:(id)arg1 ;
-(id)init;
-(id)subscriptionContextForSlot:(long long)arg1 ;
-(id)subscriptionInfoForSlot:(long long)arg1 ;
@end

