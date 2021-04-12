/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3 ;
+(id)lookForCharacteristicByAccessoryUUID:(id)arg1 serviceID:(id)arg2 characteristicID:(id)arg3 inHome:(id)arg4 checkForSupport:(BOOL)arg5 outError:(id*)arg6 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(NSUUID *)accessoryUUID;
-(id)previousValue;
-(void)setPreviousValue:(id)arg1 ;
-(NSNumber *)serviceID;
-(void)setCharacteristic:(HMDCharacteristic *)arg1 ;
-(HMDCharacteristic *)characteristic;
-(NSNumber *)characteristicInstanceID;
-(void)_registerForMessages;
-(BOOL)_activate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(BOOL)_evaluateNewValue:(id)arg1 ;
-(void)replaceCharacteristic:(id)arg1 ;
-(void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(void)_processAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(void)fixCharacteristicInHome:(id)arg1 ;
@end

