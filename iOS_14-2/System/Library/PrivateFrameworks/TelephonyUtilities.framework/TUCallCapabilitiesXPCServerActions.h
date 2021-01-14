/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUCallCapabilitiesXPCServerActions <NSObject>
@required
-(oneway void)setVoLTECallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
-(oneway void)setThumperCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1;
-(oneway void)setWiFiCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)cancelPinRequestFromPrimaryDevice;
-(oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
-(oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
-(oneway void)requestPinFromPrimaryDevice;
-(oneway void)endEmergencyCallbackMode;

@end

