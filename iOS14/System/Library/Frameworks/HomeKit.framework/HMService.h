/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class HMFUnfairLock, NSUUID, HMAccessory, NSString, HMApplicationData, HMBulletinBoardNotification, NSURL, NSNumber, _HMContext, HMMutableArray, NSArray, NSDictionary;

@interface HMService : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	BOOL _nameModifiable;
	BOOL _userInteractive;
	BOOL _primaryService;
	BOOL _mediaSourceDisplayOrderModifiable;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSString* _serviceType;
	NSString* _name;
	NSString* _configuredName;
	NSString* _defaultName;
	NSString* _associatedServiceType;
	NSString* _serviceSubtype;
	long long _configurationState;
	HMApplicationData* _applicationData;
	HMBulletinBoardNotification* _bulletinBoardNotificationInternal;
	NSURL* _homeObjectURLInternal;
	NSNumber* _mediaSourceIdentifier;
	_HMContext* _context;
	NSNumber* _instanceID;
	HMMutableArray* _currentCharacteristics;
	NSNumber* _lastKnownDiscoveryMode;
	NSNumber* _lastKnownOperatingStateValue;
	NSNumber* _lastKnownOperatingStateAbnormalReasonsValue;
	NSUUID* _uuid;
	NSArray* _linkedServiceInstanceIDs;
	NSArray* _mediaSourceDisplayOrder;

}

