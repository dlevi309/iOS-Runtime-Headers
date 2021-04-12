/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/


@protocol ACCExternalAccessoryProviderProtocol <NSObject>
@optional
-(void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
-(void)stopDestinationSharingForUUID:(id)arg1;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
-(void)initialEAAccessoriesAttachedAfterClientConnection:(id)arg1;
-(void)nmeaSentenceArrived:(id)arg1 forAccessoryUUID:(id)arg2;
-(void)updateAccessoryInfo:(id)arg1;
-(void)startDestinationSharingForUUID:(id)arg1;
-(void)vehicleStatusUpdate:(id)arg1 forAccessoryUUID:(id)arg2;

@required
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)EAAccessoryArrived:(id)arg1;
-(void)EAAccessoryLeft:(id)arg1;
-(void)accessoryClosedEASession:(id)arg1;
-(void)resumeEASessionData:(id)arg1;

@end

