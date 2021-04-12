/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject {

	BOOL _broadcastEnable;
	HAPCharacteristic* _characteristic;
	unsigned long long _broadcastInterval;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;                //@synthesize characteristic=_characteristic - In the implementation block
@property (assign,nonatomic) BOOL broadcastEnable;                              //@synthesize broadcastEnable=_broadcastEnable - In the implementation block
@property (assign,nonatomic) unsigned long long broadcastInterval;              //@synthesize broadcastInterval=_broadcastInterval - In the implementation block
+(id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(BOOL)arg2 broadcastInterval:(unsigned long long)arg3 ;
-(HAPCharacteristic *)characteristic;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(BOOL)broadcastEnable;
-(unsigned long long)broadcastInterval;
-(void)setBroadcastEnable:(BOOL)arg1 ;
-(void)setBroadcastInterval:(unsigned long long)arg1 ;
@end

