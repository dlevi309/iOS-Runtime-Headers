/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(BOOL)broadcastEnable;
-(unsigned long long)broadcastInterval;
-(void)setBroadcastEnable:(BOOL)arg1 ;
-(void)setBroadcastInterval:(unsigned long long)arg1 ;
@end

