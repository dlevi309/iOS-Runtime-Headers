/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

