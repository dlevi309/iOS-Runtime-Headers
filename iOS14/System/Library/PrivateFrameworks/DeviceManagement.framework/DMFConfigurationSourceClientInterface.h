/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@protocol DMFConfigurationSourceClientInterface <NSObject>
@required
-(void)probe:(/*^block*/id)arg1;
-(void)configurationEngineRequestedAsset:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationStatusDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationEventsDidChange:(id)arg1 completion:(/*^block*/id)arg2;

@end

