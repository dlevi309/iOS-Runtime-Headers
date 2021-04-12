/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol HMFLocking;
@class NSSet, HMDCharacteristicMetadata, HMDHAPAccessory, HMDService, NSNumber, NSData, NSString, NSDate, NSMutableSet, NSDictionary, NSUUID;

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMFDumpState> {

	id<HMFLocking> _lock;
	BOOL _notificationRegisteredWithRemoteGateway;
	BOOL _broadcastNotificationEnabled;
	NSSet* _hapCharacteristicTuples;
	HMDCharacteristicMetadata* _metadata;
	HMDHAPAccessory* _accessory;
	HMDService* _service;
	NSNumber* _stateNumber;
	NSData* _authorizationData;
	NSString* _characteristicType;
	id _lastKnownValue;
	NSDate* _lastKnownValueUpdateTime;
	NSNumber* _characteristicInstanceID;
	long long _characteristicProperties;
	NSMutableSet* _notificationRegistrations;
	NSDate* _notificationEnabledTime;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (nonatomic,retain) NSSet * hapCharacteristicTuples;                           //@synthesize hapCharacteristicTuples=_hapCharacteristicTuples - In the implementation block
@property (nonatomic,readonly) NSString * serializedIdentifier; 
@property (nonatomic,retain) NSString * characteristicType;                             //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,retain) id lastKnownValue;                                         //@synthesize lastKnownValue=_lastKnownValue - In the implementation block
@property (nonatomic,retain) NSDate * lastKnownValueUpdateTime;                         //@synthesize lastKnownValueUpdateTime=_lastKnownValueUpdateTime - In the implementation block
@property (nonatomic,retain) NSNumber * characteristicInstanceID;                       //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (assign,nonatomic) long long characteristicProperties;                        //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,retain) NSMutableSet * notificationRegistrations;                  //@synthesize notificationRegistrations=_notificationRegistrations - In the implementation block
@property (nonatomic,retain) NSDate * notificationEnabledTime;                          //@synthesize notificationEnabledTime=_notificationEnabledTime - In the implementation block
@property (assign,nonatomic) BOOL notificationRegisteredWithRemoteGateway;              //@synthesize notificationRegisteredWithRemoteGateway=_notificationRegisteredWithRemoteGateway - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDService * service;                             //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSNumber * instanceID; 
@property (nonatomic,readonly) long long properties; 
@property (nonatomic,copy,readonly) id value; 
@property (setter=setStateNumber:,nonatomic,copy) NSNumber * stateNumber;               //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) HMDCharacteristicMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSData * authorizationData;                                  //@synthesize authorizationData=_authorizationData - In the implementation block
@property (assign,nonatomic) BOOL broadcastNotificationEnabled;                         //@synthesize broadcastNotificationEnabled=_broadcastNotificationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)value:(id)arg1 differentThan:(id)arg2 ;
+(/*^block*/id)sortComparatorForCharacteristicDictionary;
-(id)init;
-(NSString *)description;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(NSString *)contextID;
-(long long)properties;
-(HMDCharacteristicMetadata *)metadata;
-(NSString *)characteristicType;
-(HMDService *)service;
-(HMDHAPAccessory *)accessory;
-(BOOL)updateWithDictionary:(id)arg1 ;
-(id)dumpState;
-(NSNumber *)instanceID;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(BOOL)isNotificationEnabled;
-(NSDate *)notificationEnabledTime;
-(void)setNotificationEnabledTime:(NSDate *)arg1 ;
-(NSDictionary *)bulletinContext;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSNumber *)stateNumber;
-(long long)characteristicProperties;
-(void)setCharacteristicProperties:(long long)arg1 ;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(NSData *)authorizationData;
-(NSNumber *)characteristicInstanceID;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(id)shortTypeDescription;
-(NSUUID *)contextSPIUniqueIdentifier;
-(void)unconfigure;
-(NSMutableSet *)notificationRegistrations;
-(BOOL)supportsNotification;
-(BOOL)isNonHomeNotificationsEnabled;
-(BOOL)isClientNotificationEnabled;
-(BOOL)isNonClientNotificationEnabled;
-(NSDate *)lastKnownValueUpdateTime;
-(BOOL)notificationRegisteredWithRemoteGateway;
-(BOOL)isValueUpdatedFromHAPCharacteristic:(id)arg1 ;
-(id)lastKnownValue;
-(void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 ;
-(void)setNotificationRegistrations:(NSMutableSet *)arg1 ;
-(id)validateValueForWrite:(id)arg1 outValue:(id*)arg2 ;
-(NSString *)serializedIdentifier;
-(BOOL)supportsRead;
-(void)setNotificationEnabled:(BOOL)arg1 forClientIdentifier:(id)arg2 ;
-(id)characteristicForHAPAccessory:(id)arg1 ;
-(void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(void)setNotificationRegisteredWithRemoteGateway:(BOOL)arg1 ;
-(BOOL)deregisterNotificationForClientIdentifier:(id)arg1 ;
-(BOOL)isNotificationEnabledForClientIdentifier:(id)arg1 ;
-(void)setBroadcastNotificationEnabled:(BOOL)arg1 ;
-(BOOL)supportsWrite;
-(id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3 ;
-(void)configureWithCharacteristic:(id)arg1 ;
-(void)updateLastKnownValue;
-(id)getCharacteristicDictionary;
-(BOOL)broadcastNotificationEnabled;
-(id)characteristicTypeDescription;
-(NSSet *)hapCharacteristicTuples;
-(void)setLastKnownValue:(id)arg1 ;
-(void)setLastKnownValueUpdateTime:(NSDate *)arg1 ;
-(id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2 ;
-(void)setHapCharacteristicTuples:(NSSet *)arg1 ;
-(id)validateValueForNotify:(id)arg1 outValue:(id*)arg2 ;
-(BOOL)isNotificationEnabledForClientIdentifierPrefix:(id)arg1 ;
-(void)updateService:(id)arg1 accessory:(id)arg2 ;
-(void)setCharacteristicInstanceID:(NSNumber *)arg1 ;
@end

