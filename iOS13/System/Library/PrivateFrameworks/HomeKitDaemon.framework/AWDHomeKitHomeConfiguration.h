/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitHomeConfiguration : PBCodable <NSCopying> {

	NSMutableArray* _eventTriggers;
	NSMutableArray* _hapServicesListCertifieds;
	NSMutableArray* _hapServicesLists;
	unsigned _homeCreationMonth;
	unsigned _homeCreationYear;
	NSMutableArray* _homeKitMultiUserSettings;
	int _networkProtectionStatus;
	unsigned _numAccessories;
	unsigned _numAccessoriesNetworkProtectionAutoFullAccess;
	unsigned _numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
	unsigned _numAccessoriesNetworkProtectionAutoProtectedMainLAN;
	unsigned _numAccessoriesNetworkProtectionFullAccess;
	unsigned _numAccessoriesNetworkProtectionHomeKitOnly;
	unsigned _numAccessoriesNetworkProtectionUnprotected;
	unsigned _numAccessoriesWiFiPPSKCredential;
	unsigned _numAccessoryServiceGroups;
	unsigned _numAdmins;
	unsigned _numAppleAudioAccessories;
	unsigned _numAppleMediaAccessories;
	unsigned _numAppleTVAccessories;
	unsigned _numBridgedAccessories;
	unsigned _numBridgedTargetControllers;
	unsigned _numCameraAccessories;
	unsigned _numCameraAccessoriesSupportRecording;
	unsigned _numCertifiedAccessories;
	unsigned _numCertifiedBridgedTargetControllers;
	unsigned _numCertifiedTargetControllers;
	unsigned _numConfiguredScenes;
	unsigned _numEventTriggers;
	unsigned _numHAPAccessories;
	unsigned _numHAPBTAccessories;
	unsigned _numHAPBatteryServiceAccessories;
	unsigned _numHAPIPAccessories;
	unsigned _numHAPSpeakerServiceAccessories;
	unsigned _numMediaSystems;
	unsigned _numNotCertifiedAccessories;
	unsigned _numPrimaryHAPSpeakerServiceAccessories;
	unsigned _numResidentsEnabled;
	unsigned _numRooms;
	unsigned _numScenes;
	unsigned _numServices;
	unsigned _numShortcuts;
	unsigned _numTargetControllers;
	unsigned _numTelevisionAccessories;
	unsigned _numTimerTriggers;
	unsigned _numTriggerOwnedConfiguredScenes;
	unsigned _numTriggers;
	unsigned _numUsers;
	unsigned _numWholeHouseAudioAccessories;
	unsigned _numZones;
	NSMutableArray* _primaryHAPServicesListCertifieds;
	NSMutableArray* _primaryHAPServicesLists;
	BOOL _isOwner;
	BOOL _isPrimaryResident;
	BOOL _isResidentAvailable;
	BOOL _primaryReportingDevice;
	SCD_Struct_AW23 _has;

}

