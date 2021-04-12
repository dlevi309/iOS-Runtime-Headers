/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) HMApplicationData * applicationData; 
@property (copy,readonly) NSUUID * applicationDataIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)serviceWithServiceReference:(id)arg1 home:(id)arg2 ;
+(id)serviceWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
+(long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1 ;
+(void)initializeCharacteristicDictionaries;
+(id)_serviceTypeAsString:(id)arg1 ;
+(id)defaultCharacteristicByServiceDictionary;
+(id)characteristicBlacklistForShortcutConditions;
+(id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1 ;
+(id)__localizedDescriptionForServiceType:(id)arg1 ;
+(id)localizedDescriptionForServiceType:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setContext:(_HMContext *)arg1 ;
-(NSString *)serviceType;
-(NSString *)defaultName;
-(void)setServiceType:(NSString *)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(HMApplicationData *)applicationData;
-(id)logIdentifier;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(long long)configurationState;
-(NSArray *)characteristics;
-(NSNumber *)instanceID;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)bulletinBoardNotification;
-(NSDictionary *)serializedDictionaryRepresentation;
-(NSArray *)linkedServiceInstanceIDs;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(id)_findCharacteristic:(id)arg1 ;
-(id)homeObjectURL;
-(NSUUID *)applicationDataIdentifier;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(void)_removeCharacteristic:(id)arg1 ;
-(void)_addCharacteristic:(id)arg1 ;
-(void)_handleUpdateName:(id)arg1 ;
-(void)_handleUpdateDefaultName:(id)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(void)_handleUpdateServiceSubtype:(id)arg1 ;
-(void)_handleUpdateConfigurationState:(long long)arg1 ;
-(void)_handleMediaSourceIdentifierUpdated:(id)arg1 ;
-(id)_findCharacteristicWithUniqueIdentifier:(id)arg1 ;
-(NSArray *)mediaSourceDisplayOrder;
-(BOOL)mediaSourceDisplayOrderModifiable;
-(void)setMediaSourceDisplayOrder:(NSArray *)arg1 ;
-(HMBulletinBoardNotification *)bulletinBoardNotificationInternal;
-(HMMutableArray *)currentCharacteristics;
-(id)_serviceTypeDescription;
-(id)characteristicsSupportedForShortcutConditions;
-(NSNumber *)lastKnownDiscoveryMode;
-(NSURL *)homeObjectURLInternal;
-(BOOL)isNameModifiable;
-(void)_updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)associatedServiceType;
-(void)_updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDefaultName:(NSString *)arg1 ;
-(BOOL)isUserInteractive;
-(void)setAssociatedServiceType:(NSString *)arg1 ;
-(NSString *)serviceSubtype;
-(void)setServiceSubtype:(NSString *)arg1 ;
-(void)setConfigurationState:(long long)arg1 ;
-(void)setLastKnownDiscoveryMode:(NSNumber *)arg1 ;
-(void)_addLastKnownSleepDiscoveryModeDidUpdateDelegateCallbackToOperations:(id)arg1 ;
-(NSNumber *)mediaSourceIdentifier;
-(void)setMediaSourceDisplayOrderModifiable:(BOOL)arg1 ;
-(BOOL)isPrimaryService;
-(void)setMediaSourceIdentifier:(NSNumber *)arg1 ;
-(BOOL)_hasCharacteristic:(id)arg1 ;
-(id)defaultCharacteristic;
-(BOOL)hasSleepDiscoveryMode;
-(long long)lastKnownSleepDiscoveryMode;
-(NSArray *)linkedServices;
-(void)updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConfigurationState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleUpdateServicePrimary:(id)arg1 ;
-(void)_handleMarkServiceInteractive:(id)arg1 ;
-(BOOL)_hasCharacteristicOfType:(id)arg1 ;
-(BOOL)nameModifiable;
-(void)setNameModifiable:(BOOL)arg1 ;
-(void)setCurrentCharacteristics:(HMMutableArray *)arg1 ;
@end

