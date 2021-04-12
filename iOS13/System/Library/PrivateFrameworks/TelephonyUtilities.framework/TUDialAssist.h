/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)carrierBundleChange:(id)arg1 ;
-(void)operatorBundleChange:(id)arg1 ;
-(CoreTelephonyClient *)coreTelephonyClient;
-(int)dialAssistUserSettingsChangedToken;
@end