@property (copy,readonly) NSDictionary * serializedDictionaryRepresentation; 
@property (nonatomic,retain) _HMContext * context;                                                           //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSNumber * instanceID;                                                        //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                                                 //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                                           //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * defaultName;                                                         //@synthesize defaultName=_defaultName - In the implementation block
@property (nonatomic,copy) NSString * associatedServiceType;                                                 //@synthesize associatedServiceType=_associatedServiceType - In the implementation block
@property (nonatomic,copy) NSString * serviceSubtype;                                                        //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (assign,nonatomic) long long configurationState;                                                   //@synthesize configurationState=_configurationState - In the implementation block
@property (nonatomic,readonly) HMBulletinBoardNotification * bulletinBoardNotificationInternal;              //@synthesize bulletinBoardNotificationInternal=_bulletinBoardNotificationInternal - In the implementation block
@property (nonatomic,readonly) NSURL * homeObjectURLInternal;                                                //@synthesize homeObjectURLInternal=_homeObjectURLInternal - In the implementation block
@property (nonatomic,copy) HMMutableArray * currentCharacteristics;                                          //@synthesize currentCharacteristics=_currentCharacteristics - In the implementation block
@property (nonatomic,copy) NSNumber * lastKnownDiscoveryMode;                                                //@synthesize lastKnownDiscoveryMode=_lastKnownDiscoveryMode - In the implementation block
@property (nonatomic,copy) NSNumber * lastKnownOperatingStateValue;                                          //@synthesize lastKnownOperatingStateValue=_lastKnownOperatingStateValue - In the implementation block
@property (nonatomic,copy) NSNumber * lastKnownOperatingStateAbnormalReasonsValue;                           //@synthesize lastKnownOperatingStateAbnormalReasonsValue=_lastKnownOperatingStateAbnormalReasonsValue - In the implementation block
@property (nonatomic,retain) NSNumber * mediaSourceIdentifier;                                               //@synthesize mediaSourceIdentifier=_mediaSourceIdentifier - In the implementation block
@property (assign) BOOL nameModifiable;                                                                      //@synthesize nameModifiable=_nameModifiable - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedServiceInstanceIDs;                                      //@synthesize linkedServiceInstanceIDs=_linkedServiceInstanceIDs - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * configuredName;                                                        //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,retain) NSArray * mediaSourceDisplayOrder;                                              //@synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder - In the implementation block
@property (assign,nonatomic) BOOL mediaSourceDisplayOrderModifiable;                                         //@synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSArray * characteristics; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isUserInteractive,nonatomic,readonly) BOOL userInteractive;                                //@synthesize userInteractive=_userInteractive - In the implementation block
@property (getter=isPrimaryService,nonatomic,readonly) BOOL primaryService;                                  //@synthesize primaryService=_primaryService - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
@property (nonatomic,retain) HMApplicationData * applicationData;                                            //@synthesize applicationData=_applicationData - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1 ;
+(id)_serviceTypeAsString:(id)arg1 ;
+(void)initializeCharacteristicDictionaries;
+(id)defaultCharacteristicByServiceDictionary;
+(id)characteristicBlacklistForShortcutConditions;
+(id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1 ;
+(id)__localizedDescriptionForServiceType:(id)arg1 ;
+(id)localizedDescriptionForServiceType:(id)arg1 ;
+(id)serviceWithServiceReference:(id)arg1 home:(id)arg2 ;
+(id)serviceWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(NSNumber *)instanceID;
-(NSUUID *)applicationDataIdentifier;
-(NSUUID *)uuid;
-(void)setConfiguredName:(NSString *)arg1 ;
-(id)init;
-(id)_findCharacteristic:(id)arg1 ;
-(id)homeObjectURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(id)logIdentifier;
-(_HMContext *)context;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(NSArray *)linkedServices;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(NSString *)localizedDescription;
-(HMApplicationData *)applicationData;
-(NSString *)configuredName;
-(void)_removeCharacteristic:(id)arg1 ;
-(void)_addCharacteristic:(id)arg1 ;
-(void)_handleUpdateName:(id)arg1 ;
-(void)_handleUpdateDefaultName:(id)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(void)_handleUpdateServiceSubtype:(id)arg1 ;
-(void)_handleUpdateConfigurationState:(long long)arg1 ;
-(void)_handleMediaSourceIdentifierUpdated:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(NSString *)defaultName;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(long long)configurationState;
-(id)_findCharacteristicWithUniqueIdentifier:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)characteristics;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)serviceType;
-(NSArray *)mediaSourceDisplayOrder;
-(BOOL)mediaSourceDisplayOrderModifiable;
-(void)setMediaSourceDisplayOrder:(NSArray *)arg1 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMBulletinBoardNotification *)bulletinBoardNotificationInternal;
-(HMMutableArray *)currentCharacteristics;
-(id)_serviceTypeDescription;
-(NSNumber *)lastKnownDiscoveryMode;
-(id)characteristicsSupportedForShortcutConditions;
-(NSNumber *)lastKnownOperatingStateValue;
-(NSNumber *)lastKnownOperatingStateAbnormalReasonsValue;
-(NSURL *)homeObjectURLInternal;
-(BOOL)isNameModifiable;
-(NSString *)associatedServiceType;
-(void)_updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultName:(NSString *)arg1 ;
-(BOOL)isUserInteractive;
-(void)setAssociatedServiceType:(NSString *)arg1 ;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
-(void)setConfigurationState:(long long)arg1 ;
-(void)setLastKnownDiscoveryMode:(NSNumber *)arg1 ;
-(void)_addLastKnownSleepDiscoveryModeDidUpdateDelegateCallbackToOperations:(id)arg1 ;
-(void)setLastKnownOperatingStateValue:(NSNumber *)arg1 ;
-(void)setLastKnownOperatingStateAbnormalReasonsValue:(NSNumber *)arg1 ;
-(void)_addLastKnownOperatingStateWithResponsesDidUpdateDelegateCallbackToOperations:(id)arg1 ;
-(NSNumber *)mediaSourceIdentifier;
-(void)setMediaSourceDisplayOrderModifiable:(BOOL)arg1 ;
-(BOOL)isPrimaryService;
-(void)setMediaSourceIdentifier:(NSNumber *)arg1 ;
-(BOOL)_hasCharacteristic:(id)arg1 ;
-(id)defaultCharacteristic;
-(BOOL)hasSleepDiscoveryMode;
-(long long)lastKnownSleepDiscoveryMode;
-(BOOL)hasOperatingState;
-(BOOL)hasOperatingStateAbnormalReasons;
-(long long)lastKnownOperatingState;
-(void)_handleUpdateServicePrimary:(id)arg1 ;
-(unsigned long long)lastKnownOperatingStateAbnormalReasons;
-(void)updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleMarkServiceInteractive:(id)arg1 ;
-(BOOL)_hasCharacteristicOfType:(id)arg1 ;
-(BOOL)nameModifiable;
-(void)setNameModifiable:(BOOL)arg1 ;
-(void)setCurrentCharacteristics:(HMMutableArray *)arg1 ;
-(id)bulletinBoardNotification;
-(NSDictionary *)serializedDictionaryRepresentation;
-(NSArray *)linkedServiceInstanceIDs;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

