/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/_HMNetworkConfigurationProfileDelegate.h>

@protocol HMNetworkConfigurationProfileDelegate;
@class NSArray, HMAccessoryNetworkAccessViolation, NSString;

@interface HMNetworkConfigurationProfile : HMAccessoryProfile <_HMNetworkConfigurationProfileDelegate> {

	id<HMNetworkConfigurationProfileDelegate> _delegate;

}

@property (readonly) long long targetProtectionMode; 
@property (readonly) long long currentProtectionMode; 
@property (readonly) NSArray * allowedHosts; 
@property (readonly) HMAccessoryNetworkAccessViolation * accessViolation; 
@property (readonly) BOOL supportsWiFiReconfiguration; 
@property (readonly) long long credentialType; 
@property (assign,nonatomic,__weak) id<HMNetworkConfigurationProfileDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (getter=isNetworkAccessRestricted,nonatomic,readonly) BOOL networkAccessRestricted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMNetworkConfigurationProfileDelegate>)delegate;
-(void)setDelegate:(id<HMNetworkConfigurationProfileDelegate>)arg1 ;
-(long long)credentialType;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(long long)currentProtectionMode;
-(BOOL)isNetworkAccessRestricted;
-(long long)targetProtectionMode;
-(NSArray *)allowedHosts;
-(HMAccessoryNetworkAccessViolation *)accessViolation;
-(BOOL)supportsWiFiReconfiguration;
-(void)networkConfigurationProfileDidUpdateProtectionMode:(id)arg1 ;
-(void)networkConfigurationProfileDidUpdateNetworkAccessMode:(id)arg1 ;
-(void)networkConfigurationProfileDidUpdateAllowedHosts:(id)arg1 ;
-(void)networkConfigurationProfileDidUpdateAccessViolation:(id)arg1 ;
-(void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(id)arg1 ;
-(void)networkConfigurationProfileDidUpdateWiFiCredentialType:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(BOOL)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(BOOL)arg7 credentialType:(long long)arg8 ;
-(void)updateProtectionMode:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

