/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2PairedAccessoryServerPrivate <HAP2AccessoryServerPrivate,HAP2PairedAccessoryServer>
@required
-(void)pollAccessory;
-(void)becomeUnpairedWithAccessoryServer:(id)arg1;
-(void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id)arg1;
-(id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3;
-(id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3;
-(id)enableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2;
-(id)disableNotificationsForCharacteristics:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleEvents:(id)arg1;
-(void)handleUpdatedCharacteristicValues:(id)arg1;
-(void)handleReestablishedSession;
-(void)handleLostDiscoveryAdvertisement;
-(void)verifyConnection;
-(void)clearAccessories;

@end

