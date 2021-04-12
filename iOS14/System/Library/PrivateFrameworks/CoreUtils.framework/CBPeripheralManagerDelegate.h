/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol CBPeripheralManagerDelegate <NSObject>
@optional
-(void)peripheralManager:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didUnpublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
-(void)peripheralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
-(void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
-(void)peripheralManager:(id)arg1 didPublishL2CAPChannel:(unsigned short)arg2 error:(id)arg3;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;

@required
-(void)peripheralManagerDidUpdateState:(id)arg1;

@end

