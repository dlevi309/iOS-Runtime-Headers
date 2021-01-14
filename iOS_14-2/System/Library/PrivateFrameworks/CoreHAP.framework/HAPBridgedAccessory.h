/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPAccessory.h>
#import <libobjc.A.dylib/HAPAccessoryServerInternalDelegate.h>

@class HAPCharacteristic, NSString;

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate> {

	HAPCharacteristic* _reachabilityCharacteristic;

}

@property (assign,nonatomic,__weak) HAPCharacteristic * reachabilityCharacteristic;              //@synthesize reachabilityCharacteristic=_reachabilityCharacteristic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPrimary;
-(BOOL)mergeObject:(id)arg1 ;
-(id)shortDescription;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(BOOL)__parseServices;
-(BOOL)__isReachable;
-(HAPCharacteristic *)reachabilityCharacteristic;
-(BOOL)__parseBridgeService:(id)arg1 ;
-(void)setReachabilityCharacteristic:(HAPCharacteristic *)arg1 ;
-(BOOL)mergeWithAccessory:(id)arg1 ;
@end

