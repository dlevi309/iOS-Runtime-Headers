/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDHealthServiceCharacteristic, HKDevice, NSError;

@interface _HDHealthServiceDataUpdate : NSObject {

	unsigned long long _sessionIdentifier;
	HDHealthServiceCharacteristic* _characteristic;
	HKDevice* _device;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long sessionIdentifier;                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) HDHealthServiceCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) HKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSError * error;                                             //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(HKDevice *)device;
-(unsigned long long)sessionIdentifier;
-(HDHealthServiceCharacteristic *)characteristic;
-(id)initWithSessionIdentifier:(unsigned long long)arg1 characteristic:(id)arg2 device:(id)arg3 error:(id)arg4 ;
@end

