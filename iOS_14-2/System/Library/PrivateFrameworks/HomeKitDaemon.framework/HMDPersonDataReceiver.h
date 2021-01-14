/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMIHomePersonManager, HMIExternalPersonManager;


@protocol HMDPersonDataReceiver <NSObject>
@property (readonly) HMIHomePersonManager * homePersonManager; 
@property (readonly) HMIExternalPersonManager * photosPersonManager; 
@optional
-(HMIHomePersonManager *)homePersonManager;
-(HMIExternalPersonManager *)photosPersonManager;
-(void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleUpdatedUnassociatedFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;
-(void)handleUpdatedIsCurrentDeviceAvailableResident:(BOOL)arg1;
-(void)handleUpdatedIsDataSyncInProgress:(BOOL)arg1;
-(void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;

@required
-(void)configureWithDataSource:(id)arg1 home:(id)arg2;

@end

