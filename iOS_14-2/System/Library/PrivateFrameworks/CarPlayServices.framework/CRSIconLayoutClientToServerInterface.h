/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/


@protocol CRSIconLayoutClientToServerInterface <NSObject>
@required
-(void)fetchIconStateForVehicleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3;
-(void)resetIconStateForVehicleID:(id)arg1;
-(void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(/*^block*/id)arg3;

@end

