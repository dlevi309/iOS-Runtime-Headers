/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/


@protocol VGVirtualGarageActions
@required
-(void)virtualGarageSelectVehicle:(id)arg1;
-(void)virtualGarageSaveVehicle:(id)arg1;
-(void)virtualGarageGetGarageWithReply:(/*^block*/id)arg1;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(/*^block*/id)arg1;
-(void)virtualGarageOnboardVehicle:(id)arg1;
-(void)virtualGarageAddVehicle:(id)arg1;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg1;
-(void)virtualGarageRemoveVehicle:(id)arg1;
-(void)virtualGarageEndContinuousUpdates;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(BOOL)arg2 withReply:(/*^block*/id)arg3;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;

@end

