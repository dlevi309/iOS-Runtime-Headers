/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/

@class VGVehicle, NSArray;


@protocol VGDataCoordinatorDelegate
@property (nonatomic,readonly) VGVehicle * selectedVehicle; 
@property (nonatomic,readonly) NSArray * vehicles; 
@required
-(NSArray *)vehicles;
-(void)dataCoordinatorDidUpdateInstalledApps:(id)arg1;
-(void)dataCoordinator:(id)arg1 wantsToUpdateVehicle:(id)arg2 syncAcrossDevices:(BOOL)arg3;
-(VGVehicle *)selectedVehicle;
-(void)dataCoordinator:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;
-(void)dataCoordinator:(id)arg1 wantsToSelectVehicle:(id)arg2;

@end

