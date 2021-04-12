/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

@class NSNumber;


@protocol HAP2AccessoryPrivate <HAP2Accessory>
@property (nonatomic,retain) NSNumber * internalSleepIntervalMs; 
@required
-(NSNumber *)internalSleepIntervalMs;
-(void)setInternalSleepIntervalMs:(id)arg1;
-(void)updateConnectionState:(unsigned long long)arg1;
-(BOOL)updateDiscoveredServices:(id)arg1;
-(void)characteristicValueChanged:(id)arg1;

@end

