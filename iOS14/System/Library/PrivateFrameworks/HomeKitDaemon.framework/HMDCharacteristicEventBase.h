/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDEvent.h>

@class HMDCharacteristic, NSUUID, NSNumber;

@interface HMDCharacteristicEventBase : HMDEvent {

	HMDCharacteristic* _characteristic;
	NSUUID* _accessoryUUID;
	NSNumber* _serviceID;
	NSNumber* _characteristicInstanceID;
	id _previousValue;

}

@property (nonatomic,retain) HMDCharacteristic * characteristic;                 //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryUUID;                           //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * serviceID;                             //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSNumber * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,retain) id previousValue;                                   //@synthesize previousValue=_previousValue - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3 ;
+(id)lookForCharacteristicByAccessoryUUID:(id)arg1 serviceID:(id)arg2 characteristicID:(id)arg3 inHome:(id)arg4 checkForSupport:(BOOL)arg5 outError:(id*)arg6 ;
-(NSUUID *)accessoryUUID;
-(void)_registerForMessages;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)serviceID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(HMDCharacteristic *)characteristic;
-(void)setCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)setPreviousValue:(id)arg1 ;
-(id)previousValue;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(BOOL)_evaluateNewValue:(id)arg1 ;
-(NSNumber *)characteristicInstanceID;
-(void)replaceCharacteristic:(id)arg1 ;
-(void)handleCharacteristicsChangedNotification:(id)arg1 ;
-(void)__handleCharacteristicsChangedPayload:(id)arg1 ;
-(void)fixCharacteristicInHome:(id)arg1 ;
@end

