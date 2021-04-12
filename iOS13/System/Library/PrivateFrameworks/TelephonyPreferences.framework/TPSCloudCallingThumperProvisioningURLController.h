/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <TelephonyPreferences/TPSCloudCallingURLController.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@class NSString;

@interface TPSCloudCallingThumperProvisioningURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (nonatomic,readonly) BOOL shouldShowUpgradeToThumperButton; 
@property (getter=isThumperProvisioningInProcess,nonatomic,readonly) BOOL thumperProvisioningInProcess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(void)enableCapability;
-(void)webSheetCompletion;
-(BOOL)isCapabilityEnabled;
-(int)capabilityProvisioningStatus;
-(id)capabilityProvisioningURL;
-(BOOL)isCapabilityProvisioningURLInvalid;
-(id)capabilityProvisioningPostData;
-(BOOL)isThumperProvisioningInProcess;
-(id)requestTimeoutController;
-(BOOL)shouldShowEmergencyAddress;
-(BOOL)shouldShowUpgradeToThumperButton;
@end

