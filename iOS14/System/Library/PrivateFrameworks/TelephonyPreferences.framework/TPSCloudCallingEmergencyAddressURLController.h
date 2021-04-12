/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSCloudCallingURLController.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@class NSString;

@interface TPSCloudCallingEmergencyAddressURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)enableCapability;
-(void)webSheetCompletion;
-(BOOL)isCapabilityEnabled;
-(int)capabilityProvisioningStatus;
-(id)capabilityProvisioningURL;
-(BOOL)isCapabilityProvisioningURLInvalid;
-(id)capabilityProvisioningPostData;
@end

