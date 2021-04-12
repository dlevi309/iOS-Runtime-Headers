/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUCallCapabilitiesXPCServerActions <NSObject>
@required
-(oneway void)setVoLTECallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)setWiFiCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
-(oneway void)setThumperCallingEnabled:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(id)arg1;
-(oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3;
-(oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 forSenderIdentityWithUUID:(id)arg2;
-(oneway void)requestPinFromPrimaryDevice;
-(oneway void)cancelPinRequestFromPrimaryDevice;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
-(oneway void)endEmergencyCallbackMode;

@end

