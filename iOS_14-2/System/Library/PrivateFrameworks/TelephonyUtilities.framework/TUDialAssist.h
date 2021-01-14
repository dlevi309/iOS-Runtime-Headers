/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>

@class CoreTelephonyClient, NSString;

@interface TUDialAssist : NSObject <CoreTelephonyClientCarrierBundleDelegate> {

	int _dialAssistUserSettingsChangedToken;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) int dialAssistUserSettingsChangedToken;                 //@synthesize dialAssistUserSettingsChangedToken=_dialAssistUserSettingsChangedToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)carrierBundleChange:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(id)init;
-(void)operatorBundleChange:(id)arg1 ;
-(int)dialAssistUserSettingsChangedToken;
-(void)dealloc;
@end

