/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TUCallCapabilities : NSObject
+(id)debugDescription;
+(id)client;
+(void)removeDelegate:(id)arg1 ;
+(void)addDelegate:(id)arg1 queue:(id)arg2 ;
+(BOOL)isFaceTimeAudioAvailable;
+(BOOL)supportsFaceTimeAudioCalls;
+(BOOL)supportsTelephonyCalls;
+(BOOL)supportsSimultaneousVoiceAndData;
+(BOOL)isWiFiCallingCurrentlyAvailable;
+(BOOL)supportsPrimaryCalling;
+(BOOL)isThumperCallingCurrentlyAvailable;
+(BOOL)areRelayCallingFeaturesEnabled;
+(BOOL)canAttemptTelephonyCallsWithoutCellularConnection;
+(BOOL)supportsVoLTECalling;
+(BOOL)isVoLTECallingEnabled;
+(BOOL)supportsWiFiCalling;
+(BOOL)isWiFiCallingEnabled;
+(BOOL)isThumperCallingEnabled;
+(BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1 ;
+(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3 ;
+(void)requestPinFromPrimaryDevice;
+(void)cancelPinRequestFromPrimaryDevice;
+(BOOL)supportsThumperCalling;
+(BOOL)supportsThumperCallingOverCellularData;
+(id)thumperCallingCapabilityInfo;
+(id)wiFiCallingCapabilityInfo;
+(BOOL)isVoLTECallingCurrentlyAvailable;
+(BOOL)isThumperCallingAllowedForCurrentDevice;
+(BOOL)canAttemptEmergencyCallsWithoutCellularConnection;
+(BOOL)isCSCallingCurrentlyAvailable;
+(id)voLTECallingCapabilityInfo;
+(BOOL)isWiFiCallingRoamingEnabled;
+(BOOL)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
+(void)setVoLTECallingEnabled:(BOOL)arg1 ;
+(void)setWiFiCallingEnabled:(BOOL)arg1 ;
+(void)setWiFiCallingRoamingEnabled:(BOOL)arg1 ;
+(void)invalidateAndRefreshWiFiCallingProvisioningURL;
+(void)setThumperCallingEnabled:(BOOL)arg1 ;
+(void)invalidateAndRefreshThumperCallingProvisioningURL;
+(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 ;
+(void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)arg1 ;
+(BOOL)supportsDisplayingFaceTimeAudioCalls;
+(int)telephonyCallSupport;
+(int)faceTimeAudioCallSupport;
+(int)faceTimeVideoCallSupport;
+(id)senderIdentityCapabilities;
+(id)senderIdentityCapabilitiesWithUUID:(id)arg1 ;
+(BOOL)canAttemptTelephonyCallsWithoutCellularConnectionWithSenderIdentityCapabilities:(id)arg1 ;
+(BOOL)supportsBasebandCalling;
+(BOOL)supportsDisplayingTelephonyCalls;
+(BOOL)isDirectTelephonyCallingCurrentlyAvailable;
+(BOOL)supportsTelephonyRelayCalling;
+(BOOL)isDirectFaceTimeAudioCallingCurrentlyAvailable;
+(BOOL)supportsFaceTimeAudioRelayCalling;
+(BOOL)supportsDisplayingFaceTimeVideoCalls;
+(BOOL)isDirectFaceTimeVideoCallingCurrentlyAvailable;
+(BOOL)supportsFaceTimeVideoRelayCalling;
+(BOOL)isFaceTimeVideoAvailable;
+(BOOL)areCTCapabilitiesValid;
+(BOOL)accountsMatchForSecondaryCalling;
+(BOOL)accountsSupportSecondaryCalling;
+(id)cloudCallingDevices;
+(BOOL)supportsRelayCalling;
+(BOOL)isRelayCallingEnabled;
+(void)setRelayCallingEnabled:(BOOL)arg1 ;
+(BOOL)isRelayCallingEnabledForDeviceWithID:(id)arg1 ;
+(void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2 ;
+(id)outgoingRelayCallerID;
+(int)relayCallingAvailability;
+(BOOL)isEmergencyCallbackModeEnabled;
+(void)endEmergencyCallbackMode;
+(BOOL)isEmergencyCallbackPossible;
+(BOOL)supportsFaceTimeVideoCalls;
+(id)_senderIdentityCapabilitiesByUUID;
+(BOOL)supportsRelayingToOtherDevices;
+(void)initializeCachedValues;
+(BOOL)canAttemptEmergencyCallsWithoutCellularConnectionWithUUID:(id)arg1 ;
+(BOOL)supportsHostingTelephonyCalls;
+(BOOL)supportsHostingFaceTimeAudioCalls;
+(BOOL)supportsHostingFaceTimeVideoCalls;
+(BOOL)supportsWiFiEmergencyCalling;
+(void)_sendNotificationsAndCallbacksAfterRunningBlock:(/*^block*/id)arg1 ;
@end

