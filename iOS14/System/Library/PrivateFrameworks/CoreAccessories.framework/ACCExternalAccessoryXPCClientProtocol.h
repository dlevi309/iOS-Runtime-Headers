/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
*/


@protocol ACCExternalAccessoryXPCClientProtocol <NSObject>
@required
-(void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2;
-(void)stopDestinationSharingForUUID:(id)arg1;
-(void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2;
-(void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
-(void)ExternalAccessoryArrived:(id)arg1;
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2;
-(void)accessoryCloseExternalAccessorySession:(id)arg1;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
-(void)ExternalAccessoryLeft:(id)arg1;

@end

