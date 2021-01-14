/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2UnpairedAccessoryServerPrivate <HAP2AccessoryServerPrivate,HAP2UnpairedAccessoryServer>
@property (nonatomic,readonly) id<HAP2AccessoryServerPairingDriver> pairingDriver; 
@required
-(id<HAP2AccessoryServerPairingDriver>)pairingDriver;
-(void)becomePairedWithAccessoryServer:(id)arg1;
-(void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id)arg1;

@end

