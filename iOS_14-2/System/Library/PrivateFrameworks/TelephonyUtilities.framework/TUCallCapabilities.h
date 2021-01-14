/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TUCallCapabilities : NSObject
+(void)addDelegate:(id)arg1 queue:(id)arg2 ;
+(BOOL)isVoLTECallingCurrentlyAvailable;
+(BOOL)isThumperCallingAllowedForCurrentDevice;
+(id)outgoingRelayCallerID;
+(void)removeDelegate:(id)arg1 ;
+(int)faceTimeAudioCallSupport;
+(id)client;
+(BOOL)accountsSupportSecondaryCalling;
+(BOOL)supportsTelephonyRelayCalling;
+(BOOL)isThumperCallingEnabled;
+(BOOL)isDirectFaceTimeVideoCallingCurrentlyAvailable;
+(BOOL)canAttemptEmergencyCallsWithoutCellularConnection;
+(BOOL)supportsRelayCalling;
+(BOOL)supportsVoLTECalling;
+(int)relayCallingAvailability;
+(BOOL)isThumperCallingCurrentlyAvailable;
+(BOOL)supportsHostingTelephonyCalls;
+(BOOL)supportsFaceTimeVideoRelayCalling;
+(void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2 ;
+(BOOL)isFaceTimeVideoAvailable;
+(id)cloudCallingDevices;
+(BOOL)supportsFaceTimeVideoCalls;
+(BOOL)supportsWiFiEmergencyCalling;
+(BOOL)isDirectTelephonyCallingCurrentlyAvailable;
+(id)senderIdentityCapabilitiesWithUUID:(id)arg1 ;
+(BOOL)supportsThumperCalling;
+(id)debugDescription;
+(id)wiFiCallingCapabilityInfo;
+(BOOL)isEmergencyCallbackPossible;
+(void)setThumperCallingEnabled:(BOOL)arg1 ;
+(BOOL)isWiFiCallingRoamingEnabled;
+(BOOL)isVoLTECallingEnabled;
+(BOOL)accountsMatchForSecondaryCalling;
+(void)initializeCachedValues;
+(id)_senderIdentityCapabilitiesByUUID;
+(BOOL)supportsBasebandCalling;
+(BOOL)canAttemptEmergencyCallsWithoutCellularConnectionWithUUID:(id)arg1 ;
+(BOOL)isRelayCallingEnabledForDeviceWithID:(id)arg1 ;
+(void)_sendNotificationsAndCallbacksAfterRunningBlock:(/*^block*/id)arg1 ;
+(BOOL)supportsPrimaryCalling;
+(void)setRelayCallingEnabled:(BOOL)arg1 ;
+(void)setWiFiCallingEnabled:(BOOL)arg1 ;
+(id)thumperCallingCapabilityInfo;
+(BOOL)areCTCapabilitiesValid;
+(BOOL)isCSCallingCurrentlyAvailable;
+(BOOL)supportsFaceTimeAudioRelayCalling;
+(BOOL)supportsThumperCallingOverCellularData;
+(BOOL)canAttemptTelephonyCallsWithoutCellularConnection;
+(BOOL)areRelayCallingFeaturesEnabled;
+(BOOL)supportsHostingFaceTimeVideoCalls;
+(id)voLTECallingCapabilityInfo;
+(void)cancelPinRequestFromPrimaryDevice;
+(BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1 ;
+(void)setWiFiCallingRoamingEnabled:(BOOL)arg1 ;
+(void)setVoLTECallingEnabled:(BOOL)arg1 ;
+(BOOL)supportsWiFiCalling;
+(BOOL)supportsTelephonyCalls;
+(BOOL)isDirectFaceTimeAudioCallingCurrentlyAvailable;
+(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 forSenderIdentityWithUUID:(id)arg3 ;
+(BOOL)supportsFaceTimeAudioCalls;
+(BOOL)isEmergencyCallbackModeEnabled;
+(BOOL)supportsHostingFaceTimeAudioCalls;
+(void)invalidateAndRefreshWiFiCallingProvisioningURL;
+(BOOL)supportsDisplayingTelephonyCalls;
+(BOOL)isWiFiCallingCurrentlyAvailable;
+(BOOL)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
+(BOOL)canAttemptTelephonyCallsWithoutCellularConnectionWithSenderIdentityCapabilities:(id)arg1 ;
+(BOOL)supportsSimultaneousVoiceAndData;
+(BOOL)isRelayCallingEnabled;
+(BOOL)supportsRelayingToOtherDevices;
+(int)faceTimeVideoCallSupport;
+(void)requestPinFromPrimaryDevice;
+(BOOL)supportsDisplayingFaceTimeVideoCalls;
+(BOOL)isWiFiCallingEnabled;
+(void)invalidateAndRefreshThumperCallingProvisioningURL;
+(void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)arg1 ;
+(BOOL)supportsDisplayingFaceTimeAudioCalls;
+(BOOL)isFaceTimeAudioAvailable;
+(void)endEmergencyCallbackMode;
+(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 ;
+(id)senderIdentityCapabilities;
+(int)telephonyCallSupport;
@end

