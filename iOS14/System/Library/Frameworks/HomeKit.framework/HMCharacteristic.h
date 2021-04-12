/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class NSUUID, HMFUnfairLock, NSString, NSArray, NSDate, HMService, HMCharacteristicMetadata, _HMContext, NSNumber, NSDictionary;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge> {

	HMFUnfairLock* _lock;
	BOOL _notificationEnabled;
	BOOL _requiresDeviceUnlock;
	BOOL _hasAuthorizationData;
	BOOL _notificationEnabledByThisClient;
	NSUUID* _uniqueIdentifier;
	NSString* _characteristicType;
	NSArray* _properties;
	id _value;
	NSDate* _valueUpdatedTime;
	NSDate* _notificationEnabledTime;
	HMService* _service;
	HMCharacteristicMetadata* _metadata;
	_HMContext* _context;
	NSNumber* _instanceID;

}

@property (copy,readonly) NSDictionary * serializedDictionaryRepresentation; 
@property (nonatomic,retain) _HMContext * context;                                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSNumber * instanceID;                                            //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HMService * service;                                         //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSString * characteristicType;                                        //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,copy) NSArray * properties;                                                 //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL requiresDeviceUnlock;                                          //@synthesize requiresDeviceUnlock=_requiresDeviceUnlock - In the implementation block
@property (nonatomic,copy) id value;                                                             //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL notificationEnabledByThisClient;                               //@synthesize notificationEnabledByThisClient=_notificationEnabledByThisClient - In the implementation block
@property (assign,getter=isNotificationEnabled,nonatomic) BOOL notificationEnabled;              //@synthesize notificationEnabled=_notificationEnabled - In the implementation block
@property (nonatomic,copy) NSDate * valueUpdatedTime;                                            //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (nonatomic,copy) NSDate * notificationEnabledTime;                                     //@synthesize notificationEnabledTime=_notificationEnabledTime - In the implementation block
@property (assign) BOOL hasAuthorizationData;                                                    //@synthesize hasAuthorizationData=_hasAuthorizationData - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) HMCharacteristicMetadata * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)characteristicWithCharacteristicReference:(id)arg1 home:(id)arg2 ;
+(id)_characteristicTypeAsString:(id)arg1 ;
+(id)__localizedDescriptionForCharacteristicType:(id)arg1 ;
+(id)localizedDescriptionForCharacteristicType:(id)arg1 ;
+(id)characteristicWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(NSNumber *)instanceID;
-(NSArray *)properties;
-(NSString *)characteristicType;
-(BOOL)isNotificationEnabled;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(id)logIdentifier;
-(_HMContext *)context;
-(void)setValue:(id)arg1 ;
-(NSString *)localizedDescription;
-(void)setService:(HMService *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(id)mapHAPProperties:(long long)arg1 ;
-(void)_unconfigureContext;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(BOOL)notificationEnabledByThisClient;
-(void)setNotificationEnabledByThisClient:(BOOL)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(void)setRequiresDeviceUnlock:(BOOL)arg1 ;
-(BOOL)hasAuthorizationData;
-(void)setHasAuthorizationData:(BOOL)arg1 ;
-(NSDate *)valueUpdatedTime;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(void)setNotificationEnabled:(BOOL)arg1 ;
-(NSDate *)notificationEnabledTime;
-(void)setNotificationEnabledTime:(NSDate *)arg1 ;
-(void)_writeValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_readValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enableNotification:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAuthorizationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_unconfigure;
-(void)__configureWithContext:(id)arg1 service:(id)arg2 ;
-(void)setValueUpdateTime:(id)arg1 ;
-(void)_updateValue:(id)arg1 updateTime:(id)arg2 ;
-(void)writeValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)readValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableNotification:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAuthorizationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_characteristicTypeDescription;
-(void)setProperties:(NSArray *)arg1 ;
-(HMCharacteristicMetadata *)metadata;
-(NSDictionary *)serializedDictionaryRepresentation;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(HMService *)service;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

