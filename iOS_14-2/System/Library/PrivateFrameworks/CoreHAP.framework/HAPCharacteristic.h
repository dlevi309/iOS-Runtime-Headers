/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAP2CharacteristicTupleValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMFMerging.h>

@class HMFUnfairLock, NSDate, NSNumber, NSString, HAPService, HAPCharacteristicMetadata, CBCharacteristic;

@interface HAPCharacteristic : HMFObject <HAP2CharacteristicTupleValue, NSCopying, HMFMerging> {

	HMFUnfairLock* _lock;
	BOOL _eventNotificationsEnabled;
	BOOL _shouldValidateValueAfterReading;
	BOOL _prohibitCaching;
	BOOL _implicitWriteWithResponse;
	NSDate* _valueUpdatedTime;
	id _value;
	NSNumber* _stateNumber;
	NSString* _type;
	NSNumber* _instanceID;
	HAPService* _service;
	unsigned long long _properties;
	HAPCharacteristicMetadata* _metadata;
	HAPCharacteristicMetadata* _accessoryMetadata;

}

@property (setter=setCBCharacteristic:,nonatomic,retain) CBCharacteristic * cbCharacteristic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * type;                                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                                                         //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPService * service;                                                                 //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                                                               //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL eventNotificationsEnabled;                                                              //@synthesize eventNotificationsEnabled=_eventNotificationsEnabled - In the implementation block
@property (nonatomic,copy) HAPCharacteristicMetadata * metadata;                                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) HAPCharacteristicMetadata * accessoryMetadata;                                             //@synthesize accessoryMetadata=_accessoryMetadata - In the implementation block
@property (nonatomic,retain) NSDate * valueUpdatedTime;                                                                   //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (assign,nonatomic) BOOL shouldValidateValueAfterReading;                                                        //@synthesize shouldValidateValueAfterReading=_shouldValidateValueAfterReading - In the implementation block
@property (getter=isWriteWithResponseImplicitlySupported,nonatomic,readonly) BOOL implicitWriteWithResponse;              //@synthesize implicitWriteWithResponse=_implicitWriteWithResponse - In the implementation block
@property (setter=setValue:,nonatomic,copy) id value;                                                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                                                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) BOOL supportsAdditionalAuthorizationData; 
@property (nonatomic,readonly) BOOL supportsWriteWithResponse; 
@property (assign,nonatomic) BOOL prohibitCaching;                                                                        //@synthesize prohibitCaching=_prohibitCaching - In the implementation block
+(id)hap2_shortTypeFromUUID:(id)arg1 ;
-(NSNumber *)instanceID;
-(unsigned long long)properties;
-(BOOL)mergeObject:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(void)setValue:(id)arg1 ;
-(NSString *)description;
-(void)setService:(HAPService *)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(NSString *)type;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(NSDate *)valueUpdatedTime;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(HAPCharacteristicMetadata *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(HAPService *)service;
-(id)propertiesDescription;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(BOOL)supportsWriteWithResponse;
-(void)setProhibitCaching:(BOOL)arg1 ;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(BOOL)eventNotificationsEnabled;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(BOOL)arg6 metadata:(id)arg7 ;
-(void)setEventNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)shouldValidateValueAfterReading;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(BOOL)arg6 implicitWriteWithResponse:(BOOL)arg7 metadata:(id)arg8 ;
-(HAPCharacteristicMetadata *)accessoryMetadata;
-(void)setShouldValidateValueAfterReading:(BOOL)arg1 ;
-(BOOL)hap2_canUseCachedValue;
-(CBCharacteristic *)cbCharacteristic;
-(void)setCBCharacteristic:(id)arg1 ;
-(BOOL)isEqualToCharacteristic:(id)arg1 ;
-(BOOL)hap2_mergeWithCharacteristic:(id)arg1 ;
-(BOOL)isWriteWithResponseImplicitlySupported;
-(BOOL)prohibitCaching;
-(void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2 ;
-(id)_generateValidMetadata:(id)arg1 ;
-(BOOL)supportsAdditionalAuthorizationData;
@end

