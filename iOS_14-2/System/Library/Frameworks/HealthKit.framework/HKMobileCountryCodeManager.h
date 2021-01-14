/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class CoreTelephonyClient, RadiosPreferences;

@interface HKMobileCountryCodeManager : NSObject {

	CoreTelephonyClient* _coreTelephonyClient;
	CTServerConnectionRef _coreTelephonyServerConnection;
	RadiosPreferences* _radiosPreferences;

}
-(id)init;
-(void)currentMobileCountryCodeFromCellularWithCompletion:(/*^block*/id)arg1 ;
-(id)_copyISOForMCC:(id)arg1 error:(id*)arg2 ;
-(id)_resolveMobileCountryCodeOverridesWithError:(id*)arg1 ;
-(void)fetchMobileCountryCodeFromCellularWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isLocationAvailableWithError:(id*)arg1 ;
-(id)_overriddenMobileCountryCode;
-(id)_wrapperWithMobileCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)_overriddenISOMobileCountryCode;
-(id)mobileCountryCodeFromCellularWithError:(id*)arg1 ;
@end

