/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol HMAccessoryDelegate <NSObject>
@optional
-(void)accessoryDidUpdateName:(id)arg1;
-(void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
-(void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
-(void)accessoryDidUpdateServices:(id)arg1;
-(void)accessory:(id)arg1 didAddProfile:(id)arg2;
-(void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
-(void)accessoryDidUpdateReachability:(id)arg1;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
-(void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;

@end

