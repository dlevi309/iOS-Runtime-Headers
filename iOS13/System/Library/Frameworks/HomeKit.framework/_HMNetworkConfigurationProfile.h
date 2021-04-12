/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMNetworkConfigurationProfileDelegate;
@class NSArray, HMAccessoryNetworkAccessViolation;

@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile {

	BOOL _networkAccessRestricted;
	BOOL _supportsWiFiReconfiguration;
	long long _targetProtectionMode;
	long long _currentProtectionMode;
	NSArray* _allowedHosts;
	HMAccessoryNetworkAccessViolation* _accessViolation;
	long long _credentialType;
	id<_HMNetworkConfigurationProfileDelegate> _delegate;

}

@property (readonly) long long targetProtectionMode;                                                  //@synthesize targetProtectionMode=_targetProtectionMode - In the implementation block
@property (readonly) long long currentProtectionMode;                                                 //@synthesize currentProtectionMode=_currentProtectionMode - In the implementation block
@property (getter=isNetworkAccessRestricted,readonly) BOOL networkAccessRestricted;                   //@synthesize networkAccessRestricted=_networkAccessRestricted - In the implementation block
@property (readonly) NSArray * allowedHosts;                                                          //@synthesize allowedHosts=_allowedHosts - In the implementation block
@property (readonly) HMAccessoryNetworkAccessViolation * accessViolation;                             //@synthesize accessViolation=_accessViolation - In the implementation block
@property (readonly) BOOL supportsWiFiReconfiguration;                                                //@synthesize supportsWiFiReconfiguration=_supportsWiFiReconfiguration - In the implementation block
@property (readonly) long long credentialType;                                                        //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic,__weak) id<_HMNetworkConfigurationProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_HMNetworkConfigurationProfileDelegate>)delegate;
-(void)setDelegate:(id<_HMNetworkConfigurationProfileDelegate>)arg1 ;
-(long long)credentialType;
-(void)setCredentialType:(long long)arg1 ;
-(id)messageTargetUUID;
-(id)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(id)messageDestination;
-(void)_handleProtectionModeUpdated:(id)arg1 ;
-(void)_handleHostsUpdated:(id)arg1 ;
-(void)_handleAccessViolationUpdated:(id)arg1 ;
-(void)_handleWiFiReconfigurationUpdated:(id)arg1 ;
-(long long)currentProtectionMode;
-(BOOL)isNetworkAccessRestricted;
-(long long)targetProtectionMode;
-(void)setCurrentProtectionMode:(long long)arg1 ;
-(void)setTargetProtectionMode:(long long)arg1 ;
-(void)_notifyDelegateOfUpdatedProtectionMode;
-(void)setNetworkAccessRestricted:(BOOL)arg1 ;
-(void)_notifyDelegateOfNetworkAccessModeChanged;
-(NSArray *)allowedHosts;
-(void)setAllowedHosts:(NSArray *)arg1 ;
-(void)_notifyDelegateOfUpdatedAllowedHosts;
-(HMAccessoryNetworkAccessViolation *)accessViolation;
-(void)setAccessViolation:(HMAccessoryNetworkAccessViolation *)arg1 ;
-(void)_notifyDelegateOfUpdatedAccessViolation;
-(BOOL)supportsWiFiReconfiguration;
-(void)setSupportsWiFiReconfiguration:(BOOL)arg1 ;
-(void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
-(void)_notifyDelegateOfUpdatedWiFiCredentialType;
-(BOOL)__checkContextAndCompletionHandler:(/*^block*/id)arg1 ;
-(void)__sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(BOOL)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(BOOL)arg7 credentialType:(long long)arg8 ;
-(void)updateProtectionMode:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

