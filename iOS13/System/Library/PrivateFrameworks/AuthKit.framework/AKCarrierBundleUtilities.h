/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject;

@interface AKCarrierBundleUtilities : NSObject {

	CoreTelephonyClient* _telephonyClient;
	NSObject*<OS_dispatch_queue> _carrierUtilitiesQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)_formattedValueForPhoneNumber:(id)arg1 countryCode:(id)arg2 ;
-(id)phoneBundleInfoWithAdditionalInfo:(id)arg1 error:(id*)arg2 ;
@end

