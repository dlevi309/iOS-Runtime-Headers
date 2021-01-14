/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
*/


@protocol ACCExternalAccessoryProviderProtocol <NSObject>
@optional
-(void)updateAccessoryInfo:(id)arg1;
-(void)stopDestinationSharingForUUID:(id)arg1;
-(void)startDestinationSharingForUUID:(id)arg1 options:(unsigned long long)arg2;
-(void)nmeaSentenceArrived:(id)arg1 forAccessoryUUID:(id)arg2;
-(void)vehicleStatusUpdate:(id)arg1 forAccessoryUUID:(id)arg2;
-(void)initialEAAccessoriesAttachedAfterClientConnection:(id)arg1;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
-(void)startDestinationSharingForUUID:(id)arg1;

@required
-(void)EAAccessoryArrived:(id)arg1;
-(void)EAAccessoryLeft:(id)arg1;
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)resumeEASessionData:(id)arg1;
-(void)accessoryClosedEASession:(id)arg1;

@end