@property (assign,nonatomic) BOOL hasNumAccessories; 
@property (assign,nonatomic) unsigned numAccessories;                                                      //@synthesize numAccessories=_numAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumServices; 
@property (assign,nonatomic) unsigned numServices;                                                         //@synthesize numServices=_numServices - In the implementation block
@property (assign,nonatomic) BOOL hasNumUsers; 
@property (assign,nonatomic) unsigned numUsers;                                                            //@synthesize numUsers=_numUsers - In the implementation block
@property (assign,nonatomic) BOOL hasNumAdmins; 
@property (assign,nonatomic) unsigned numAdmins;                                                           //@synthesize numAdmins=_numAdmins - In the implementation block
@property (assign,nonatomic) BOOL hasNumScenes; 
@property (assign,nonatomic) unsigned numScenes;                                                           //@synthesize numScenes=_numScenes - In the implementation block
@property (assign,nonatomic) BOOL hasNumTriggers; 
@property (assign,nonatomic) unsigned numTriggers;                                                         //@synthesize numTriggers=_numTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumEventTriggers; 
@property (assign,nonatomic) unsigned numEventTriggers;                                                    //@synthesize numEventTriggers=_numEventTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumTimerTriggers; 
@property (assign,nonatomic) unsigned numTimerTriggers;                                                    //@synthesize numTimerTriggers=_numTimerTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoryServiceGroups; 
@property (assign,nonatomic) unsigned numAccessoryServiceGroups;                                           //@synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups - In the implementation block
@property (assign,nonatomic) BOOL hasNumRooms; 
@property (assign,nonatomic) unsigned numRooms;                                                            //@synthesize numRooms=_numRooms - In the implementation block
@property (assign,nonatomic) BOOL hasNumZones; 
@property (assign,nonatomic) unsigned numZones;                                                            //@synthesize numZones=_numZones - In the implementation block
@property (assign,nonatomic) BOOL hasIsResidentAvailable; 
@property (assign,nonatomic) BOOL isResidentAvailable;                                                     //@synthesize isResidentAvailable=_isResidentAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasIsPrimaryResident; 
@property (assign,nonatomic) BOOL isPrimaryResident;                                                       //@synthesize isPrimaryResident=_isPrimaryResident - In the implementation block
@property (assign,nonatomic) BOOL hasNumBridgedAccessories; 
@property (assign,nonatomic) unsigned numBridgedAccessories;                                               //@synthesize numBridgedAccessories=_numBridgedAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumNotCertifiedAccessories; 
@property (assign,nonatomic) unsigned numNotCertifiedAccessories;                                          //@synthesize numNotCertifiedAccessories=_numNotCertifiedAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumCertifiedAccessories; 
@property (assign,nonatomic) unsigned numCertifiedAccessories;                                             //@synthesize numCertifiedAccessories=_numCertifiedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableArray * eventTriggers;                                               //@synthesize eventTriggers=_eventTriggers - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPAccessories; 
@property (assign,nonatomic) unsigned numHAPAccessories;                                                   //@synthesize numHAPAccessories=_numHAPAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumAppleMediaAccessories; 
@property (assign,nonatomic) unsigned numAppleMediaAccessories;                                            //@synthesize numAppleMediaAccessories=_numAppleMediaAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumWholeHouseAudioAccessories; 
@property (assign,nonatomic) unsigned numWholeHouseAudioAccessories;                                       //@synthesize numWholeHouseAudioAccessories=_numWholeHouseAudioAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumAppleAudioAccessories; 
@property (assign,nonatomic) unsigned numAppleAudioAccessories;                                            //@synthesize numAppleAudioAccessories=_numAppleAudioAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumAppleTVAccessories; 
@property (assign,nonatomic) unsigned numAppleTVAccessories;                                               //@synthesize numAppleTVAccessories=_numAppleTVAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessories; 
@property (assign,nonatomic) unsigned numCameraAccessories;                                                //@synthesize numCameraAccessories=_numCameraAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumMediaSystems; 
@property (assign,nonatomic) unsigned numMediaSystems;                                                     //@synthesize numMediaSystems=_numMediaSystems - In the implementation block
@property (assign,nonatomic) BOOL hasNumTargetControllers; 
@property (assign,nonatomic) unsigned numTargetControllers;                                                //@synthesize numTargetControllers=_numTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumCertifiedTargetControllers; 
@property (assign,nonatomic) unsigned numCertifiedTargetControllers;                                       //@synthesize numCertifiedTargetControllers=_numCertifiedTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumBridgedTargetControllers; 
@property (assign,nonatomic) unsigned numBridgedTargetControllers;                                         //@synthesize numBridgedTargetControllers=_numBridgedTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumCertifiedBridgedTargetControllers; 
@property (assign,nonatomic) unsigned numCertifiedBridgedTargetControllers;                                //@synthesize numCertifiedBridgedTargetControllers=_numCertifiedBridgedTargetControllers - In the implementation block
@property (assign,nonatomic) BOOL hasNumConfiguredScenes; 
@property (assign,nonatomic) unsigned numConfiguredScenes;                                                 //@synthesize numConfiguredScenes=_numConfiguredScenes - In the implementation block
@property (assign,nonatomic) BOOL hasIsOwner; 
@property (assign,nonatomic) BOOL isOwner;                                                                 //@synthesize isOwner=_isOwner - In the implementation block
@property (assign,nonatomic) BOOL hasNumResidentsEnabled; 
@property (assign,nonatomic) unsigned numResidentsEnabled;                                                 //@synthesize numResidentsEnabled=_numResidentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryReportingDevice; 
@property (assign,nonatomic) BOOL primaryReportingDevice;                                                  //@synthesize primaryReportingDevice=_primaryReportingDevice - In the implementation block
@property (assign,nonatomic) BOOL hasNumTelevisionAccessories; 
@property (assign,nonatomic) unsigned numTelevisionAccessories;                                            //@synthesize numTelevisionAccessories=_numTelevisionAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkProtectionStatus; 
@property (assign,nonatomic) int networkProtectionStatus;                                                  //@synthesize networkProtectionStatus=_networkProtectionStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesWiFiPPSKCredential; 
@property (assign,nonatomic) unsigned numAccessoriesWiFiPPSKCredential;                                    //@synthesize numAccessoriesWiFiPPSKCredential=_numAccessoriesWiFiPPSKCredential - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoFullAccess; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionAutoFullAccess;                       //@synthesize numAccessoriesNetworkProtectionAutoFullAccess=_numAccessoriesNetworkProtectionAutoFullAccess - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedMainLAN; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionAutoProtectedMainLAN;                 //@synthesize numAccessoriesNetworkProtectionAutoProtectedMainLAN=_numAccessoriesNetworkProtectionAutoProtectedMainLAN - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;              //@synthesize numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN=_numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionFullAccess; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionFullAccess;                           //@synthesize numAccessoriesNetworkProtectionFullAccess=_numAccessoriesNetworkProtectionFullAccess - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionHomeKitOnly; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionHomeKitOnly;                          //@synthesize numAccessoriesNetworkProtectionHomeKitOnly=_numAccessoriesNetworkProtectionHomeKitOnly - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNetworkProtectionUnprotected; 
@property (assign,nonatomic) unsigned numAccessoriesNetworkProtectionUnprotected;                          //@synthesize numAccessoriesNetworkProtectionUnprotected=_numAccessoriesNetworkProtectionUnprotected - In the implementation block
@property (assign,nonatomic) BOOL hasNumShortcuts; 
@property (assign,nonatomic) unsigned numShortcuts;                                                        //@synthesize numShortcuts=_numShortcuts - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitMultiUserSettings;                                    //@synthesize homeKitMultiUserSettings=_homeKitMultiUserSettings - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPIPAccessories; 
@property (assign,nonatomic) unsigned numHAPIPAccessories;                                                 //@synthesize numHAPIPAccessories=_numHAPIPAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPBTAccessories; 
@property (assign,nonatomic) unsigned numHAPBTAccessories;                                                 //@synthesize numHAPBTAccessories=_numHAPBTAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPBatteryServiceAccessories; 
@property (assign,nonatomic) unsigned numHAPBatteryServiceAccessories;                                     //@synthesize numHAPBatteryServiceAccessories=_numHAPBatteryServiceAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumCameraAccessoriesSupportRecording; 
@property (assign,nonatomic) unsigned numCameraAccessoriesSupportRecording;                                //@synthesize numCameraAccessoriesSupportRecording=_numCameraAccessoriesSupportRecording - In the implementation block
@property (assign,nonatomic) BOOL hasHomeCreationMonth; 
@property (assign,nonatomic) unsigned homeCreationMonth;                                                   //@synthesize homeCreationMonth=_homeCreationMonth - In the implementation block
@property (assign,nonatomic) BOOL hasHomeCreationYear; 
@property (assign,nonatomic) unsigned homeCreationYear;                                                    //@synthesize homeCreationYear=_homeCreationYear - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServicesLists;                                            //@synthesize hapServicesLists=_hapServicesLists - In the implementation block
@property (nonatomic,retain) NSMutableArray * primaryHAPServicesLists;                                     //@synthesize primaryHAPServicesLists=_primaryHAPServicesLists - In the implementation block
@property (nonatomic,retain) NSMutableArray * hapServicesListCertifieds;                                   //@synthesize hapServicesListCertifieds=_hapServicesListCertifieds - In the implementation block
@property (nonatomic,retain) NSMutableArray * primaryHAPServicesListCertifieds;                            //@synthesize primaryHAPServicesListCertifieds=_primaryHAPServicesListCertifieds - In the implementation block
@property (assign,nonatomic) BOOL hasNumHAPSpeakerServiceAccessories; 
@property (assign,nonatomic) unsigned numHAPSpeakerServiceAccessories;                                     //@synthesize numHAPSpeakerServiceAccessories=_numHAPSpeakerServiceAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumPrimaryHAPSpeakerServiceAccessories; 
@property (assign,nonatomic) unsigned numPrimaryHAPSpeakerServiceAccessories;                              //@synthesize numPrimaryHAPSpeakerServiceAccessories=_numPrimaryHAPSpeakerServiceAccessories - In the implementation block
@property (assign,nonatomic) BOOL hasNumTriggerOwnedConfiguredScenes; 
@property (assign,nonatomic) unsigned numTriggerOwnedConfiguredScenes;                                     //@synthesize numTriggerOwnedConfiguredScenes=_numTriggerOwnedConfiguredScenes - In the implementation block
+(Class)eventTriggersType;
+(Class)homeKitMultiUserSettingsType;
+(Class)hapServicesListType;
+(Class)primaryHAPServicesListType;
+(Class)hapServicesListCertifiedType;
+(Class)primaryHAPServicesListCertifiedType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isOwner;
-(void)setIsOwner:(BOOL)arg1 ;
-(BOOL)isResidentAvailable;
-(void)setHomeKitMultiUserSettings:(NSMutableArray *)arg1 ;
-(void)setNumAccessories:(unsigned)arg1 ;
-(NSMutableArray *)homeKitMultiUserSettings;
-(unsigned)numServices;
-(void)setNumServices:(unsigned)arg1 ;
-(void)setNumHAPAccessories:(unsigned)arg1 ;
-(void)setNumWholeHouseAudioAccessories:(unsigned)arg1 ;
-(void)setNumAppleMediaAccessories:(unsigned)arg1 ;
-(void)setNumCertifiedAccessories:(unsigned)arg1 ;
-(void)setNumNotCertifiedAccessories:(unsigned)arg1 ;
-(void)setNumBridgedAccessories:(unsigned)arg1 ;
-(void)setNumAppleTVAccessories:(unsigned)arg1 ;
-(void)setNumAppleAudioAccessories:(unsigned)arg1 ;
-(void)setNumCameraAccessories:(unsigned)arg1 ;
-(void)setNumMediaSystems:(unsigned)arg1 ;
-(void)setNumTargetControllers:(unsigned)arg1 ;
-(void)setNumCertifiedTargetControllers:(unsigned)arg1 ;
-(void)setNumBridgedTargetControllers:(unsigned)arg1 ;
-(void)setNumCertifiedBridgedTargetControllers:(unsigned)arg1 ;
-(void)setNumTelevisionAccessories:(unsigned)arg1 ;
-(void)setNumHAPIPAccessories:(unsigned)arg1 ;
-(void)setNumHAPBTAccessories:(unsigned)arg1 ;
-(void)setNumHAPBatteryServiceAccessories:(unsigned)arg1 ;
-(void)setNumCameraAccessoriesSupportRecording:(unsigned)arg1 ;
-(void)setNumHAPSpeakerServiceAccessories:(unsigned)arg1 ;
-(void)setNumPrimaryHAPSpeakerServiceAccessories:(unsigned)arg1 ;
-(void)setHapServicesLists:(NSMutableArray *)arg1 ;
-(void)setPrimaryHAPServicesLists:(NSMutableArray *)arg1 ;
-(void)setHomeCreationMonth:(unsigned)arg1 ;
-(void)setHomeCreationYear:(unsigned)arg1 ;
-(void)setNumAccessoriesWiFiPPSKCredential:(unsigned)arg1 ;
-(void)setNetworkProtectionStatus:(int)arg1 ;
-(void)setNumAccessoriesNetworkProtectionUnprotected:(unsigned)arg1 ;
-(void)setNumAccessoriesNetworkProtectionAutoFullAccess:(unsigned)arg1 ;
-(void)setNumAccessoriesNetworkProtectionAutoProtectedMainLAN:(unsigned)arg1 ;
-(void)setNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN:(unsigned)arg1 ;
-(void)setNumAccessoriesNetworkProtectionFullAccess:(unsigned)arg1 ;
-(void)setNumAccessoriesNetworkProtectionHomeKitOnly:(unsigned)arg1 ;
-(unsigned)numAdmins;
-(void)setNumAdmins:(unsigned)arg1 ;
-(unsigned)numUsers;
-(void)setNumUsers:(unsigned)arg1 ;
-(unsigned)numTriggers;
-(void)setNumTriggers:(unsigned)arg1 ;
-(unsigned)numEventTriggers;
-(void)setNumEventTriggers:(unsigned)arg1 ;
-(void)addEventTriggers:(id)arg1 ;
-(unsigned)numTimerTriggers;
-(void)setNumTimerTriggers:(unsigned)arg1 ;
-(unsigned)numShortcuts;
-(void)setNumShortcuts:(unsigned)arg1 ;
-(void)setNumConfiguredScenes:(unsigned)arg1 ;
-(void)setNumTriggerOwnedConfiguredScenes:(unsigned)arg1 ;
-(void)setNumScenes:(unsigned)arg1 ;
-(void)setNumRooms:(unsigned)arg1 ;
-(void)setNumZones:(unsigned)arg1 ;
-(void)setNumAccessoryServiceGroups:(unsigned)arg1 ;
-(void)setIsResidentAvailable:(BOOL)arg1 ;
-(void)setIsPrimaryResident:(BOOL)arg1 ;
-(void)setNumResidentsEnabled:(unsigned)arg1 ;
-(void)setPrimaryReportingDevice:(BOOL)arg1 ;
-(void)setHasNumUsers:(BOOL)arg1 ;
-(BOOL)hasNumUsers;
-(void)setHasIsResidentAvailable:(BOOL)arg1 ;
-(BOOL)hasIsResidentAvailable;
-(unsigned)numAccessories;
-(void)setHasNumAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAccessories;
-(void)addHomeKitMultiUserSettings:(id)arg1 ;
-(void)addHapServicesList:(id)arg1 ;
-(void)addPrimaryHAPServicesList:(id)arg1 ;
-(void)addHapServicesListCertified:(id)arg1 ;
-(void)addPrimaryHAPServicesListCertified:(id)arg1 ;
-(unsigned long long)eventTriggersCount;
-(void)clearEventTriggers;
-(id)eventTriggersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)homeKitMultiUserSettingsCount;
-(void)clearHomeKitMultiUserSettings;
-(id)homeKitMultiUserSettingsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hapServicesListsCount;
-(void)clearHapServicesLists;
-(id)hapServicesListAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)primaryHAPServicesListsCount;
-(void)clearPrimaryHAPServicesLists;
-(id)primaryHAPServicesListAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hapServicesListCertifiedsCount;
-(void)clearHapServicesListCertifieds;
-(id)hapServicesListCertifiedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)primaryHAPServicesListCertifiedsCount;
-(void)clearPrimaryHAPServicesListCertifieds;
-(id)primaryHAPServicesListCertifiedAtIndex:(unsigned long long)arg1 ;
-(void)setHasNumServices:(BOOL)arg1 ;
-(BOOL)hasNumServices;
-(void)setHasNumAdmins:(BOOL)arg1 ;
-(BOOL)hasNumAdmins;
-(void)setHasNumScenes:(BOOL)arg1 ;
-(BOOL)hasNumScenes;
-(void)setHasNumTriggers:(BOOL)arg1 ;
-(BOOL)hasNumTriggers;
-(void)setHasNumEventTriggers:(BOOL)arg1 ;
-(BOOL)hasNumEventTriggers;
-(void)setHasNumTimerTriggers:(BOOL)arg1 ;
-(BOOL)hasNumTimerTriggers;
-(void)setHasNumAccessoryServiceGroups:(BOOL)arg1 ;
-(BOOL)hasNumAccessoryServiceGroups;
-(void)setHasNumRooms:(BOOL)arg1 ;
-(BOOL)hasNumRooms;
-(void)setHasNumZones:(BOOL)arg1 ;
-(BOOL)hasNumZones;
-(void)setHasIsPrimaryResident:(BOOL)arg1 ;
-(BOOL)hasIsPrimaryResident;
-(void)setHasNumBridgedAccessories:(BOOL)arg1 ;
-(BOOL)hasNumBridgedAccessories;
-(void)setHasNumNotCertifiedAccessories:(BOOL)arg1 ;
-(BOOL)hasNumNotCertifiedAccessories;
-(void)setHasNumCertifiedAccessories:(BOOL)arg1 ;
-(BOOL)hasNumCertifiedAccessories;
-(void)setHasNumHAPAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPAccessories;
-(void)setHasNumAppleMediaAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAppleMediaAccessories;
-(void)setHasNumWholeHouseAudioAccessories:(BOOL)arg1 ;
-(BOOL)hasNumWholeHouseAudioAccessories;
-(void)setHasNumAppleAudioAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAppleAudioAccessories;
-(void)setHasNumAppleTVAccessories:(BOOL)arg1 ;
-(BOOL)hasNumAppleTVAccessories;
-(void)setHasNumCameraAccessories:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessories;
-(void)setHasNumMediaSystems:(BOOL)arg1 ;
-(BOOL)hasNumMediaSystems;
-(void)setHasNumTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumTargetControllers;
-(void)setHasNumCertifiedTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumCertifiedTargetControllers;
-(void)setHasNumBridgedTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumBridgedTargetControllers;
-(void)setHasNumCertifiedBridgedTargetControllers:(BOOL)arg1 ;
-(BOOL)hasNumCertifiedBridgedTargetControllers;
-(void)setHasNumConfiguredScenes:(BOOL)arg1 ;
-(BOOL)hasNumConfiguredScenes;
-(void)setHasIsOwner:(BOOL)arg1 ;
-(BOOL)hasIsOwner;
-(void)setHasNumResidentsEnabled:(BOOL)arg1 ;
-(BOOL)hasNumResidentsEnabled;
-(void)setHasPrimaryReportingDevice:(BOOL)arg1 ;
-(BOOL)hasPrimaryReportingDevice;
-(void)setHasNumTelevisionAccessories:(BOOL)arg1 ;
-(BOOL)hasNumTelevisionAccessories;
-(int)networkProtectionStatus;
-(void)setHasNetworkProtectionStatus:(BOOL)arg1 ;
-(BOOL)hasNetworkProtectionStatus;
-(id)networkProtectionStatusAsString:(int)arg1 ;
-(int)StringAsNetworkProtectionStatus:(id)arg1 ;
-(void)setHasNumAccessoriesWiFiPPSKCredential:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesWiFiPPSKCredential;
-(void)setHasNumAccessoriesNetworkProtectionAutoFullAccess:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionAutoFullAccess;
-(void)setHasNumAccessoriesNetworkProtectionAutoProtectedMainLAN:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionAutoProtectedMainLAN;
-(void)setHasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
-(void)setHasNumAccessoriesNetworkProtectionFullAccess:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionFullAccess;
-(void)setHasNumAccessoriesNetworkProtectionHomeKitOnly:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionHomeKitOnly;
-(void)setHasNumAccessoriesNetworkProtectionUnprotected:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNetworkProtectionUnprotected;
-(void)setHasNumShortcuts:(BOOL)arg1 ;
-(BOOL)hasNumShortcuts;
-(void)setHasNumHAPIPAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPIPAccessories;
-(void)setHasNumHAPBTAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPBTAccessories;
-(void)setHasNumHAPBatteryServiceAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPBatteryServiceAccessories;
-(void)setHasNumCameraAccessoriesSupportRecording:(BOOL)arg1 ;
-(BOOL)hasNumCameraAccessoriesSupportRecording;
-(void)setHasHomeCreationMonth:(BOOL)arg1 ;
-(BOOL)hasHomeCreationMonth;
-(void)setHasHomeCreationYear:(BOOL)arg1 ;
-(BOOL)hasHomeCreationYear;
-(void)setHasNumHAPSpeakerServiceAccessories:(BOOL)arg1 ;
-(BOOL)hasNumHAPSpeakerServiceAccessories;
-(void)setHasNumPrimaryHAPSpeakerServiceAccessories:(BOOL)arg1 ;
-(BOOL)hasNumPrimaryHAPSpeakerServiceAccessories;
-(void)setHasNumTriggerOwnedConfiguredScenes:(BOOL)arg1 ;
-(BOOL)hasNumTriggerOwnedConfiguredScenes;
-(unsigned)numScenes;
-(unsigned)numAccessoryServiceGroups;
-(unsigned)numRooms;
-(unsigned)numZones;
-(BOOL)isPrimaryResident;
-(unsigned)numBridgedAccessories;
-(unsigned)numNotCertifiedAccessories;
-(unsigned)numCertifiedAccessories;
-(NSMutableArray *)eventTriggers;
-(void)setEventTriggers:(NSMutableArray *)arg1 ;
-(unsigned)numHAPAccessories;
-(unsigned)numAppleMediaAccessories;
-(unsigned)numWholeHouseAudioAccessories;
-(unsigned)numAppleAudioAccessories;
-(unsigned)numAppleTVAccessories;
-(unsigned)numCameraAccessories;
-(unsigned)numMediaSystems;
-(unsigned)numTargetControllers;
-(unsigned)numCertifiedTargetControllers;
-(unsigned)numBridgedTargetControllers;
-(unsigned)numCertifiedBridgedTargetControllers;
-(unsigned)numConfiguredScenes;
-(unsigned)numResidentsEnabled;
-(BOOL)primaryReportingDevice;
-(unsigned)numTelevisionAccessories;
-(unsigned)numAccessoriesWiFiPPSKCredential;
-(unsigned)numAccessoriesNetworkProtectionAutoFullAccess;
-(unsigned)numAccessoriesNetworkProtectionAutoProtectedMainLAN;
-(unsigned)numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN;
-(unsigned)numAccessoriesNetworkProtectionFullAccess;
-(unsigned)numAccessoriesNetworkProtectionHomeKitOnly;
-(unsigned)numAccessoriesNetworkProtectionUnprotected;
-(unsigned)numHAPIPAccessories;
-(unsigned)numHAPBTAccessories;
-(unsigned)numHAPBatteryServiceAccessories;
-(unsigned)numCameraAccessoriesSupportRecording;
-(unsigned)homeCreationMonth;
-(unsigned)homeCreationYear;
-(NSMutableArray *)hapServicesLists;
-(NSMutableArray *)primaryHAPServicesLists;
-(NSMutableArray *)hapServicesListCertifieds;
-(void)setHapServicesListCertifieds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)primaryHAPServicesListCertifieds;
-(void)setPrimaryHAPServicesListCertifieds:(NSMutableArray *)arg1 ;
-(unsigned)numHAPSpeakerServiceAccessories;
-(unsigned)numPrimaryHAPSpeakerServiceAccessories;
-(unsigned)numTriggerOwnedConfiguredScenes;
@end

