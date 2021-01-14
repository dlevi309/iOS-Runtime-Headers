/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/


@protocol SPOwnerSessionPrivateProtocol <SPOwnerSessionProtocol>
@required
-(oneway void)forceUpdateKeyAlignmentRecordForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)forceUpdateKeyMapsForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)beaconForUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)forceDistributeKeysWithCompletion:(/*^block*/id)arg1;
-(void)rawSearchResultsForBeacon:(id)arg1 dateInterval:(id)arg2 completion:(/*^block*/id)arg3;
-(void)beaconStoreStatusWithCompletion:(/*^block*/id)arg1;
-(void)waitForBeaconStoreAvailableWithCompletion:(/*^block*/id)arg1;

@end

