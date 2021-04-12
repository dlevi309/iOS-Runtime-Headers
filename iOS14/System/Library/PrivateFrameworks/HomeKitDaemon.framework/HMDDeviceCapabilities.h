/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDDeviceCapabilitiesModel, NSUUID, NSString;

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSCopying, NSSecureCoding> {

	HMDDeviceCapabilitiesModel* _objectModel;

}

@property (nonatomic,retain) HMDDeviceCapabilitiesModel * objectModel;                               //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,copy) NSUUID * modelParentIdentifier; 
@property (nonatomic,readonly) BOOL supportsKeychainSync; 
@property (nonatomic,readonly) BOOL supportsDeviceSetup; 
@property (nonatomic,readonly) BOOL supportsKeyTransferClient; 
@property (nonatomic,readonly) BOOL supportsKeyTransferServer; 
@property (nonatomic,readonly) BOOL supportsStandaloneMode; 
@property (nonatomic,readonly) BOOL supportsCloudDataSync; 
@property (nonatomic,readonly) BOOL supportsWholeHouseAudio; 
@property (nonatomic,readonly) BOOL supportsAssistantAccessControl; 
@property (getter=isResidentCapable,nonatomic,readonly) BOOL residentCapable; 
@property (getter=isRemoteGatewayCapable,nonatomic,readonly) BOOL remoteGatewayCapable; 
@property (nonatomic,readonly) BOOL supportsHomeInvitation; 
@property (nonatomic,readonly) BOOL supportsTargetControl; 
@property (nonatomic,readonly) BOOL supportsMultiUser; 
@property (nonatomic,readonly) BOOL supportsCompanionInitiatedRestart; 
@property (nonatomic,readonly) BOOL supportsCameraRecording; 
@property (nonatomic,readonly) BOOL supportsRouterManagement; 
@property (nonatomic,readonly) BOOL supportsShortcutActions; 
@property (nonatomic,readonly) BOOL supportsMediaActions; 
@property (nonatomic,readonly) BOOL supportsCameraSignificantEventNotifications; 
@property (nonatomic,readonly) BOOL supportsCameraActivityZones; 
@property (nonatomic,readonly) BOOL supportsMusicAlarm; 
@property (nonatomic,readonly) BOOL supportsFaceClassification; 
@property (nonatomic,readonly) BOOL supportsNaturalLighting; 
@property (nonatomic,readonly) BOOL supportsIDSActivityMonitorPresence; 
@property (nonatomic,readonly) BOOL supportsCameraRecordingReachabilityNotifications; 
@property (nonatomic,readonly) BOOL supportsAnnounce; 
@property (readonly) BOOL supportsThirdPartyMusic; 
@property (readonly) BOOL supportsDoorbellChime; 
@property (nonatomic,readonly) BOOL supportsThreadBorderRouter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)deviceCapabilities;
+(BOOL)isCompanionCapable;
+(BOOL)supportsLocalization;
+(BOOL)supportsRemoteAccess;
+(BOOL)supportsAddingAccessory;
+(BOOL)supportsBulletinBoard;
+(BOOL)supportsDeviceLock;
+(unsigned long long)supportedPairingCapabilities;
+(BOOL)supportsUserNotifications;
+(BOOL)supportsReceivingRemoteCameraStream;
+(BOOL)supportsBackboard;
+(BOOL)isAppleMediaAccessory;
+(BOOL)supportsSymptomsHandler;
+(BOOL)supportsTargetControllerAutoConfigure;
+(BOOL)supportsCustomerReset;
+(BOOL)supportsStereoPairingV1;
+(BOOL)supportsStereoPairingV2;
+(BOOL)supportsAudioDestinationControllerCreation;
+(BOOL)supportsAudioDestinationCreation;
+(BOOL)supportsCameraSnapshotRequestViaRelay;
+(id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1 ;
+(BOOL)supportsIntentDonation;
+(BOOL)supportsHomeApp;
+(BOOL)requiresHomePodPairing;
+(BOOL)supportsDismissUserNotificationAndDialog;
+(BOOL)supportsSyncingToSharedUsers;
+(BOOL)supportsHomeKitDataStream;
-(id)init;
-(HMDDeviceCapabilitiesModel *)objectModel;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)supportsTargetControl;
-(id)attributeDescriptions;
-(BOOL)supportsCompanionInitiatedRestart;
-(BOOL)supportsMusicAlarm;
-(BOOL)supportsAnnounce;
-(BOOL)supportsThirdPartyMusic;
-(BOOL)supportsDoorbellChime;
-(unsigned long long)hash;
-(Class)modelClass;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)modelIdentifier;
-(id)initWithObjectModel:(id)arg1 ;
-(BOOL)supportsNaturalLighting;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsMultiUser;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObjectModel:(HMDDeviceCapabilitiesModel *)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)supportsShortcutActions;
-(BOOL)supportsMediaActions;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)supportsCameraActivityZones;
-(BOOL)supportsFaceClassification;
-(BOOL)supportsCameraRecording;
-(BOOL)isResidentCapable;
-(BOOL)isRemoteGatewayCapable;
-(BOOL)supportsCameraRecordingReachabilityNotifications;
-(BOOL)supportsKeyTransferServer;
-(BOOL)supportsKeychainSync;
-(BOOL)supportsDeviceSetup;
-(BOOL)supportsWholeHouseAudio;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(void)setModelParentIdentifier:(NSUUID *)arg1 ;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)supportsCloudDataSync;
-(BOOL)supportsStandaloneMode;
-(BOOL)supportsRouterManagement;
-(BOOL)supportsCameraSignificantEventNotifications;
-(BOOL)supportsThreadBorderRouter;
-(BOOL)supportsKeyTransferClient;
-(id)initWithProductInfo:(id)arg1 homekitVersion:(id)arg2 ;
-(BOOL)supportsAssistantAccessControl;
-(BOOL)supportsHomeInvitation;
-(BOOL)supportsIDSActivityMonitorPresence;
-(id)initWithProductInfo:(id)arg1 ;
@end

