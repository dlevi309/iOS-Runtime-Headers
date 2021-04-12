/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsDeviceLock;
+(BOOL)supportsUserNotifications;
+(BOOL)supportsReceivingRemoteCameraStream;
+(BOOL)supportsBackboard;
+(BOOL)isAppleMediaAccessory;
+(BOOL)supportsSymptomsHandler;
+(BOOL)supportsTargetControllerAutoConfigure;
+(BOOL)supportsCustomerReset;
+(BOOL)supportsCameraSnapshotRequestViaRelay;
+(id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1 ;
+(BOOL)supportsIntentDonation;
+(BOOL)supportsHomeApp;
+(BOOL)supportsDismissUserNotificationAndDialog;
+(BOOL)supportsSyncingToSharedUsers;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)modelIdentifier;
-(id)attributeDescriptions;
-(Class)modelClass;
-(void)setObjectModel:(HMDDeviceCapabilitiesModel *)arg1 ;
-(HMDDeviceCapabilitiesModel *)objectModel;
-(id)initWithObjectModel:(id)arg1 ;
-(BOOL)supportsTargetControl;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCompanionInitiatedRestart;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(BOOL)supportsShortcutActions;
-(BOOL)supportsMediaActions;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)supportsCameraRecording;
-(BOOL)isResidentCapable;
-(BOOL)isRemoteGatewayCapable;
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
-(BOOL)supportsKeyTransferClient;
-(id)initWithProductInfo:(id)arg1 ;
-(BOOL)supportsAssistantAccessControl;
-(BOOL)supportsHomeInvitation;
@end

