/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSUUID, NSString, TUSenderIdentityCapabilitiesState, TUCallCapabilitiesXPCClient, TUCTCapabilityInfo, NSURL, NSData;

@interface TUSenderIdentityCapabilities : NSObject {

	NSUUID* _senderIdentityUUID;
	NSString* _thumperCallingLocalDeviceID;
	TUSenderIdentityCapabilitiesState* _state;
	TUCallCapabilitiesXPCClient* _client;

}

@property (nonatomic,copy,readonly) TUSenderIdentityCapabilitiesState * state;                                                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) TUCallCapabilitiesXPCClient * client;                                                                                               //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * voLTECallingCapabilityInfo; 
@property (nonatomic,readonly) TUCTCapabilityInfo * wiFiCallingCapabilityInfo; 
@property (nonatomic,readonly) TUCTCapabilityInfo * thumperCallingCapabilityInfo; 
@property (nonatomic,copy,readonly) NSUUID * senderIdentityUUID;                                                                                                   //@synthesize senderIdentityUUID=_senderIdentityUUID - In the implementation block
@property (nonatomic,readonly) BOOL supportsSimultaneousVoiceAndData; 
@property (nonatomic,readonly) BOOL canAttemptTelephonyCallsWithoutCellularConnection; 
@property (nonatomic,readonly) BOOL canAttemptEmergencyCallsWithoutCellularConnection; 
@property (getter=isCSCallingCurrentlyAvailable,nonatomic,readonly) BOOL csCallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsVoLTECalling; 
@property (getter=isVoLTECallingEnabled,nonatomic,readonly) BOOL voLTECallingEnabled; 
@property (getter=isVoLTECallingCurrentlyAvailable,nonatomic,readonly) BOOL voLTECallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsWiFiCalling; 
@property (getter=isWiFiCallingEnabled,nonatomic,readonly) BOOL wiFiCallingEnabled; 
@property (nonatomic,readonly) BOOL supportsWiFiCallingRoaming; 
@property (getter=isWiFiCallingRoamingEnabled,nonatomic,readonly) BOOL wiFiCallingRoamingEnabled; 
@property (getter=isWiFiCallingCurrentlyAvailable,nonatomic,readonly) BOOL wiFiCallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsEmergencyWiFiCalling; 
@property (getter=isEmergencyWiFiCallingCurrentlyAvailable,nonatomic,readonly) BOOL emergencyWiFiCallingCurrentlyAvailable; 
@property (nonatomic,readonly) int wiFiCallingProvisioningStatus; 
@property (nonatomic,copy,readonly) NSURL * wiFiCallingProvisioningURL; 
@property (getter=isWiFiCallingProvisioningURLInvalid,nonatomic,readonly) BOOL wiFiCallingProvisioningURLInvalid; 
@property (nonatomic,copy,readonly) NSData * wiFiCallingProvisioningPostData; 
@property (nonatomic,readonly) BOOL supportsThumperCalling; 
@property (getter=isThumperCallingAllowedForCurrentDevice,nonatomic,readonly) BOOL thumperCallingAllowedForCurrentDevice; 
@property (getter=isThumperCallingEnabled,nonatomic,readonly) BOOL thumperCallingEnabled; 
@property (getter=isThumperCallingCurrentlyAvailable,nonatomic,readonly) BOOL thumperCallingCurrentlyAvailable; 
@property (nonatomic,readonly) BOOL supportsThumperCallingOverCellularData; 
@property (nonatomic,copy) NSString * thumperCallingLocalDeviceID;                                                                                                 //@synthesize thumperCallingLocalDeviceID=_thumperCallingLocalDeviceID - In the implementation block
@property (nonatomic,readonly) int thumperCallingProvisioningStatus; 
@property (nonatomic,copy,readonly) NSURL * thumperCallingProvisioningURL; 
@property (getter=isThumperCallingProvisioningURLInvalid,nonatomic,readonly) BOOL thumperCallingProvisioningURLInvalid; 
@property (nonatomic,copy,readonly) NSData * thumperCallingProvisioningPostData; 
@property (getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice,nonatomic,readonly) BOOL thumperCallingAllowedOnDefaultPairedSecondaryDevice; 
-(BOOL)isVoLTECallingCurrentlyAvailable;
-(BOOL)isThumperCallingAllowedForCurrentDevice;
-(TUCallCapabilitiesXPCClient *)client;
-(BOOL)isThumperCallingEnabled;
-(BOOL)isEmergencyWiFiCallingCurrentlyAvailable;
-(BOOL)canAttemptEmergencyCallsWithoutCellularConnection;
-(BOOL)supportsVoLTECalling;
-(NSData *)wiFiCallingProvisioningPostData;
-(NSURL *)wiFiCallingProvisioningURL;
-(BOOL)isThumperCallingCurrentlyAvailable;
-(BOOL)supportsThumperCalling;
-(id)debugDescription;
-(TUCTCapabilityInfo *)wiFiCallingCapabilityInfo;
-(void)setThumperCallingEnabled:(BOOL)arg1 ;
-(void)requestPinFromPrimaryDeviceForThumperCalling;
-(BOOL)isWiFiCallingRoamingEnabled;
-(void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)arg1 ;
-(BOOL)isVoLTECallingEnabled;
-(BOOL)isThumperCallingProvisioningURLInvalid;
-(BOOL)supportsWiFiCallingRoaming;
-(BOOL)isWiFiCallingProvisioningURLInvalid;
-(void)setWiFiCallingEnabled:(BOOL)arg1 ;
-(TUCTCapabilityInfo *)thumperCallingCapabilityInfo;
-(BOOL)isCSCallingCurrentlyAvailable;
-(BOOL)supportsThumperCallingOverCellularData;
-(BOOL)canAttemptTelephonyCallsWithoutCellularConnection;
-(BOOL)supportsEmergencyWiFiCalling;
-(TUCTCapabilityInfo *)voLTECallingCapabilityInfo;
-(BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)arg1 ;
-(void)setWiFiCallingRoamingEnabled:(BOOL)arg1 ;
-(NSUUID *)senderIdentityUUID;
-(void)setVoLTECallingEnabled:(BOOL)arg1 ;
-(TUSenderIdentityCapabilitiesState *)state;
-(BOOL)supportsWiFiCalling;
-(int)wiFiCallingProvisioningStatus;
-(int)thumperCallingProvisioningStatus;
-(void)invalidateAndRefreshWiFiCallingProvisioningURL;
-(BOOL)isWiFiCallingCurrentlyAvailable;
-(BOOL)isThumperCallingAllowedOnDefaultPairedSecondaryDevice;
-(NSString *)thumperCallingLocalDeviceID;
-(void)cancelPinRequestFromPrimaryDeviceForThumperCalling;
-(NSData *)thumperCallingProvisioningPostData;
-(NSURL *)thumperCallingProvisioningURL;
-(BOOL)supportsSimultaneousVoiceAndData;
-(id)initWithSenderIdentityUUID:(id)arg1 state:(id)arg2 client:(id)arg3 ;
-(BOOL)isWiFiCallingEnabled;
-(void)invalidateAndRefreshThumperCallingProvisioningURL;
-(void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)arg1 ;
-(void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 ;
-(void)setThumperCallingLocalDeviceID:(NSString *)arg1 ;
@end

